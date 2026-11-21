# WUP NES

NES games on the Wii U GamePad, for the [Homebrew Menu](https://github.com/ravensclawx/wup-homebrew). It has the same
shape as [WUP Boy](https://github.com/ravensclawx/wup-boy): a list of games (`main.c`, in the menu's look) and a player
(`player/`) that the list starts with a game's path.

> **Status:** the core is tested on a computer (see [Testing](#testing)). It has been tested on GamePad as well with minor occassional slowdown.

## Install

You need a GamePad with the Homebrew Menu installed (GamePad firmware 7677 only).

1. Unzip `build/wup_nes.zip`. It holds `apps/wup_nes/wup_nes.wup` and `apps/wup_nes/player.wup`.
2. On the GamePad: boot the Homebrew Menu (power on while holding **A**), join Wi-Fi, then in **Settings > Network >
   File Sharing** turn it on (set a password: without one anyone on your network can connect). The menu shows the
   pad's address.
3. Connect to that address with an FTP client (FileZilla, WinSCP, ...) and copy the `apps` folder to the pad's root.
4. Open **WUP NES** from the Homebrew Menu.

## Games

Put games in `apps/wup_nes/roms`:

- `.nes` files (iNES format), up to 1 MB.
- `.zip` files with one `.nes` inside (stored or deflated), the zip up to 256 KB. Zipping roughly halves a game, which
  matters on the pad's 8 MB of storage: `zip -9 game.zip game.nes`.

Supported mappers: 0 (NROM), 1 (MMC1), 2 (UxROM), 3 (CNROM), 4 (MMC3), 7 (AxROM), 66 (GxROM). Others show
"Mapper N is not supported yet".

## Controls

| GamePad | NES |
|---|---|
| A, X | A |
| B, Y | B |
| + | Start |
| - | Select |
| D-pad, left stick | D-pad |
| ZR (hold) | fast forward |
| HOME | pause: Resume, Reset, Quit |

A game with a battery keeps its RAM in `apps/wup_nes/saves/<game>.sav`, written at each pause and when you quit.
(Pull the battery or run it flat mid-game and what happened since the last pause is lost.)

## Build

Needs LLVM (`clang`, `ld.lld`), Python 3 with Pillow, meson and ninja, and
[wup-homebrew](https://github.com/ravensclawx/wup-homebrew) checked out next to this folder:

```
git clone https://github.com/ravensclawx/wup-homebrew
LIBWUP=../wup-homebrew/libwup python3 package.py      # -> build/wup_nes.zip
```

To try the player alone on a connected GamePad: `python3 ../wup-homebrew/libwup/tools/wupbuild.py player`, then
`wuplink.py build/apps/wup_nes_player.wup` (press **Y** in the Homebrew Menu first) and `wuplog.py` for its log.

## How it works

- **`player/nes.c`**, the core, written for this app and portable C. A 6502 (every official opcode and the common
  unofficial ones), a PPU that draws a line at a time with the hardware's scroll registers and a sprite 0 hit at the
  right dot, the APU (two pulses, triangle, noise, DMC) made at 48 kHz a line at a time, and the mappers above.
- **`player/main.c`**, the player: the picture is 256x240 doubled to 512x480 on the firmware's 8-bit layer, the whole
  game (and a `.zip`'s unpacking buffer) lives in the app's memory, the pad's audio queue paces the game, and frames
  go undrawn if the sound is about to run dry.
- **`main.c`**, the list of games, using libwup's kit.

## Testing

`test/host.c` builds the core for a computer:

```
gcc -O2 -o host test/host.c player/nes.c
./host nestest nestest.nes nestest.log          # the CPU against Nintendulator's trace, with cycle counts
./host frames game.nes 600 out.ppm              # run frames, save the last picture
```

Results so far: `nestest` matches all 8,991 instructions and cycle counts; 14 of 16 of blargg's `instr_test-v5` ROMs
pass (the two that fail test unofficial opcodes no game uses); the sprite 0 hit basics test and the APU length counter
test pass; scrolling and sprite demos draw correctly. The MMC3 IRQ tests fail (see below).

## Not done

- Save states and rewind.
- MMC3's scanline counter is clocked once a line instead of from the PPU's address lines, so a few games may glitch.
- Other mappers (MMC2/4, MMC5, VRC, ...), PAL timing, expansion audio, a second controller.
- Speed on the real pad: if it falls short, the first thing to try is skipping the background drawing on frames that
  are not shown.

## Licence

GPL-3.0-or-later ([LICENSE](LICENSE)), as libwup. NES and Famicom are trademarks of Nintendo; this is not affiliated
with Nintendo. Use it with games you own.
