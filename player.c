// FUN_00355948 @ 00355948

void FUN_00355948(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *puRam00355964 = param_1;
  UNRECOVERED_JUMPTABLE = (code *)0x355964;
  FUN_00366f54(uRam00355968,1);
  (*DAT_00355998)();
                    /* WARNING: Could not recover jumptable at 0x00355990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// FUN_0035599c @ 0035599c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035599c(void)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined4 local_28;
  
  FUN_003585ac(s_HBRW8_00350000,0x380000);
  FUN_003585ac(&DAT_00190000,0x200000);
  FUN_003588bc(0x200000,0x2fa000);
  FUN_003585ac(0x390000,0x3e0000);
  FUN_003582d4(0);
  puVar2 = DAT_00355fc4;
  *DAT_00355fc0 = '\x01';
  puVar2[-0xd3] = 0x8001;
  puVar2[-0xd2] = 0x801;
  puVar3 = DAT_00355fc8;
  _DAT_f0000044 = 7;
  _DAT_f0000058 = _DAT_f0000058 & 0xfffffeff;
  DAT_00355fc8[10] = 1;
  puVar3[7] = 1;
  puVar3[8] = 0x120;
  puVar3[9] = 0x271;
  puVar3[2] = 0;
  puVar3[3] = 3;
  puVar3[4] = 0;
  *puVar3 = 0;
  *DAT_00355fcc = DAT_00355fd0;
  iVar12 = DAT_00355fd8;
  if (_DAT_0034f000 == DAT_00355fd4) {
    iVar14 = 0;
    do {
      cVar1 = *(char *)(0x34f018 - iVar14);
      *(char *)(iVar12 - iVar14) = cVar1;
      iVar11 = DAT_00355fdc;
      if (cVar1 == '\0') break;
      bVar17 = iVar14 != -0x3e;
      iVar14 = iVar14 + -1;
    } while (bVar17);
    iVar14 = 0;
    do {
      cVar1 = *(char *)(0x34f058 - iVar14);
      *(char *)(iVar11 - iVar14) = cVar1;
      if (cVar1 == '\0') break;
      bVar17 = iVar14 != -0xbe;
      iVar14 = iVar14 + -1;
    } while (bVar17);
    iVar14 = 0;
    for (iVar11 = 0;
        (cVar1 = *(char *)(iVar12 + iVar11), iVar15 = iVar11, cVar1 == '/' ||
        (iVar15 = iVar14, cVar1 != '\0')); iVar11 = iVar11 + 1) {
      iVar14 = iVar15;
    }
    if (0 < iVar14) {
      FUN_00359188(DAT_00355fe0,DAT_00355fd8,iVar14);
    }
    *(undefined1 *)(DAT_00355fe0 + iVar14) = 0;
  }
  piVar5 = DAT_00355fe8;
  puVar4 = DAT_00355fe4;
  iVar14 = 0;
  iVar12 = 0;
  if (*DAT_00355fe4 - 0x6d5 < 599) {
    iVar12 = *DAT_00355fe4 - 0x800;
  }
  *DAT_00355fe8 = iVar12;
  if (puVar4[1] - 0x6d5 < 599) {
    iVar14 = puVar4[1] - 0x800;
  }
  piVar5[1] = iVar14;
  iVar12 = 0;
  if (puVar4[2] - 0x6d5 < 599) {
    iVar12 = puVar4[2] - 0x800;
  }
  piVar5[2] = iVar12;
  local_28 = 0;
  iVar12 = 0;
  if (puVar4[3] - 0x6d5 < 599) {
    iVar12 = puVar4[3] - 0x800;
  }
  piVar5[3] = iVar12;
  iVar12 = FUN_00358b64(&local_28);
  *DAT_00355fec = (uint)(iVar12 == 0);
  FUN_00357eac();
  if ((DAT_00355ff0 == 0) || (uVar9 = 1, DAT_00355ff0 == 0)) {
    iVar12 = FUN_00366f40(DAT_00355ff4);
    if (iVar12 != 0) goto LAB_00355c38;
    *DAT_00355ff8 = _DAT_f0000408;
    uVar9 = FUN_0035ff90();
  }
  *DAT_00355ffc = uVar9;
LAB_00355c38:
  FUN_00358190();
  piVar6 = DAT_00356008;
  piVar5 = DAT_00356000;
  if (*DAT_00356000 != 0) {
    *DAT_00356004 = 0;
    if ((-1 < *piVar6) && (iVar12 = FUN_00357a2c(*piVar6,100), iVar12 != 0)) {
      FUN_00357b50(*piVar6);
    }
    *piVar6 = -1;
    *puVar2 = *puVar2 | 1;
    FUN_00359150(0x342000,0xb400);
    puVar3 = DAT_0035600c;
    *piVar5 = 0;
    *puVar3 = 0xffffffff;
  }
  if ((code *)*DAT_00356010 != (code *)0x0) {
    (*(code *)*DAT_00356010)();
  }
  FUN_00357cec();
  if (*DAT_00356014 != 0) {
    *DAT_00356014 = 0;
    FUN_00358ac4();
  }
  pcVar7 = DAT_00356018;
  if (*DAT_00356018 == '\x01') {
    FUN_00358ae4(0);
  }
  *pcVar7 = '\0';
  pcVar7 = DAT_0035601c;
  if (*DAT_0035601c == '\x01') {
    uVar10 = 0x46;
    if ((_DAT_0034f000 == DAT_00355fd4) && (uVar10 = (byte)DAT_00356020[0x17] - 1, 100 < uVar10)) {
      uVar10 = 0x46;
    }
    FUN_00358a58(uVar10);
    *pcVar7 = '\0';
  }
  *DAT_00355fcc = 0;
  if (*DAT_00355fc0 == '\0') {
    FUN_00358310(0x100,0);
  }
  if (*DAT_00356024 == '\x01') {
    FUN_0035843c();
  }
  piVar5 = DAT_0035602c;
  if (*DAT_00356028 == '\x01') {
    iVar14 = DAT_0035602c[1];
    iVar12 = *DAT_0035602c * 0x1e0;
    if (iVar12 != 0) {
      FUN_00359150(iVar14,iVar12);
    }
    FUN_00356244(iVar14,iVar12);
    piVar5[0x24] = 0;
    piVar5[0x25] = -0x1000000;
    do {
    } while (0x1e7 < (piVar5[0x16] & 0x7f8U));
    do {
    } while ((piVar5[0x16] & 0x7f8U) >> 3 < 0x3d);
    piVar5[0x10] = *DAT_00356030;
    *piVar5 = *DAT_00356034;
    piVar5[1] = *DAT_00356038;
  }
  FUN_003582d4(0x100);
  iVar12 = DAT_00356040;
  pcVar7 = DAT_0035603c;
  if (*DAT_0035603c != '\0') {
    iVar14 = FUN_00358d7c(DAT_0035603c,*(undefined4 *)(DAT_00356040 + 8),&DAT_00221400,
                          *(undefined4 *)(DAT_00356040 + 0xc));
    uVar9 = 0;
    if (iVar14 == *(int *)(iVar12 + 0xc)) {
      uVar10 = 0;
      if (iVar14 != 0) {
        uVar10 = 0xffffffff;
        pbVar13 = &DAT_00221400;
        do {
          uVar10 = uVar10 ^ *pbVar13;
          uVar16 = DAT_00356044 ^ uVar10 >> 1;
          if ((uVar10 & 1) == 0) {
            uVar16 = uVar10 >> 1;
          }
          uVar10 = DAT_00356044 ^ uVar16 >> 1;
          if ((uVar16 & 1) == 0) {
            uVar10 = uVar16 >> 1;
          }
          uVar16 = DAT_00356044 ^ uVar10 >> 1;
          if ((uVar10 & 1) == 0) {
            uVar16 = uVar10 >> 1;
          }
          uVar10 = DAT_00356044 ^ uVar16 >> 1;
          if ((uVar16 & 1) == 0) {
            uVar10 = uVar16 >> 1;
          }
          uVar16 = DAT_00356044 ^ uVar10 >> 1;
          if ((uVar10 & 1) == 0) {
            uVar16 = uVar10 >> 1;
          }
          uVar10 = DAT_00356044 ^ uVar16 >> 1;
          if ((uVar16 & 1) == 0) {
            uVar10 = uVar16 >> 1;
          }
          uVar16 = DAT_00356044 ^ uVar10 >> 1;
          if ((uVar10 & 1) == 0) {
            uVar16 = uVar10 >> 1;
          }
          uVar10 = DAT_00356044 ^ uVar16 >> 1;
          if ((uVar16 & 1) == 0) {
            uVar10 = uVar16 >> 1;
          }
          iVar14 = iVar14 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iVar14 != 0);
        uVar10 = ~uVar10;
      }
      if (uVar10 == *(uint *)(iVar12 + 0x10)) {
        FUN_00356244(&DAT_00221400);
        puVar8 = DAT_00356020;
        uVar9 = *(undefined4 *)(iVar12 + 0xd0);
        *(undefined4 *)(DAT_00356020 + 0x19) = *(undefined4 *)(iVar12 + 0xc);
        *(undefined4 *)(puVar8 + 0x1d) = uVar9;
        iVar12 = 0;
        do {
          iVar11 = iVar12 + 1;
          *(char *)(iVar12 + 0x34f018) = pcVar7[iVar12];
          iVar14 = DAT_00356048;
          iVar12 = iVar11;
        } while (iVar11 != 0x3f);
        DAT_0034f057 = 0;
        iVar12 = 0;
        do {
          iVar11 = iVar12 + 1;
          *(undefined1 *)(iVar12 + 0x34f058) = *(undefined1 *)(iVar14 + iVar12);
          iVar12 = iVar11;
        } while (iVar11 != 0xbf);
        uVar9 = 0x100;
        *puVar8 = 0;
      }
    }
    *DAT_00355ffc = uVar9;
  }
  return;
}


// FUN_0035604c @ 0035604c

undefined4 FUN_0035604c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_00356114;
  FUN_00359150(DAT_00356114,0xec);
  iVar2 = FUN_00358d7c(param_1,0,piVar1,0xec);
  uVar3 = 0xffffffff;
  if (((0x6f < iVar2) && (*piVar1 == DAT_00356118)) && (0xfff26fff < piVar1[3] - 0xd9001U)) {
    if ((uint)piVar1[1] < 0xd8) {
      piVar1[0x34] = 0;
    }
    else if (0x91400 < (uint)piVar1[0x34]) {
      return 0xfffffffe;
    }
    FUN_00367844(DAT_0035611c,param_1,0x5f);
    iVar2 = DAT_00356120;
    if (param_2 != 0) {
      iVar2 = param_2;
    }
    FUN_00367844(DAT_00356124,iVar2,0xbf);
    uVar3 = 0;
  }
  return uVar3;
}


// FUN_00356128 @ 00356128

undefined4 FUN_00356128(void)

{
  return DAT_00356130;
}


// FUN_00356134 @ 00356134

undefined4 FUN_00356134(void)

{
  return DAT_0035613c;
}


// FUN_00356140 @ 00356140

undefined4 FUN_00356140(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_003561ac;
  if (*DAT_003561ac == '\x01') {
    FUN_0035843c();
    *pcVar1 = '\0';
  }
  puVar2 = DAT_003561b4;
  pcVar1 = DAT_003561b0;
  if (*DAT_003561b0 == '\0') {
    *DAT_003561b8 = DAT_003561b4[0xf];
    *DAT_003561bc = puVar2[-1];
    uVar3 = *puVar2;
    *pcVar1 = '\x01';
    *DAT_003561c0 = uVar3;
  }
  return *puVar2;
}


// FUN_003561c4 @ 003561c4

undefined4 FUN_003561c4(void)

{
  return *DAT_003561d0;
}


// FUN_003561d4 @ 003561d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003561d4(undefined4 param_1,uint param_2)

{
  _DAT_f0009500 = param_1;
  _DAT_f0009504 = param_2 | 0xff000000;
  return;
}


// FUN_003561ec @ 003561ec

void FUN_003561ec(int param_1,int param_2)

{
  FUN_00356244(*DAT_0035623c * param_1 + DAT_0035623c[1],*DAT_0035623c * param_2);
  if (*DAT_00356240 != '\x01') {
    return;
  }
  *DAT_00356240 = '\0';
  FUN_00358310(0,0x100);
  return;
}


// FUN_00356244 @ 00356244

undefined4 FUN_00356244(uint param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = param_1 & 0xffffffe0; uVar1 < param_1 + param_2; uVar1 = uVar1 + 0x20) {
    coproc_moveto_Clean_Data_Cache_by_MVA(uVar1);
  }
  coproc_moveto_Data_Synchronization(0);
  return 0;
}


// FUN_00356298 @ 00356298

undefined4 FUN_00356298(void)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar2 = DAT_00356524;
  uVar7 = 0;
  if (*DAT_00356520 == 0) {
    DAT_00356524[3] = 0;
    puVar2[4] = 0x3f;
    *puVar2 = *puVar2 & 0xfffffffb | 1;
    FUN_00359150(0x342000,0xb400);
    pcVar3 = DAT_00356528;
    puVar2[-8] = puVar2[-8] & 0xfe3fffff;
    puVar2[-7] = puVar2[-7] & 0xffffff7f;
    puVar2[-6] = 0x342000;
    puVar2[-5] = 0x34d400;
    puVar2[1] = 0xb40;
    puVar2[-4] = 0x34d400;
    if (*pcVar3 == '\x01') {
      uVar8 = 300000;
      if (*DAT_00356530 != '\0') {
        uVar8 = 3000000;
      }
      if (uVar8 < (uint)(*DAT_0035652c - *DAT_00356534)) {
        *pcVar3 = '\0';
        FUN_00358310(0,0x100);
      }
    }
    pcVar5 = DAT_0035653c;
    puVar4 = DAT_00356538;
    if ((code *)*DAT_00356538 == (code *)0x0) {
      (*DAT_0035653c)(4);
    }
    else {
      (*(code *)*DAT_00356538)();
      (*pcVar5)(2);
      (*(code *)*puVar4)();
      (*pcVar5)(2);
      (*(code *)*puVar4)();
    }
    iVar6 = DAT_00356540;
    uVar8 = puVar2[-3];
    if (*pcVar3 == '\x01') {
      uVar10 = 300000;
      if (*DAT_00356530 != '\0') {
        uVar10 = 3000000;
      }
      if (uVar10 < (uint)(*DAT_0035652c - *DAT_00356534)) {
        *pcVar3 = '\0';
        FUN_00358310(0,0x100);
      }
    }
    uVar8 = (uVar8 & 0xffffff) + iVar6;
    if ((code *)*puVar4 == (code *)0x0) {
      (*pcVar5)(4);
    }
    else {
      (*(code *)*puVar4)();
      (*pcVar5)(2);
      (*(code *)*puVar4)();
      (*pcVar5)(2);
      (*(code *)*puVar4)();
    }
    piVar1 = DAT_00356520;
    uVar10 = uVar8 >> 10;
    uVar9 = (puVar2[-3] & 0xffffff) + iVar6;
    uVar7 = 0xffffffff;
    if (uVar10 < 0x2d) {
      uVar10 = uVar9 >> 10;
    }
    if ((uVar10 < 0x2d) && (0xb3ff < uVar9 || uVar8 >> 2 != uVar9 >> 2)) {
      *DAT_00356544 = uVar9 >> 2;
      *DAT_00356548 = 0xffffffff;
      *DAT_0035654c = 0;
      puVar4 = DAT_00356550;
      *piVar1 = 1;
      *puVar4 = 1;
      uVar7 = FUN_00357200(DAT_00356554,0,0x800,2);
      *DAT_00356558 = uVar7;
      *puVar2 = *puVar2 & 0xfffffffa;
      return 0;
    }
  }
  return uVar7;
}


// FUN_0035655c @ 0035655c

void FUN_0035655c(uint param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  
  if (*DAT_00356634 == '\x01') {
    uVar3 = 300000;
    if (*DAT_0035663c != '\0') {
      uVar3 = 3000000;
    }
    if (uVar3 < (uint)(*DAT_00356638 - *DAT_00356640)) {
      *DAT_00356634 = '\0';
      FUN_00358310(0,0x100);
    }
  }
  pcVar2 = DAT_00356648;
  puVar1 = DAT_00356644;
  if ((code *)*DAT_00356644 == (code *)0x0) {
    if (0 < (int)param_1) {
      do {
        uVar3 = param_1;
        if (99 < (int)param_1) {
          uVar3 = 100;
        }
        (*pcVar2)(uVar3);
        bVar4 = 99 < param_1;
        param_1 = param_1 - 100;
      } while (bVar4 && param_1 != 0);
    }
  }
  else {
    (*(code *)*DAT_00356644)();
    pcVar2 = DAT_00356648;
    if ((int)param_1 < 1) {
      return;
    }
    do {
      uVar3 = param_1;
      if (1 < (int)param_1) {
        uVar3 = 2;
      }
      (*pcVar2)(uVar3);
      (*(code *)*puVar1)();
      bVar4 = 1 < param_1;
      param_1 = param_1 - 2;
    } while (bVar4 && param_1 != 0);
  }
  return;
}


// FUN_0035664c @ 0035664c

void FUN_0035664c(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  piVar6 = DAT_0035674c;
  puVar5 = DAT_00356748;
  iVar4 = DAT_00356744;
  puVar3 = DAT_00356740;
  piVar2 = DAT_0035673c;
  iVar7 = *DAT_0035673c;
  while (iVar7 != 0) {
    FUN_00356dd0();
    uVar8 = (*puVar3 & 0xffffff) + iVar4;
    uVar1 = uVar8 >> 2;
    if (uVar8 >> 10 < 0x2d) {
      uVar8 = *puVar5;
      while (uVar8 != uVar1) {
        *(undefined4 *)(*puVar5 * 4 + 0x342000) = 0;
        uVar8 = *puVar5;
        *puVar5 = uVar8 + 1;
        if (uVar8 + 1 == 0x2d00) {
          *puVar5 = 0;
        }
        uVar8 = *puVar5;
      }
      if (-1 < *piVar6) {
        iVar7 = *piVar6 - uVar1;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x2d00;
        }
        if (*DAT_00356750 < iVar7) {
          *piVar6 = -1;
        }
        else {
          *DAT_00356750 = iVar7;
        }
      }
    }
    FUN_00356de0();
    FUN_003571c4(5);
    iVar7 = *piVar2;
  }
  return;
}


// FUN_00356754 @ 00356754

int FUN_00356754(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if (*DAT_00356840 != 0) {
    FUN_00356dd0(*DAT_00356840);
    puVar2 = DAT_0035684c;
    uVar3 = (*DAT_00356844 & 0xffffff) + DAT_00356848;
    uVar1 = uVar3 >> 2;
    if (uVar3 >> 10 < 0x2d) {
      uVar3 = *DAT_0035684c;
      while (uVar3 != uVar1) {
        *(undefined4 *)(*puVar2 * 4 + 0x342000) = 0;
        uVar3 = *puVar2;
        *puVar2 = uVar3 + 1;
        if (uVar3 + 1 == 0x2d00) {
          *puVar2 = 0;
        }
        uVar3 = *puVar2;
      }
      if (-1 < *DAT_00356850) {
        iVar4 = *DAT_00356850 - uVar1;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x2d00;
        }
        if (*DAT_00356854 < iVar4) {
          *DAT_00356850 = -1;
        }
        else {
          *DAT_00356854 = iVar4;
        }
      }
    }
    if (*DAT_00356850 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *DAT_00356854;
    }
    FUN_00356de0();
    return iVar4;
  }
  return 0;
}


// FUN_00356858 @ 00356858

int FUN_00356858(void)

{
  int iVar1;
  
  if (*DAT_00356888 != 0) {
    iVar1 = FUN_00356754(*DAT_00356888);
    return 0x24e0 - iVar1;
  }
  return 0;
}


// FUN_0035688c @ 0035688c

int FUN_0035688c(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  if ((0 < param_2) && (*DAT_00356a34 != 0)) {
    FUN_00356dd0();
    puVar2 = DAT_00356a40;
    iVar8 = DAT_00356a3c;
    puVar1 = DAT_00356a38;
    uVar7 = (*DAT_00356a38 & 0xffffff) + DAT_00356a3c;
    uVar5 = uVar7 >> 2;
    if (uVar7 >> 10 < 0x2d) {
      uVar7 = *DAT_00356a40;
      while (uVar7 != uVar5) {
        *(undefined4 *)(*puVar2 * 4 + 0x342000) = 0;
        uVar7 = *puVar2;
        *puVar2 = uVar7 + 1;
        if (uVar7 + 1 == 0x2d00) {
          *puVar2 = 0;
        }
        uVar7 = *puVar2;
      }
      if (-1 < *DAT_00356a44) {
        iVar9 = *DAT_00356a44 - uVar5;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x2d00;
        }
        if (*DAT_00356a48 < iVar9) {
          *DAT_00356a44 = -1;
        }
        else {
          *DAT_00356a48 = iVar9;
        }
      }
    }
    piVar3 = DAT_00356a44;
    iVar9 = 0;
    uVar5 = (*puVar1 & 0xffffff) + iVar8;
    if (uVar5 >> 10 < 0x2d) {
      iVar9 = *DAT_00356a44;
      if (iVar9 == -1 || iVar9 + 1 < 0 != SCARRY4(iVar9,1)) {
        iVar9 = DAT_00356a4c;
        if (uVar5 >> 8 < 0x9b) {
          iVar9 = 0x640;
        }
        *DAT_00356a44 = iVar9 + (uVar5 >> 2);
        *DAT_00356a48 = 0x640;
      }
      piVar4 = DAT_00356a48;
      iVar9 = param_2;
      if (0x24e0 - *DAT_00356a48 < param_2) {
        iVar9 = 0x24e0 - *DAT_00356a48;
      }
      iVar8 = iVar9;
      if (0 < iVar9) {
        do {
          *(undefined4 *)(*piVar3 * 4 + 0x342000) = *param_1;
          iVar6 = *piVar3;
          *piVar3 = iVar6 + 1;
          if (iVar6 + 1 == 0x2d00) {
            *piVar3 = 0;
          }
          iVar8 = iVar8 + -1;
          param_1 = param_1 + 1;
        } while (iVar8 != 0);
      }
      *piVar4 = *piVar4 + iVar9;
    }
    FUN_00356de0();
  }
  return iVar9;
}


// FUN_00356a50 @ 00356a50

void FUN_00356a50(void)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = DAT_00356adc;
  piVar1 = DAT_00356ad4;
  if (*DAT_00356ad4 == 0) {
    return;
  }
  *DAT_00356ad8 = 0;
  if ((-1 < *piVar2) && (iVar5 = FUN_00357a2c(*piVar2,100), iVar5 != 0)) {
    FUN_00357b50(*piVar2);
  }
  puVar3 = DAT_00356ae0;
  *piVar2 = -1;
  *puVar3 = *puVar3 | 1;
  FUN_00359150(0x342000,0xb400);
  puVar4 = DAT_00356ae4;
  *piVar1 = 0;
  *puVar4 = 0xffffffff;
  return;
}


// FUN_00356ae8 @ 00356ae8

void FUN_00356ae8(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = DAT_00356b8c;
  puVar1 = DAT_00356b84;
  uVar3 = *DAT_00356b84;
  uVar5 = (uint)CONCAT11(DAT_000bdab0,DAT_000bdab1) ^ uVar3 & 0xffff;
  uVar6 = *DAT_00356b88;
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      if (((uVar5 & 1) != 0) &&
         ((iVar7 = *(int *)(iVar2 + uVar4 * 4), iVar7 == 0 || (25000 < uVar6 - iVar7)))) {
        uVar3 = uVar3 ^ 1 << (uVar4 & 0xff);
        *(uint *)(iVar2 + uVar4 * 4) = uVar6 | 1;
        *puVar1 = uVar3;
      }
      uVar5 = uVar5 >> 1;
      uVar4 = uVar4 + 1;
    } while (uVar5 != 0);
    return;
  }
  return;
}


// FUN_00356b90 @ 00356b90

undefined4 FUN_00356b90(void)

{
  return *DAT_00356b9c;
}


// FUN_00356ba0 @ 00356ba0

int FUN_00356ba0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + param_1 * 2;
  return ((uint)*(ushort *)(DAT_00356bd0 + uVar1 * 2 + 6) - *(int *)(DAT_00356bd4 + (uVar1 & 3) * 4)
         ) + -0x800;
}


// FUN_00356bd8 @ 00356bd8

void FUN_00356bd8(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  puVar1 = DAT_00356c80;
  iVar2 = DAT_00356c7c;
  if ((code *)*DAT_00356c78 != (code *)0x0) {
    (*(code *)*DAT_00356c78)(param_1);
    puVar1 = DAT_00356c80;
    iVar2 = DAT_00356c7c;
  }
  do {
    uVar4 = (uint)*param_1;
    iVar5 = iVar2;
    iVar3 = iVar2;
    if (uVar4 == 10) {
      do {
        if ((puVar1[6] & 0x20) != 0) break;
        bVar6 = iVar5 != 0;
        iVar5 = iVar5 + -1;
      } while (bVar6);
      *puVar1 = 0xd;
      uVar4 = (uint)*param_1;
    }
    else if (uVar4 == 0) {
      return;
    }
    do {
      if ((puVar1[6] & 0x20) != 0) break;
      bVar6 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar6);
    *puVar1 = uVar4;
    param_1 = param_1 + 1;
  } while( true );
}


// FUN_00356c84 @ 00356c84

undefined1 * FUN_00356c84(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = DAT_00356d74;
  puVar4 = &DAT_00221400;
  puVar3 = (undefined1 *)*DAT_00356d74;
  if (&DAT_00221400 < DAT_00356d70 && DAT_00356d70 < DAT_00356d6c) {
    puVar4 = (undefined1 *)0x2fa400;
  }
  if (puVar3 == (undefined1 *)0x0) {
    bVar1 = &DAT_00221400 < DAT_00356d70;
    if (&DAT_00221400 < DAT_00356d70 && DAT_00356d70 < DAT_00356d6c) {
      bVar1 = (undefined1 *)0x2fa400 < DAT_00356d70;
    }
    puVar3 = (undefined1 *)((uint)(DAT_00356d70 + 0x1f) & 0xffffffe0);
    if (DAT_00356d70 < (undefined1 *)0x190001) {
      puVar3 = &DAT_00190000;
    }
    if (bVar1) {
      puVar3 = &DAT_00190000;
    }
    *DAT_00356d74 = puVar3;
  }
  if ((int)param_1 < 1) {
    if ((param_1 != 0xffffffff && (int)(param_1 + 1) < 0 == SCARRY4(param_1,1)) ||
       ((undefined1 *)-param_1 <= puVar3 + -0x190000)) goto LAB_00356d5c;
  }
  else if (param_1 <= (uint)((int)puVar4 - (int)puVar3)) {
LAB_00356d5c:
    *puVar2 = puVar3 + param_1;
    return puVar3;
  }
  *DAT_00356d78 = 0xc;
  return (undefined1 *)0xffffffff;
}


// FUN_00356d7c @ 00356d7c

int FUN_00356d7c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00356dcc;
  piVar1 = DAT_00356dc8;
  iVar3 = *DAT_00356dc8;
  *(char *)(DAT_00356dcc + iVar3) = (char)param_1;
  iVar3 = iVar3 + 1;
  *piVar1 = iVar3;
  if (param_1 != 10 && iVar3 != 0x9f) {
    return param_1;
  }
  *(undefined1 *)(iVar2 + iVar3) = 0;
  FUN_00356bd8(iVar2);
  *piVar1 = 0;
  return param_1;
}


// FUN_00356dd0 @ 00356dd0

void FUN_00356dd0(void)

{
  return;
}


// FUN_00356de0 @ 00356de0

void FUN_00356de0(void)

{
  return;
}


// FUN_00356de8 @ 00356de8

int FUN_00356de8(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = DAT_00356e58 + 0x19;
  FUN_00356dd0();
  do {
    if (*(char *)(iVar3 + -1) == '\0') {
      *(undefined2 *)(iVar3 + -5) = param_1;
      *(undefined2 *)(iVar3 + -1) = 1;
      iVar1 = 30000;
      if (param_2 < 30000) {
        iVar1 = param_2;
      }
      *(short *)(iVar3 + -3) = (short)iVar1;
      goto LAB_00356e4c;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x14;
  } while (iVar2 != 0xa0);
  iVar2 = -1;
LAB_00356e4c:
  FUN_00356de0();
  return iVar2;
}


// FUN_00356e5c @ 00356e5c

undefined4 FUN_00356e5c(int param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 - 0xa0U < 0xffffff61) {
    return 0xffffffff;
  }
  psVar7 = (short *)(DAT_0035708c + param_1 * 0x14);
  if ((char)psVar7[2] == '\0') {
    return 0xffffffff;
  }
  iVar8 = 0;
  do {
    iVar5 = DAT_00357090 + iVar8 * 0x20;
    if (((*(int *)(iVar5 + 0x18) != 0) && (*(undefined1 **)(iVar5 + 8) <= &stack0xfffffff8)) &&
       (&stack0xfffffff8 < *(undefined1 **)(iVar5 + 8) + *(int *)(iVar5 + 0xc))) goto LAB_00356ee4;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xc);
  iVar8 = -1;
LAB_00356ee4:
  uVar4 = FUN_00356dd0();
  if (0 < *psVar7) {
    *psVar7 = *psVar7 + -1;
    FUN_00356de0();
    return 0;
  }
  if (param_2 == 0) {
LAB_00357080:
    FUN_00356de0(uVar4,param_2);
    return 0xffffffff;
  }
  uVar10 = iVar8 + 1;
  pbVar9 = (byte *)((int)psVar7 + 5);
  bVar1 = *pbVar9;
  *(char *)((int)psVar7 + bVar1 + 6) = (char)uVar10;
  *pbVar9 = bVar1 + 1;
  FUN_00356de0();
  pcVar3 = DAT_00357098;
  piVar2 = DAT_00357094;
  iVar8 = *DAT_00357094;
  if (iVar8 < 1) {
    local_24 = 0;
    local_28 = 0;
    local_2c = 2;
    iVar8 = (*(code *)&SUB_00089050)(&local_2c);
    *piVar2 = iVar8;
    if (0 < iVar8) goto LAB_00356f80;
  }
  else {
LAB_00356f80:
    uVar6 = 1 << (uVar10 & 0xff);
    iVar8 = (*pcVar3)(iVar8,uVar6,1,auStack_30,param_2 | (int)param_2 >> 0x1f);
    if (iVar8 == 0) goto LAB_00357040;
  }
  uVar4 = FUN_00356dd0();
  uVar6 = (uint)*pbVar9;
  if (uVar6 != 0) {
    param_2 = 0;
    do {
      if (uVar10 == *(byte *)((int)psVar7 + param_2 + 6)) {
        *pbVar9 = (byte)(uVar6 - 1);
        for (; param_2 < (uVar6 - 1 & 0xff); param_2 = param_2 + 1) {
          *(undefined1 *)((int)psVar7 + param_2 + 6) = *(undefined1 *)((int)psVar7 + param_2 + 7);
        }
        goto LAB_00357080;
      }
      param_2 = param_2 + 1;
    } while (uVar6 != param_2);
  }
  FUN_00356de0();
  iVar8 = *piVar2;
  if (iVar8 < 1) {
    local_24 = 0;
    local_28 = 0;
    local_2c = 2;
    iVar8 = (*(code *)&SUB_00089050)(&local_2c);
    *piVar2 = iVar8;
    if (iVar8 < 1) {
      return 0;
    }
  }
  uVar6 = 1 << (uVar10 & 0xff);
  iVar8 = (*pcVar3)(iVar8,uVar6,1,&local_2c,0xffffffff);
  if (iVar8 != 0) {
    return 0;
  }
LAB_00357040:
  (*DAT_0035709c)(*piVar2,~uVar6);
  return 0;
}


// FUN_003571c4 @ 003571c4

void FUN_003571c4(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  
  pcVar1 = DAT_003571fc;
  if (0 < (int)param_1) {
    do {
      uVar2 = param_1;
      if (99 < (int)param_1) {
        uVar2 = 100;
      }
      (*pcVar1)(uVar2);
      bVar3 = 99 < param_1;
      param_1 = param_1 - 100;
    } while (bVar3 && param_1 != 0);
    return;
  }
  return;
}


// FUN_00357200 @ 00357200

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00357200(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined4 *puVar25;
  uint uVar26;
  ushort *puVar27;
  bool bVar28;
  bool bVar29;
  uint local_70;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar10 = DAT_00357a0c;
  iVar21 = 0;
  iVar20 = 0;
  iVar24 = DAT_00357a08[-7];
  if (iVar24 != 0) {
    iVar21 = (uint)*(ushort *)(iVar24 + 0x2e) - param_4;
  }
  do {
    iVar12 = iVar10 + iVar20 * 0x20;
    bVar28 = *(int *)(iVar12 + 0x18) != 0;
    if (bVar28) {
      iVar12 = *(int *)(iVar12 + 0x1c);
    }
    if ((bVar28 && iVar12 != 0) && (*(int *)(iVar10 + iVar20 * 0x20) == 0)) {
      FUN_00357a2c(iVar20,100);
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 != 0xc);
  uVar13 = *(uint *)(iVar10 + 0x18);
  if (uVar13 == 0) {
    bVar28 = false;
    uVar16 = 0;
LAB_00357374:
    bVar1 = false;
    bVar2 = false;
LAB_00357378:
    bVar3 = false;
LAB_0035737c:
    bVar4 = false;
LAB_00357380:
    bVar5 = false;
LAB_00357384:
    bVar6 = false;
LAB_00357388:
    bVar7 = false;
LAB_0035738c:
    bVar8 = false;
LAB_00357390:
    bVar9 = false;
LAB_00357394:
    local_70 = 0;
  }
  else {
    if (*(int *)(iVar10 + 0x38) == 0) {
      bVar28 = true;
      uVar16 = 1;
      goto LAB_00357374;
    }
    if (*(int *)(iVar10 + 0x58) == 0) {
      uVar16 = 2;
      bVar1 = true;
      bVar28 = false;
      bVar2 = false;
      goto LAB_00357378;
    }
    if (*(int *)(iVar10 + 0x78) == 0) {
      uVar16 = 3;
      bVar28 = false;
      bVar2 = true;
      bVar1 = false;
      goto LAB_00357378;
    }
    if (*(int *)(iVar10 + 0x98) == 0) {
      uVar16 = 4;
      bVar28 = false;
      bVar3 = true;
      bVar1 = false;
      bVar2 = false;
      goto LAB_0035737c;
    }
    if (*(int *)(iVar10 + 0xb8) == 0) {
      uVar16 = 5;
      bVar28 = false;
      bVar4 = true;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      goto LAB_00357380;
    }
    if (*(int *)(iVar10 + 0xd8) == 0) {
      uVar16 = 6;
      bVar28 = false;
      bVar5 = true;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      goto LAB_00357384;
    }
    if (*(int *)(iVar10 + 0xf8) == 0) {
      uVar16 = 7;
      bVar28 = false;
      bVar6 = true;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      goto LAB_00357388;
    }
    if (*(int *)(iVar10 + 0x118) == 0) {
      uVar16 = 8;
      bVar28 = false;
      bVar7 = true;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      goto LAB_0035738c;
    }
    if (*(int *)(iVar10 + 0x138) == 0) {
      uVar16 = 9;
      bVar28 = false;
      bVar8 = true;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      goto LAB_00357390;
    }
    if (*(int *)(iVar10 + 0x158) == 0) {
      uVar16 = 10;
      bVar28 = false;
      bVar9 = true;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      bVar8 = false;
      goto LAB_00357394;
    }
    if (*(int *)(iVar10 + 0x178) != 0) {
      return 0xffffff9c;
    }
    uVar16 = 0xb;
    bVar28 = false;
    local_70 = 1;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
  }
  if (iVar24 == 0) {
    return 0xffffff9c;
  }
  uVar26 = param_3 + 7U & 0xfffffff8;
  if (uVar26 < 0x801) {
    uVar26 = 0x800;
  }
  iVar20 = FUN_00367140(uVar26);
  iVar24 = iVar10 + uVar16 * 0x20;
  uVar22 = 1;
  piVar14 = (int *)(iVar24 + 8);
  *piVar14 = iVar20;
  if (iVar21 < 2) {
    iVar21 = 1;
  }
  iVar20 = DAT_00357a10 + 0x19;
  FUN_00356dd0();
  do {
    if (*(char *)(iVar20 + -1) == '\0') {
      *(undefined2 *)(iVar20 + -3) = 1;
      *(undefined2 *)(iVar20 + -5) = 0;
      *(undefined2 *)(iVar20 + -1) = 1;
      goto LAB_00357440;
    }
    uVar22 = uVar22 + 1;
    iVar20 = iVar20 + 0x14;
  } while (uVar22 != 0xa0);
  uVar22 = 0xffffffff;
LAB_00357440:
  FUN_00356de0();
  *(uint *)(iVar24 + 0x14) = uVar22;
  if (((int)uVar22 < 1) || (*piVar14 == 0)) {
    FUN_00366f88();
    if (0x9f < uVar22) {
      return 0xffffff9b;
    }
    *(undefined1 *)(DAT_00357a10 + uVar22 * 0x14 + 4) = 0;
    return 0xffffff9b;
  }
  puVar25 = (undefined4 *)(iVar10 + uVar16 * 0x20);
  *puVar25 = param_1;
  puVar25[7] = 0;
  puVar25[3] = uVar26;
  puVar25[1] = param_2;
  puVar25[6] = 1;
  if (0 < *DAT_00357a14) {
    (*DAT_00357a18)(*DAT_00357a14,~(2 << uVar16));
  }
  puVar27 = (ushort *)*DAT_00357a08;
  if (*puVar27 != 0) {
    uVar22 = 1;
    iVar20 = 4;
    puVar19 = DAT_00357a08;
    do {
      uVar23 = 0;
      if (((uVar22 <= *(ushort *)*puVar19) &&
          (iVar12 = *(int *)(iVar20 + (int)*puVar19), iVar12 != 0)) &&
         (*(char *)(iVar12 + 0x12) == '\x10')) {
        iVar15 = *(int *)(iVar12 + 0x3c);
        uVar17 = iVar15 - 0x190000;
        bVar29 = 0x16a3ff < uVar17;
        if (bVar29) {
          uVar17 = iVar15 - 0x350000;
        }
        if ((!bVar29 || uVar17 < 0x30000) || (iVar15 - 0xda000U >> 0xe < 0x17)) {
          uVar18 = *(uint *)(iVar10 + 0x18);
          uVar17 = uVar13;
          if (uVar13 != 0) {
            uVar17 = 1;
          }
          if (uVar18 != 0) {
            uVar18 = 1;
          }
          uVar18 = uVar17 & uVar18 & (uint)(uVar22 == *(uint *)(iVar10 + 0x10));
          uVar17 = uVar18;
          if (uVar22 == *(uint *)(iVar10 + 0x30)) {
            uVar17 = 1;
          }
          if (*(int *)(iVar10 + 0x38) == 0) {
            uVar17 = uVar18;
          }
          if (bVar28) {
            uVar17 = uVar18;
          }
          uVar18 = uVar17;
          if (uVar22 == *(uint *)(iVar10 + 0x50)) {
            uVar18 = 1;
          }
          if (*(int *)(iVar10 + 0x58) == 0) {
            uVar18 = uVar17;
          }
          if (bVar1) {
            uVar18 = uVar17;
          }
          uVar17 = uVar18;
          if (uVar22 == *(uint *)(iVar10 + 0x70)) {
            uVar17 = 1;
          }
          if (*(int *)(iVar10 + 0x78) == 0) {
            uVar17 = uVar18;
          }
          if (bVar2) {
            uVar17 = uVar18;
          }
          uVar18 = uVar17;
          if (uVar22 == *(uint *)(iVar10 + 0x90)) {
            uVar18 = 1;
          }
          if (*(int *)(iVar10 + 0x98) == 0) {
            uVar18 = uVar17;
          }
          if (bVar3) {
            uVar18 = uVar17;
          }
          uVar17 = uVar18;
          if (uVar22 == *(uint *)(iVar10 + 0xb0)) {
            uVar17 = 1;
          }
          if (*(int *)(iVar10 + 0xb8) == 0) {
            uVar17 = uVar18;
          }
          if (bVar4) {
            uVar17 = uVar18;
          }
          uVar18 = uVar17;
          if (uVar22 == *(uint *)(iVar10 + 0xd0)) {
            uVar18 = 1;
          }
          if (*(int *)(iVar10 + 0xd8) == 0) {
            uVar18 = uVar17;
          }
          if (bVar5) {
            uVar18 = uVar17;
          }
          uVar17 = uVar18;
          if (uVar22 == *(uint *)(iVar10 + 0xf0)) {
            uVar17 = 1;
          }
          if (*(int *)(iVar10 + 0xf8) == 0) {
            uVar17 = uVar18;
          }
          if (bVar6) {
            uVar17 = uVar18;
          }
          uVar18 = uVar17;
          if (uVar22 == *(uint *)(iVar10 + 0x110)) {
            uVar18 = 1;
          }
          if (*(int *)(iVar10 + 0x118) == 0) {
            uVar18 = uVar17;
          }
          if (bVar7) {
            uVar18 = uVar17;
          }
          uVar17 = uVar18;
          if (uVar22 == *(uint *)(iVar10 + 0x130)) {
            uVar17 = 1;
          }
          if (*(int *)(iVar10 + 0x138) == 0) {
            uVar17 = uVar18;
          }
          if (bVar8) {
            uVar17 = uVar18;
          }
          uVar18 = uVar17;
          if (uVar22 == *(uint *)(iVar10 + 0x150)) {
            uVar18 = 1;
          }
          if (*(int *)(iVar10 + 0x158) == 0) {
            uVar18 = uVar17;
          }
          if (bVar9) {
            uVar18 = uVar17;
          }
          uVar17 = uVar22 - *(int *)(iVar10 + 0x170);
          if (uVar17 != 0) {
            uVar17 = 1;
          }
          puVar19 = DAT_00357a08;
          if (((local_70 | *(int *)(iVar10 + 0x178) == 0 | uVar17) == 1) && (uVar18 == 0)) {
            *(undefined4 *)(iVar12 + 0x38) = DAT_00357a1c;
            *(int *)(iVar12 + 0x3c) = *piVar14;
            *(uint *)(iVar12 + 0x40) = uVar26;
            *(short *)(iVar12 + 0x30) = (short)iVar21;
            pcVar11 = DAT_00357a20;
            *(uint *)(iVar24 + 0x10) = uVar22;
            iVar12 = (*pcVar11)(uVar22);
            puVar19 = DAT_00357a08;
            uVar23 = uVar22;
            if (iVar12 < 0) {
              uVar23 = 0;
            }
          }
        }
      }
      if (*puVar27 <= uVar22) break;
      iVar20 = iVar20 + 4;
      uVar22 = uVar22 + 1;
    } while (uVar23 == 0);
    if (uVar23 != 0) goto LAB_00357810;
  }
  local_38 = DAT_00357a1c;
  local_3c = 0;
  local_40 = 2;
  local_28 = DAT_00357a24;
  local_2c = *piVar14;
  local_34 = iVar21;
  local_30 = uVar26;
  uVar23 = (*DAT_00357a28)(&local_40);
  if (0 < (int)uVar23) {
    *(uint *)(iVar24 + 0x10) = uVar23;
  }
LAB_00357810:
  if (0 < (int)uVar23) {
    return uVar16;
  }
  FUN_00366f88(*piVar14);
  uVar13 = *(uint *)(iVar24 + 0x14);
  if (uVar13 - 1 < 0x9f) {
    *(undefined1 *)(DAT_00357a10 + uVar13 * 0x14 + 4) = 0;
  }
  if (uVar23 == 0) {
    uVar23 = 0xffffff9a;
  }
  puVar25[6] = 0;
  return uVar23;
}


// FUN_00357a2c @ 00357a2c

undefined4 FUN_00357a2c(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = 0xffffffff;
  if (0xb < param_1) {
    return uVar2;
  }
  iVar5 = DAT_00357b3c + param_1 * 0x20;
  if (*(int *)(iVar5 + 0x18) != 0) {
    iVar3 = FUN_00356e5c(*(int *)(iVar5 + 0x14));
    pcVar1 = DAT_00357b44;
    uVar2 = 0xfffffffe;
    if (iVar3 == 0) {
      uVar4 = *(uint *)(iVar5 + 0x10);
      if (((0 < (int)uVar4) && (uVar4 <= *(ushort *)*DAT_00357b40)) &&
         (iVar3 = *(int *)((ushort *)*DAT_00357b40 + uVar4 * 2), iVar3 != 0)) {
        if (*(char *)(iVar3 + 0x12) != '\x10') {
          uVar4 = 0;
          do {
            (*pcVar1)(1);
            if (*(char *)(iVar3 + 0x12) == '\x10') break;
            bVar6 = uVar4 < 99;
            uVar4 = uVar4 + 1;
          } while (bVar6);
        }
        if (*(char *)(iVar3 + 0x12) == '\x10') {
          (*DAT_00357b48)(*(uint *)(iVar5 + 0x10));
        }
      }
      FUN_00366f88(*(undefined4 *)(iVar5 + 8));
      iVar3 = *(int *)(iVar5 + 0x14);
      if (iVar3 - 1U < 0x9f) {
        *(undefined1 *)(DAT_00357b4c + iVar3 * 0x14 + 4) = 0;
      }
      uVar2 = 0;
      *(int *)(iVar5 + 0x18) = 0;
    }
  }
  return uVar2;
}


// FUN_00357b50 @ 00357b50

void FUN_00357b50(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (0xb < param_1) {
    return;
  }
  iVar9 = DAT_00357ccc + param_1 * 0x20;
  if (*(int *)(iVar9 + 0x18) != 0) {
    uVar2 = 0;
    do {
      iVar4 = DAT_00357ccc + uVar2 * 0x20;
      if (((*(int *)(iVar4 + 0x18) != 0) && (*(undefined1 **)(iVar4 + 8) <= &stack0xfffffff8)) &&
         (&stack0xfffffff8 < *(undefined1 **)(iVar4 + 8) + *(int *)(iVar4 + 0xc))) {
        if (uVar2 == param_1) {
          return;
        }
        goto LAB_00357bd4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0xc);
    if (param_1 != 0xffffffff) {
LAB_00357bd4:
      FUN_00356dd0();
      iVar4 = DAT_00357cd0;
      iVar10 = 1;
      iVar5 = DAT_00357cd0;
      do {
        iVar8 = iVar4 + iVar10 * 0x14;
        pbVar6 = (byte *)(iVar8 + 5);
        uVar2 = (uint)*pbVar6;
        if (uVar2 != 0) {
          iVar7 = 0;
          do {
            if (param_1 + 1 == (uint)*(byte *)(iVar8 + iVar7 + 6)) {
              uVar2 = uVar2 - 1;
              *pbVar6 = (byte)uVar2;
              uVar3 = uVar2 & 0xff;
              if (iVar7 < (int)(uVar2 & 0xff)) {
                do {
                  iVar1 = iVar5 + iVar7;
                  iVar7 = iVar7 + 1;
                  *(undefined1 *)(iVar1 + 0x1a) = *(undefined1 *)(iVar1 + 0x1b);
                  uVar2 = (uint)*pbVar6;
                  uVar3 = uVar2;
                } while (iVar7 < (int)uVar2);
              }
            }
            else {
              uVar3 = uVar2 & 0xff;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)uVar3);
        }
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iVar10 != 0xa0);
      FUN_00356de0();
      (*DAT_00357cd4)(*(undefined4 *)(iVar9 + 0x10));
      (*DAT_00357cd8)(*(undefined4 *)(iVar9 + 0x10));
      FUN_00366f88(*(undefined4 *)(iVar9 + 8));
      if (*(int *)(iVar9 + 0x14) - 1U < 0x9f) {
        *(undefined1 *)(DAT_00357cd0 + *(int *)(iVar9 + 0x14) * 0x14 + 4) = 0;
      }
      *(int *)(iVar9 + 0x18) = 0;
      return;
    }
  }
  return;
}


// FUN_00357cdc @ 00357cdc

undefined4 FUN_00357cdc(void)

{
  return *DAT_00357ce8;
}


// FUN_00357cec @ 00357cec

void FUN_00357cec(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00357d5c;
  iVar4 = 0;
  do {
    if ((*(int *)(iVar1 + iVar4 * 0x20 + 0x18) != 0) &&
       (iVar3 = FUN_00357a2c(iVar4,1000), iVar3 != 0)) {
      FUN_00357b50(iVar4);
    }
    piVar2 = DAT_00357d60;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  if (*DAT_00357d60 < 1) {
    return;
  }
  (*DAT_00357d64)();
  *piVar2 = 0;
  return;
}


// FUN_00357e40 @ 00357e40

/* WARNING: Removing unreachable block (ram,0x00357df8) */
/* WARNING: Removing unreachable block (ram,0x00357dfc) */
/* WARNING: Removing unreachable block (ram,0x00357e00) */
/* WARNING: Removing unreachable block (ram,0x00357e04) */
/* WARNING: Removing unreachable block (ram,0x00357e0c) */
/* WARNING: Removing unreachable block (ram,0x00357e10) */

undefined4 FUN_00357e40(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00357cdc();
  iVar2 = *param_1;
  if (iVar2 < 1) {
    uVar3 = FUN_00356dd0();
    if (*param_1 < 1) {
      iVar2 = FUN_00356de8(1,1);
      *param_1 = iVar2;
    }
    FUN_00356de0(uVar3);
    iVar2 = *param_1;
    if (iVar2 < 1) {
      return 0xc;
    }
  }
  if ((param_1[2] == 0) || (param_1[1] != iVar1)) {
    iVar2 = FUN_00356e5c(iVar2,0xffffffff);
    if (iVar2 != 0) {
      return 0x10;
    }
    iVar2 = 1;
    param_1[1] = iVar1;
  }
  else {
    iVar2 = param_1[2] + 1;
  }
  param_1[2] = iVar2;
  return 0;
}


// FUN_00357e54 @ 00357e54

void FUN_00357e54(int *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  
  if ((param_1 != (int *)0x0) && (param_1[2] != 0)) {
    iVar7 = param_1[1];
    iVar3 = FUN_00357cdc();
    if (iVar7 != iVar3) {
      return;
    }
    iVar3 = param_1[2];
    param_1[2] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      param_1[1] = 0;
      if ((*param_1 - 0xa0U < 0xffffff61) ||
         (psVar6 = (short *)(DAT_0035715c + *param_1 * 0x14), (char)psVar6[2] == '\0')) {
        return;
      }
      FUN_00356dd0();
      bVar1 = *(byte *)((int)psVar6 + 5);
      if (bVar1 == 0) {
        if (*psVar6 < psVar6[1]) {
          *psVar6 = *psVar6 + 1;
        }
        FUN_00356de0();
        return;
      }
      sVar2 = psVar6[3];
      *(byte *)((int)psVar6 + 5) = bVar1 - 1;
      if (bVar1 != 1) {
        uVar4 = 0;
        do {
          uVar5 = uVar4 + 1;
          *(undefined1 *)((int)psVar6 + uVar4 + 6) = *(undefined1 *)((int)psVar6 + uVar4 + 7);
          uVar4 = uVar5;
        } while (uVar5 < (byte)(bVar1 - 1));
      }
      FUN_00356de0();
      if (0 < *DAT_00357160) {
                    /* WARNING: Could not recover jumptable at 0x00357138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00357164)(*DAT_00357160,1 << (sbyte)sVar2);
        return;
      }
      return;
    }
  }
  return;
}


// FUN_00357eac @ 00357eac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00357eac(void)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  char local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar5 = FUN_00356dd0();
  iVar6 = FUN_00356b90();
  puVar4 = DAT_0035816c;
  piVar3 = DAT_00358168;
  iVar7 = *DAT_00358168;
  uVar8 = *DAT_0035816c;
  uVar9 = DAT_0035816c[1];
  *DAT_00358168 = iVar6;
  *puVar4 = uVar8 + (iVar6 - iVar7);
  puVar4[1] = uVar9 + CARRY4(uVar8,iVar6 - iVar7);
  FUN_00356de0(uVar5);
  *puVar4 = 0;
  puVar4[1] = 0;
  iVar6 = FUN_00356b90();
  *piVar3 = iVar6;
  if ((_DAT_0034f000 == DAT_00358170) && (_DAT_0034f138 == DAT_00358174)) {
    if ((_DAT_0034f140 ^ _DAT_0034f13c ^ _DAT_0034f144 ^ _DAT_0034f148 ^ _DAT_0034f14c) ==
        DAT_00358178) {
      iVar6 = FUN_00356b90();
      lVar2 = (ulonglong)(iVar6 - _DAT_0034f14c) * 1000000;
      uVar11 = FUN_0036a1c0((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),DAT_0035817c,0);
      piVar3 = DAT_00358180;
      bVar10 = CARRY4((uint)uVar11,_DAT_0034f148);
      uVar8 = (uint)uVar11 + _DAT_0034f148;
      uVar1 = (ulonglong)_DAT_0034f140;
      uVar9 = (uint)(uVar1 * 1000000);
      iVar6 = _DAT_0034f144 * 1000000;
      *DAT_00358180 = uVar8 + uVar9;
      piVar3[1] = (int)((ulonglong)uVar11 >> 0x20) + (uint)bVar10 +
                  iVar6 + (int)(uVar1 * 1000000 >> 0x20) + (uint)CARRY4(uVar8,uVar9);
      uVar5 = DAT_00358188;
      local_48 = DAT_0034f150;
      local_47 = *DAT_00358184;
      local_46 = DAT_00358184[1];
      local_45 = DAT_00358184[2];
      local_44 = DAT_00358184[3];
      local_43 = DAT_00358184[4];
      local_42 = DAT_00358184[5];
      local_41 = DAT_00358184[6];
      local_40 = DAT_00358184[7];
      local_3f = DAT_00358184[8];
      local_3e = DAT_00358184[9];
      local_3d = DAT_00358184[10];
      local_3c = DAT_00358184[0xb];
      local_3b = DAT_00358184[0xc];
      local_3a = DAT_00358184[0xd];
      local_39 = DAT_00358184[0xe];
      local_38 = DAT_00358184[0xf];
      local_37 = DAT_00358184[0x10];
      local_36 = DAT_00358184[0x11];
      local_35 = DAT_00358184[0x12];
      local_34 = DAT_00358184[0x13];
      local_33 = DAT_00358184[0x14];
      local_32 = DAT_00358184[0x15];
      local_31 = DAT_00358184[0x16];
      local_30 = DAT_00358184[0x17];
      local_2f = DAT_00358184[0x18];
      local_2e = DAT_00358184[0x19];
      local_2d = DAT_00358184[0x1a];
      local_2c = DAT_00358184[0x1b];
      local_2b = DAT_00358184[0x1c];
      local_2a = DAT_00358184[0x1d];
      local_29 = DAT_00358184[0x1e];
      local_28 = DAT_00358184[0x1f];
      local_27 = DAT_00358184[0x20];
      local_26 = DAT_00358184[0x21];
      local_25 = DAT_00358184[0x22];
      local_24 = DAT_00358184[0x23];
      local_23 = DAT_00358184[0x24];
      local_22 = DAT_00358184[0x25];
      local_21 = DAT_00358184[0x26];
      local_20 = DAT_00358184[0x27];
      local_1f = DAT_00358184[0x28];
      local_1e = DAT_00358184[0x29];
      local_1d = DAT_00358184[0x2a];
      local_1c = DAT_00358184[0x2b];
      local_1b = DAT_00358184[0x2c];
      local_1a = DAT_00358184[0x2d];
      if (DAT_0034f150 != '\0') {
        FUN_00367844(DAT_00358188,&local_48,0x2f);
        FUN_0036732c(DAT_0035818c,uVar5,1);
        FUN_00367ee4();
      }
    }
  }
  return;
}


// FUN_00358190 @ 00358190

void FUN_00358190(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  puVar2 = DAT_003582b0;
  if (DAT_003582b0[-0x4e] == DAT_003582b4) {
    lVar1 = *DAT_003582b8;
    if ((int)*DAT_003582b8 == 0 && *(int *)((int)DAT_003582b8 + 4) == 0) {
      *DAT_003582b0 = 0;
      return;
    }
    uVar4 = FUN_00356dd0();
    iVar5 = FUN_00356b90();
    iVar6 = *DAT_003582bc;
    *DAT_003582bc = iVar5;
    puVar3 = DAT_003582c0;
    uVar8 = *DAT_003582c0 + (iVar5 - iVar6);
    uVar9 = DAT_003582c0[1] + (uint)CARRY4(*DAT_003582c0,iVar5 - iVar6);
    *DAT_003582c0 = uVar8;
    puVar3[1] = uVar9;
    FUN_00356de0(uVar4);
    uVar4 = FUN_00356b90();
    puVar2[5] = uVar4;
    lVar10 = (ulonglong)uVar8 * 1000000;
    lVar10 = FUN_0036a1c0((int)lVar10,uVar9 * 1000000 + (int)((ulonglong)lVar10 >> 0x20),
                          DAT_003582c4,0);
    iVar5 = (int)(lVar10 + lVar1);
    uVar11 = FUN_00369e4c(iVar5,(int)((ulonglong)(lVar10 + lVar1) >> 0x20),1000000,0);
    *(undefined8 *)(puVar2 + 2) = uVar11;
    puVar2[4] = iVar5 + (int)uVar11 * -1000000;
    iVar5 = DAT_003582c8;
    iVar6 = 0;
    do {
      iVar7 = iVar6 + -1;
      *(undefined1 *)((int)puVar2 + (0x18 - iVar6)) = *(undefined1 *)(iVar5 - iVar6);
      iVar6 = iVar7;
    } while (iVar7 != -0x30);
    *puVar2 = DAT_003582cc;
    puVar2[1] = puVar2[2] ^ puVar2[3] ^ puVar2[4] ^ puVar2[5] ^ DAT_003582d0;
  }
  return;
}


// FUN_003582d4 @ 003582d4

void FUN_003582d4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  uVar2 = 0;
  iVar3 = 0;
  if (0xff < param_1) {
    param_1 = 0x100;
  }
  do {
    uVar1 = uVar2 >> 8;
    uVar2 = uVar2 + param_1 * 8;
    *(uint *)(iVar3 + -0xfff6a00) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x84);
  return;
}


// FUN_00358310 @ 00358310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00358310(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = DAT_00358438;
  piVar2 = DAT_00358430;
  iVar8 = *DAT_00358430;
  uVar6 = *DAT_00358430 - iVar8;
  if (uVar6 <= DAT_00358434) {
    do {
      do {
        uVar7 = (_DAT_f00094c8 & 0x7f8) >> 3;
        bVar9 = 0x3b < uVar7;
        if (uVar7 < 0x3d) {
          bVar9 = 24999 < (uint)(*piVar2 - *piVar2);
        }
      } while (!bVar9);
      iVar4 = (uVar6 >> 4) * (param_2 - param_1) +
              (int)((ulonglong)
                    ((longlong)(int)((uVar6 >> 4) * (param_2 - param_1)) * (longlong)iVar3) >> 0x20)
      ;
      uVar6 = 0;
      iVar5 = 0;
      uVar7 = ((iVar4 >> 0xd) - (iVar4 >> 0x1f)) + param_1;
      uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
      if (0xff < uVar7) {
        uVar7 = 0x100;
      }
      do {
        uVar1 = uVar6 >> 8;
        uVar6 = uVar6 + uVar7 * 8;
        *(uint *)(iVar5 + -0xfff6a00) = uVar1;
        iVar5 = iVar5 + 4;
      } while (iVar5 != 0x84);
      do {
      } while ((uint)(*piVar2 - *piVar2) < 4000);
      uVar6 = *piVar2 - iVar8;
    } while (uVar6 <= DAT_00358434);
  }
  uVar6 = 0;
  iVar3 = 0;
  param_2 = param_2 & ~((int)param_2 >> 0x1f);
  if (0xff < param_2) {
    param_2 = 0x100;
  }
  do {
    uVar7 = uVar6 >> 8;
    uVar6 = uVar6 + param_2 * 8;
    *(uint *)(iVar3 + -0xfff6a00) = uVar7;
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x84);
  return;
}


// FUN_0035843c @ 0035843c

void FUN_0035843c(void)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  piVar3 = DAT_00358524;
  piVar2 = DAT_00358520;
  puVar1 = DAT_0035851c;
  if (*DAT_00358518 == '\x01') {
    *DAT_00358518 = '\0';
    uVar5 = *puVar1;
    if ((0x2fffff < uVar5) && (iVar4 = *piVar2, uVar5 + iVar4 * 0x1e0 < 0x3f8001)) {
      iVar4 = iVar4 * 0x1e0;
      if (iVar4 != 0) {
        FUN_00359150(uVar5,iVar4);
      }
      FUN_00358530(uVar5,iVar4);
      piVar3[0x24] = 0;
      piVar3[0x25] = -0x1000000;
    }
    do {
      uVar5 = (piVar3[0x16] & 0x7f8U) >> 3;
      bVar6 = 0x3b < uVar5;
      if (uVar5 < 0x3d) {
        bVar6 = 24999 < (uint)(*DAT_00358528 - *DAT_00358528);
      }
    } while (!bVar6);
    piVar3[0x10] = *DAT_0035852c;
    piVar3[1] = *puVar1;
    *piVar3 = *piVar2;
    return;
  }
  return;
}


// FUN_00358530 @ 00358530

undefined4 FUN_00358530(uint param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = param_1 & 0xffffffe0; uVar1 < param_1 + param_2; uVar1 = uVar1 + 0x20) {
    coproc_moveto_Clean_Data_Cache_by_MVA(uVar1);
  }
  coproc_moveto_Data_Synchronization(0);
  return 0;
}


// FUN_0035855c @ 0035855c

uint FUN_0035855c(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_2;
  if (uVar3 != 0) {
    iVar1 = 0;
    pbVar2 = param_2 + 1;
    do {
      if (uVar3 - 0x7f < 0xffffffa1) {
        uVar3 = 0x3f;
      }
      iVar1 = iVar1 + (uint)*(ushort *)(*(int *)(param_1 + 4) + -0xfa + uVar3 * 8);
      uVar3 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    return iVar1 + 2U >> 2;
  }
  return 0;
}


// FUN_003585ac @ 003585ac

undefined4 FUN_003585ac(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  uVar2 = DAT_00358764;
  piVar10 = DAT_0035875c;
  uVar3 = 0xfffffffe;
  if ((0x100000 < param_2 - param_1) || (iVar5 = *DAT_0035875c, iVar5 == 4)) {
    return uVar3;
  }
  uVar11 = param_1;
  if (param_1 < param_2) {
    do {
      iVar5 = FUN_003589bc(uVar3);
      iVar1 = DAT_00358760;
      piVar10 = DAT_0035875c;
      uVar6 = *(uint *)(iVar5 + (uVar11 >> 0x12 & 0xfffffffc));
      uVar3 = 0xffffffff;
      if ((uVar6 & 3) != 1) {
        return 0xffffffff;
      }
      puVar7 = (uint *)(uVar6 & uVar2 | uVar11 >> 10 & 0x3fc);
      if (puVar7 == (uint *)0x0) {
        return 0xffffffff;
      }
      if ((*puVar7 & 3) != 1) {
        return 0xffffffff;
      }
      uVar11 = uVar11 + 0x1000;
    } while (uVar11 < param_2);
    iVar5 = *DAT_0035875c;
    puVar7 = (uint *)(DAT_00358760 + iVar5 * 0x48);
    *puVar7 = param_1;
    puVar7[1] = 0;
    uVar11 = param_1;
    if (param_1 < param_2) {
      do {
        iVar5 = FUN_003589bc();
        piVar10 = DAT_0035875c;
        uVar6 = *(uint *)(iVar5 + (uVar11 >> 0x12 & 0xfffffffc));
        uVar12 = uVar11 + 0x10000;
        puVar4 = (undefined4 *)0x0;
        if ((uVar6 & 3) == 1) {
          puVar4 = (undefined4 *)(uVar6 & uVar2 | uVar11 >> 10 & 0x3fc);
        }
        uVar3 = *puVar4;
        iVar5 = *DAT_0035875c;
        iVar8 = iVar1 + iVar5 * 0x48;
        iVar9 = *(int *)(iVar8 + 4);
        *(int *)(iVar8 + 4) = iVar9 + 1;
        *(undefined4 *)(iVar8 + iVar9 * 4 + 8) = uVar3;
        uVar11 = uVar12;
      } while (uVar12 < param_2);
      *piVar10 = iVar5 + 1;
      if (param_1 < param_2) {
        do {
          uVar11 = param_1 >> 10;
          iVar5 = FUN_003589bc();
          uVar6 = *(uint *)(iVar5 + (param_1 >> 0x12 & 0xfffffffc));
          param_1 = param_1 + 0x1000;
          puVar7 = (uint *)0x0;
          if ((uVar6 & 3) == 1) {
            puVar7 = (uint *)(uVar6 & uVar2 | uVar11 & 0x3fc);
          }
          *puVar7 = *puVar7 | 0xc;
        } while (param_1 < param_2);
      }
      goto LAB_0035874c;
    }
  }
  else {
    puVar7 = (uint *)(DAT_00358760 + iVar5 * 0x48);
    *puVar7 = param_1;
    puVar7[1] = 0;
  }
  *piVar10 = iVar5 + 1;
LAB_0035874c:
  FUN_00358768();
  return 0;
}


// FUN_00358768 @ 00358768

undefined4 FUN_00358768(void)

{
  coproc_moveto_Data_Synchronization(0);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  return 0;
}


// FUN_00358778 @ 00358778

undefined4 FUN_00358778(uint param_1,uint param_2)

{
  for (param_1 = param_1 & 0xffffffe0; param_1 < param_2; param_1 = param_1 + 0x20) {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(param_1);
  }
  coproc_moveto_Data_Synchronization(0);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return 0;
}


// FUN_003587a4 @ 003587a4

void FUN_003587a4(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar3 = DAT_003588b8;
  iVar2 = DAT_003588b4;
  piVar1 = DAT_003588b0;
  iVar4 = *DAT_003588b0;
  while (iVar4 != 0) {
    *piVar1 = iVar4 + -1;
    puVar9 = (uint *)(iVar2 + (iVar4 + -1) * 0x48);
    uVar11 = *puVar9;
    uVar10 = uVar11 + puVar9[1] * 0x10000;
    FUN_00358778(uVar11,uVar10);
    if (uVar11 < uVar10) {
      uVar12 = 0;
      do {
        uVar5 = *(undefined4 *)(iVar2 + *piVar1 * 0x48 + (uVar12 >> 0xe & 0xfffffffc) + 8);
        uVar6 = uVar11 + uVar12;
        iVar4 = FUN_003589bc();
        uVar7 = *(uint *)(iVar4 + (uVar6 >> 0x12 & 0xfffffffc));
        uVar12 = uVar12 + 0x1000;
        puVar8 = (undefined4 *)0x0;
        if ((uVar7 & 3) == 1) {
          puVar8 = (undefined4 *)(uVar7 & uVar3 | uVar6 >> 10 & 0x3fc);
        }
        *puVar8 = uVar5;
      } while (uVar11 + uVar12 < uVar10);
    }
    FUN_00358768();
    FUN_00358778(uVar11,uVar10);
    iVar4 = *piVar1;
  }
  return;
}


// FUN_003588bc @ 003588bc

undefined4 FUN_003588bc(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = param_1 >> 0x12 & 0xfffffffc;
  iVar2 = FUN_003589bc();
  uVar9 = *(uint *)(iVar2 + uVar10);
  uVar3 = 0xffffffff;
  if (((uVar9 & 3) == 2) && (*DAT_003589ac != 2)) {
    iVar6 = 0;
    uVar8 = DAT_003589b0 + *DAT_003589ac * 0x400;
    uVar7 = param_1 & 0xfff00000;
    do {
      uVar4 = uVar9 & 0xc;
      if (uVar7 < param_2) {
        uVar4 = 0xc;
      }
      iVar5 = ((short)((ushort)(uVar9 >> 10) & 3) * 0x550 | 2U) + uVar4 + uVar7;
      uVar7 = uVar7 + 0x1000;
      *(int *)(uVar8 + iVar6 * 4) = iVar5;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
    FUN_00358778(uVar8,uVar8 + 0x400);
    piVar1 = DAT_003589ac;
    iVar6 = *DAT_003589ac;
    *(uint *)(DAT_003589b4 + iVar6 * 4) = uVar9;
    *(uint *)(DAT_003589b8 + iVar6 * 4) = param_1 & 0xfff00000;
    *piVar1 = iVar6 + 1;
    *(uint *)(iVar2 + uVar10) = uVar9 & 0x1e0 | uVar8 | 0x11;
    FUN_00358768();
    uVar3 = 0;
  }
  return uVar3;
}


// FUN_003589bc @ 003589bc

uint FUN_003589bc(void)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Translation_table_base_0();
  return uVar1 & DAT_003589cc;
}


// FUN_003589d0 @ 003589d0

void FUN_003589d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_00358a54;
  iVar2 = DAT_00358a50;
  piVar1 = DAT_00358a4c;
  iVar4 = *DAT_00358a4c;
  while (iVar4 != 0) {
    *piVar1 = iVar4 + -1;
    iVar4 = *(int *)(iVar2 + (iVar4 + -1) * 4);
    FUN_00358778(iVar4,iVar4 + 0x100000);
    uVar5 = *(undefined4 *)(iVar3 + *piVar1 * 4);
    iVar4 = FUN_003589bc();
    *(undefined4 *)((*(uint *)(iVar2 + *piVar1 * 4) >> 0x12 & 0xfffffffc) + iVar4) = uVar5;
    FUN_00358768();
    iVar4 = *(int *)(iVar2 + *piVar1 * 4);
    FUN_00358778(iVar4,iVar4 + 0x100000);
    iVar4 = *piVar1;
  }
  FUN_003587a4();
  return;
}


// FUN_00358a58 @ 00358a58

void FUN_00358a58(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_00358ab8;
  if (100 < param_1) {
    return;
  }
  *DAT_00358ab8 = 0;
  puVar1[1] = (char)((uint)((short)((param_1 * 0xff + 0x32 & 0xffff) >> 2) * 0x147b) >> 0x11);
  puVar1[2] = *DAT_00358abc;
  (*(code *)&LAB_0000dc7c)(*DAT_00358ac0);
  return;
}


// FUN_00358ac4 @ 00358ac4

void FUN_00358ac4(int param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_00358ae0 & 0xfffffeff;
  if (param_1 != 0) {
    uVar1 = uVar1 | 0x100;
  }
  *DAT_00358ae0 = uVar1;
  return;
}


// FUN_00358ae4 @ 00358ae4

void FUN_00358ae4(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = DAT_00358b60;
  puVar2 = DAT_00358b5c;
  piVar1 = DAT_00358b58;
  iVar5 = param_1;
  if (param_1 != 0) {
    iVar5 = 1;
  }
  if (*DAT_00358b58 == iVar5) {
    return;
  }
  if (param_1 == 0) {
    uVar4 = *DAT_00358b5c & 0xfffffffe;
  }
  else {
    *DAT_00358b5c = *DAT_00358b5c | 0x80000000;
    *puVar2 = *puVar2 & 0x7fffffff;
    puVar2[0x19] = puVar2[0x17];
    *piVar3 = puVar2[0x17] << 4;
    uVar4 = *puVar2 | 1;
  }
  *puVar2 = uVar4;
  *piVar1 = iVar5;
  return;
}


// FUN_00358b64 @ 00358b64

int FUN_00358b64(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  
  *param_1 = 0;
  local_2c = 0;
  local_30 = 0;
  iVar4 = (*DAT_00358d54)(&local_30);
  puVar1 = DAT_00358d58;
  if (iVar4 == 0) {
    uVar6 = 0x900000;
    uVar5 = 0x1100000;
    if ((char)local_30 == '\x01') {
      uVar6 = 0x1100000;
      uVar5 = 0x900000;
    }
    iVar4 = (*(code *)&SUB_00009140)(*DAT_00358d58,uVar6,0x34e000,0x10,auStack_28);
    local_34 = 0xffffffff;
    if (iVar4 == 0) {
      iVar4 = FUN_00367760(0x34e008,DAT_00358d5c,8);
      if (iVar4 == 0) {
        local_34 = 1;
      }
      else {
        iVar4 = (*(code *)&SUB_00009140)(*puVar1,uVar6 | 0x1000,0x34e000,0x10,auStack_28);
        if (iVar4 == 0) {
          iVar4 = FUN_00367760(0x34e008,DAT_00358d5c,8);
          local_34 = (uint)(iVar4 == 0);
        }
      }
    }
    iVar4 = (*(code *)&SUB_00009140)(*puVar1,uVar5,0x34e000,0x10,auStack_28);
    if (iVar4 == 0) {
      iVar4 = FUN_00367760(0x34e008,DAT_00358d5c,8);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(code *)&SUB_00009140)(*puVar1,uVar5 | 0x1000,0x34e000,0x10,auStack_28);
        if (iVar4 != 0) {
          return -5;
        }
        iVar4 = FUN_00367760(0x34e008,DAT_00358d5c,8);
        if (iVar4 != 0) {
          iVar4 = 1;
        }
      }
      piVar2 = DAT_00358d64;
      if (local_34 != 0xffffffff && (int)(local_34 + 1) < 0 == SCARRY4(local_34,1)) {
        if (iVar4 == 0) {
          uVar6 = uVar5;
        }
        if (local_34 != 1) {
          uVar6 = uVar5;
        }
        *DAT_00358d60 = uVar6;
        *piVar2 = uVar6 + 0x800000;
        *(undefined4 *)(DAT_00358d68 + 0x20) = 0x800;
        iVar4 = FUN_00359204(DAT_00358d6c);
        uVar3 = DAT_00358d6c;
        if (iVar4 == 0) {
          FUN_0035a0e8(DAT_00358d6c,DAT_00358d70);
          FUN_0035a0e8(uVar3,DAT_00358d74);
          *DAT_00358d78 = 1;
          iVar4 = 0;
        }
        return iVar4;
      }
    }
  }
  return -5;
}


// FUN_00358d7c @ 00358d7c

int FUN_00358d7c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_6c [84];
  
  iVar2 = FUN_003596c8(DAT_00358e18,auStack_6c,param_1,1,DAT_00358e14);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_2 != 0) {
    thunk_FUN_00359ea8(DAT_00358e18,auStack_6c,param_2,0);
  }
  uVar1 = DAT_00358e18;
  iVar2 = FUN_00359d5c(DAT_00358e18,auStack_6c,param_3,param_4);
  FUN_00359b24(uVar1,auStack_6c);
  return iVar2;
}


// FUN_00358e1c @ 00358e1c

int FUN_00358e1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_6c [84];
  
  iVar2 = FUN_003596c8(DAT_00358ea8,auStack_6c,param_1,0x502,DAT_00358ea4);
  uVar1 = DAT_00358ea8;
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar3 = thunk_FUN_00359db0(DAT_00358ea8,auStack_6c,param_2,param_3);
  iVar2 = FUN_00359b24(uVar1,auStack_6c);
  if (iVar2 == 0) {
    iVar2 = iVar3;
  }
  if (iVar3 < 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}


// FUN_00358eac @ 00358eac

int FUN_00358eac(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_118 [4];
  int local_114;
  
  iVar1 = FUN_0035959c(DAT_00358edc,param_1,auStack_118);
  if (iVar1 == 0) {
    iVar1 = local_114;
  }
  return iVar1;
}


// FUN_00358ee0 @ 00358ee0

undefined4 FUN_00358ee0(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar1 = 0xfffffffb;
  if ((param_2 < (uint)(*DAT_00358fb4 - *DAT_00358fb0) >> 0xc) &&
     (iVar4 = *DAT_00358fb0 + param_2 * 0x1000, iVar4 != -1)) {
    if (param_5 != 0) {
      do {
        local_28 = 0;
        uVar3 = param_5;
        if (0xfff < param_5) {
          uVar3 = 0x1000;
        }
        iVar2 = (*(code *)&SUB_00009140)(*DAT_00358fb8,param_3 + iVar4,0x34e000,uVar3,&local_28);
        if (iVar2 != 0) {
          return 0xfffffffb;
        }
        FUN_00359188(param_4,0x34e000,uVar3);
        param_5 = param_5 - uVar3;
        param_3 = param_3 + uVar3;
        param_4 = param_4 + uVar3;
      } while (param_5 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}


// FUN_00358fbc @ 00358fbc

undefined4 FUN_00358fbc(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  
  if ((param_2 < (uint)(*DAT_00359080 - *DAT_0035907c) >> 0xc) &&
     (iVar3 = *DAT_0035907c + param_2 * 0x1000, iVar3 != -1)) {
    do {
      if (param_5 == 0) {
        return 0;
      }
      local_28 = 0;
      uVar2 = param_5;
      if (0xfff < param_5) {
        uVar2 = 0x1000;
      }
      FUN_00359188(0x34e000,param_4,uVar2);
      iVar1 = (*(code *)&SUB_00008fb2)(*DAT_00359084,param_3 + iVar3,0x34e000,uVar2,&local_28);
      param_5 = param_5 - uVar2;
      param_3 = param_3 + uVar2;
      param_4 = param_4 + uVar2;
    } while (iVar1 == 0);
  }
  return 0xfffffffb;
}


// FUN_003590fc @ 003590fc

void FUN_003590fc(uint *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  
  uVar1 = (uint)param_2;
  if (0xf < param_3) {
    uVar1 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    for (; ((uint)param_1 & 3) != 0; param_1 = (uint *)((int)param_1 + 1)) {
      *(byte *)param_1 = param_2;
      param_3 = param_3 - 1;
    }
    while (0xf < param_3) {
      *param_1 = uVar1;
      param_1[1] = uVar1;
      puVar2 = param_1 + 3;
      param_1[2] = uVar1;
      param_1 = param_1 + 4;
      *puVar2 = uVar1;
      param_3 = param_3 - 0x10;
    }
  }
  while (bVar3 = param_3 != 0, param_3 = param_3 - 1, bVar3) {
    *(byte *)param_1 = (byte)uVar1;
    param_1 = (uint *)((int)param_1 + 1);
  }
  return;
}


// FUN_00359150 @ 00359150

void FUN_00359150(undefined4 param_1,undefined4 param_2)

{
  FUN_003590fc(param_1,0,param_2);
  return;
}


// FUN_00359188 @ 00359188

void FUN_00359188(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  if ((0xf < param_3) && ((((uint)param_1 ^ (uint)param_2) & 3) == 0)) {
    for (; ((uint)param_1 & 3) != 0; param_1 = (undefined4 *)((int)param_1 + 1)) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_3 = param_3 - 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    while (0xf < param_3) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      puVar1 = param_2 + 3;
      puVar2 = param_1 + 3;
      param_1[2] = param_2[2];
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
      *puVar2 = *puVar1;
      param_3 = param_3 - 0x10;
    }
  }
  while (bVar3 = param_3 != 0, param_3 = param_3 - 1, bVar3) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


// FUN_003591f4 @ 003591f4

void FUN_003591f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_003590fc(param_1,param_3,param_2);
  return;
}


// FUN_00359204 @ 00359204

uint FUN_00359204(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  uint uStack_28;
  
  uVar3 = FUN_0035a5f4();
  if (uVar3 == 0) {
    uVar9 = 0xffffffff;
    iVar8 = 1;
    local_44 = *DAT_00359588;
    local_40 = DAT_00359588[1];
    uStack_3c = DAT_00359588[2];
    uStack_38 = DAT_00359588[3];
    local_34 = DAT_00359588[4];
    uStack_30 = DAT_00359588[5];
    local_2c = DAT_00359588[6];
    uStack_28 = DAT_00359588[7];
    puVar4 = (uint *)(param_1 + 0x30);
    uVar5 = 1;
    iVar7 = 1;
    local_70 = 0xffffffff;
    uVar6 = 0;
    while ((uVar3 = 0xffffffac, uVar6 != uVar9 || uVar5 != local_70 &&
           (uVar6 != local_70 || uVar5 != uVar9))) {
      if (iVar8 == iVar7) {
        iVar7 = iVar7 << 1;
        iVar8 = 0;
        uVar9 = uVar6;
        local_70 = uVar5;
      }
      local_48 = 8;
      local_4c = DAT_00359590;
      local_50 = param_1;
      uVar11 = FUN_0035eff0(param_1,&local_44,&local_2c,DAT_0035958c,0xff00008,0,DAT_00359594,
                            &local_50);
      uVar2 = DAT_00359598;
      uVar1 = DAT_0035958c;
      uVar3 = (uint)uVar11;
      if ((int)uVar3 < 0) break;
      if (uVar3 != 0) {
        uVar11 = CONCAT44(0x3ff,uVar3 & 0x3ff);
      }
      if (uVar3 != 0 && (int)uVar11 != (int)((ulonglong)uVar11 >> 0x20)) {
        *(undefined4 *)(param_1 + 0x20) = local_44;
        *(undefined4 *)(param_1 + 0x24) = local_40;
        uVar3 = FUN_0035c958(param_1,&local_44,uVar1,uVar2,0,&local_68,0x18);
        if (((-1 < (int)uVar3) && (uVar3 = 0xffffffea, (local_68 & 0xffff0000) == 0x20000)) &&
           ((local_68 & 0xffff) < 2)) {
          uVar5 = *puVar4 & 0xfffffdff;
          if ((local_68 & 0xffff) == 0) {
            uVar5 = uVar5 | 0x200;
          }
          *puVar4 = uVar5;
          if (local_5c != 0) {
            if (*(uint *)(param_1 + 0x70) < local_5c) break;
            *(uint *)(param_1 + 0x70) = local_5c;
          }
          if (local_58 != 0) {
            if (*(uint *)(param_1 + 0x74) < local_58) break;
            *(uint *)(param_1 + 0x74) = local_58;
          }
          if (local_54 != 0) {
            if (*(uint *)(param_1 + 0x78) < local_54) break;
            *(uint *)(param_1 + 0x78) = local_54;
            uVar5 = local_54;
            if (*(uint *)(param_1 + 0x7c) < local_54) {
              uVar5 = *(uint *)(param_1 + 0x7c);
            }
            *(uint *)(param_1 + 0x7c) = uVar5;
          }
          uVar5 = *(uint *)(*(int *)(param_1 + 0x68) + 0x20);
          bVar10 = uVar5 == 0 || local_60 == uVar5;
          if (uVar5 == 0 || local_60 == uVar5) {
            *(uint *)(param_1 + 0x6c) = local_60;
            bVar10 = local_64 == *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
          }
          if (bVar10) goto LAB_0035942c;
        }
        break;
      }
LAB_0035942c:
      uVar11 = FUN_0035c958(param_1,&local_44,0x7ff00000,0x7ff0000c,0,&local_68,0xc);
      uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
      uVar3 = (uint)uVar11;
      if ((int)uVar3 < 0) {
        if (uVar3 != 0xfffffffe) break;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x34) ^ local_64;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ local_68;
        *(uint *)(param_1 + 0x34) = uVar5;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) ^ local_60;
      }
      if (local_2c != 0xffffffff) {
        iVar8 = iVar8 + 1;
        uVar5 = uStack_28;
      }
      uVar6 = local_2c;
      if (local_2c == 0xffffffff || uVar5 == 0xffffffff) {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (*(int *)(param_1 + 0x30) >> 0x1f);
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        FUN_0036a1a4(*(undefined4 *)(param_1 + 0x2c));
        *(undefined4 *)(param_1 + 0x54) = extraout_r1;
        *(uint *)(param_1 + 0x3c) = *puVar4;
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
        return 0;
      }
    }
    iVar7 = *(int *)(param_1 + 0x68);
    if (*(int *)(iVar7 + 0x34) == 0) {
      FUN_00366f88(*(undefined4 *)(param_1 + 0xc));
      iVar7 = *(int *)(param_1 + 0x68);
    }
    if (*(int *)(iVar7 + 0x38) == 0) {
      FUN_00366f88(*(undefined4 *)(param_1 + 0x1c));
      iVar7 = *(int *)(param_1 + 0x68);
    }
    if (*(int *)(iVar7 + 0x3c) == 0) {
      FUN_00366f88(*(undefined4 *)(param_1 + 100));
      return uVar3;
    }
  }
  return uVar3;
}


// FUN_0035959c @ 0035959c

uint FUN_0035959c(int param_1,undefined4 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_4c [32];
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  uint local_24;
  
  local_2c = param_2;
  uVar1 = FUN_0035fb70(param_1,auStack_4c,&local_2c,0);
  if (-1 < (int)uVar1) {
    uVar2 = uVar1 & 0xffc00;
    if (uVar2 == 0xffc00) {
      param_3[8] = 0x2f;
      param_3[9] = 0;
      *param_3 = 2;
      return 0;
    }
    uVar1 = *(int *)(param_1 + 0x70) + 1;
    uVar1 = FUN_0035c958(param_1,auStack_4c,0x780ffc00,uVar1 | uVar2,0,param_3 + 8,uVar1 & 0x3ff);
    if (-1 < (int)uVar1) {
      *param_3 = (char)(uVar1 >> 0x14);
      uVar2 = FUN_0035c958(param_1,auStack_4c,0x700ffc00,uVar2 | 0x20000008,0,auStack_28,8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar1 = 0;
      if (uVar2 >> 0x14 == 0x201) {
        local_24 = uVar2 & 0x3ff;
      }
      else if (uVar2 >> 0x14 != 0x202) {
        return 0;
      }
      *(uint *)(param_3 + 4) = local_24;
    }
  }
  return uVar1;
}


// FUN_003596c8 @ 003596c8

uint FUN_003596c8(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint local_40 [3];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = param_3;
  if (((param_4 & 2) == 0) || (uVar1 = FUN_0035f9dc(param_1), uVar1 == 0)) {
    puVar12 = (ushort *)(param_2 + 1);
    puVar10 = param_2 + 2;
    param_2[0xc] = param_4;
    param_2[0xf] = 0;
    param_2[0xd] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = param_5;
    uVar1 = FUN_0035fb70(param_1,puVar10,&local_28,puVar12);
    uVar7 = local_28;
    if (uVar1 == 0xffffffff || (int)(uVar1 + 1) < 0 != SCARRY4(uVar1,1)) {
      uVar6 = uVar1;
      if (uVar1 != 0xfffffffe) goto LAB_00359ab4;
      uVar1 = (uint)*puVar12;
      uVar6 = 0xfffffffe;
      if (uVar1 == 0x3ff) goto LAB_00359ab4;
      *(undefined1 *)((int)param_2 + 6) = 1;
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 **)(param_1 + 0x28) = param_2;
      *param_2 = uVar3;
      if ((param_4 & 0x100) == 0) goto LAB_00359ab4;
      uVar13 = FUN_00366f6c(local_28);
      uVar6 = 0xffffffdc;
      if (*(uint *)(param_1 + 0x70) < uVar13) goto LAB_00359ab4;
      local_34 = uVar7;
      uVar2 = 0x20100000;
      local_40[2] = uVar13 | uVar1 << 10 | 0x100000;
      local_2c = 0;
      local_40[1] = 0;
      local_30 = uVar1 << 10 | 0x20100000;
      local_40[0] = uVar1 << 10 | 0x40100000;
      uVar6 = FUN_0035ad1c(param_1,puVar10,local_40,3);
      if (((int)uVar6 < 0) || ((uVar6 != 0 && (uVar6 = FUN_0035b4a8(param_1,0), uVar6 != 0)))) {
        if (uVar6 == 0xffffffe4) {
          uVar6 = 0xffffffdc;
        }
        goto LAB_00359ab4;
      }
    }
    else {
      *(undefined1 *)((int)param_2 + 6) = 1;
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 **)(param_1 + 0x28) = param_2;
      *param_2 = uVar7;
      uVar6 = 0xffffffef;
      if (((param_4 & 0x200) != 0) || (uVar6 = 0xffffffeb, (uVar1 & 0x7ff00000) != 0x100000))
      goto LAB_00359ab4;
      if ((param_4 & 0x400) == 0) {
        uVar2 = FUN_0035c958(param_1,puVar10,DAT_00359b1c,(uint)*puVar12 << 10 | 0x20000008,0,
                             param_2 + 10,8);
        uVar6 = uVar2;
        if ((int)uVar2 < 0) goto LAB_00359ab4;
      }
      else {
        uVar2 = (uint)*puVar12 << 10 | 0x20100000;
        param_2[0xc] = param_2[0xc] | 0x10000;
      }
    }
    piVar4 = (int *)param_2[0x14];
    if (piVar4[2] != 0) {
      uVar1 = param_2[0xc];
      iVar11 = 0;
      uVar13 = 0;
      do {
        if ((uVar1 & 1) != 0) {
          pbVar5 = (byte *)(piVar4[1] + iVar11);
          uVar6 = FUN_0035c958(param_1,puVar10,DAT_00359b20,
                               (uint)*pbVar5 << 0x14 | (uint)*puVar12 << 10 | *(uint *)(pbVar5 + 8)
                               | 0x30000000,0,*(undefined4 *)(pbVar5 + 4),
                               *(uint *)(pbVar5 + 8) & 0x3ff);
          if ((uVar6 == 0xffffffff || (int)(uVar6 + 1) < 0 != SCARRY4(uVar6,1)) &&
             (uVar6 != 0xfffffffe)) goto LAB_00359ab4;
          uVar1 = param_2[0xc];
          piVar4 = (int *)param_2[0x14];
        }
        if ((uVar1 & 2) != 0) {
          if (*(uint *)(param_1 + 0x78) < *(uint *)(piVar4[1] + iVar11 + 8)) {
            uVar6 = 0xffffffe4;
            goto LAB_00359ab4;
          }
          uVar1 = uVar1 | 0x10000;
          param_2[0xc] = uVar1;
        }
        uVar13 = uVar13 + 1;
        iVar11 = iVar11 + 0xc;
      } while (uVar13 < (uint)piVar4[2]);
    }
    iVar11 = *piVar4;
    if (iVar11 == 0) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28);
      iVar11 = FUN_00367140(uVar7);
      param_2[0x13] = iVar11;
      if (iVar11 == 0) {
        uVar6 = 0xfffffff4;
        goto LAB_00359ab4;
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x68);
      param_2[0x13] = iVar11;
      uVar7 = *(undefined4 *)(iVar8 + 0x28);
    }
    FUN_003591f4(iVar11,uVar7,0xff);
    param_2[0x10] = 0xffffffff;
    uVar1 = 0;
    if ((uVar2 & 0x7ff00000) == 0x20100000) {
      param_2[0x11] = 0;
      param_2[10] = 0xfffffffe;
      param_2[0x10] = 0xfffffffe;
      param_2[0xb] = uVar2 & 0x3ff;
      param_2[0xc] = param_2[0xc] | 0x100000;
      uVar6 = *(uint *)(*(int *)(param_1 + 0x68) + 0x28);
      param_2[0x12] = uVar6;
      if ((uVar2 & 0x3ff) != 0) {
        uVar1 = 0x3fe;
        if (uVar6 < 0x3fe) {
          uVar1 = uVar6;
        }
        uVar6 = FUN_0035c958(param_1,puVar10,DAT_00359b1c,
                             uVar1 | (uint)*(ushort *)(param_2 + 1) << 10 | 0x20000000,0,
                             param_2[0x13],uVar1);
        uVar1 = 0;
        if (uVar6 == 0xffffffff || (int)(uVar6 + 1) < 0 != SCARRY4(uVar6,1)) {
LAB_00359ab4:
          param_2[0xc] = param_2[0xc] | 0x80000;
          FUN_00359b84(param_1,param_2);
          puVar10 = (undefined4 *)(param_1 + 0x28);
          do {
            puVar9 = puVar10;
            puVar10 = (undefined4 *)*puVar9;
            if (puVar10 == (undefined4 *)0x0) goto LAB_00359af0;
          } while (puVar10 != param_2);
          *puVar9 = *param_2;
LAB_00359af0:
          if (*(int *)param_2[0x14] == 0) {
            FUN_00366f88(param_2[0x13]);
          }
          return uVar6;
        }
      }
    }
  }
  return uVar1;
}


// FUN_00359b24 @ 00359b24

undefined4 FUN_00359b24(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  uVar1 = FUN_00359b84();
  piVar3 = (int *)(param_1 + 0x28);
  do {
    piVar2 = piVar3;
    piVar3 = (int *)*piVar2;
    if (piVar3 == (int *)0x0) goto LAB_00359b5c;
  } while (piVar3 != param_2);
  *piVar2 = *param_2;
LAB_00359b5c:
  if (*(int *)param_2[0x14] != 0) {
    return uVar1;
  }
  FUN_00366f88(param_2[0x13]);
  return uVar1;
}


// FUN_00359b84 @ 00359b84

int FUN_00359b84(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_r1;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((*(byte *)(param_2 + 0x32) & 8) != 0) {
    return 0;
  }
  iVar1 = FUN_0035b918(param_1,param_2);
  uVar4 = *(uint *)(param_2 + 0x30);
  if (iVar1 == 0) {
    if ((uVar4 & 0x10000) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_2 + 8);
    bVar7 = iVar1 != -1;
    if (bVar7) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (!bVar7 || iVar1 == -1) {
      return 0;
    }
    if ((uVar4 & 0x100000) == 0) {
      uVar4 = param_1[4];
      *param_1 = 0xffffffff;
      if (uVar4 < 0xfffffffe) {
        uVar2 = param_1[5];
        iVar6 = param_1[0x1a];
        uVar3 = param_1[7];
        pcVar5 = *(code **)(iVar6 + 8);
        iVar1 = param_1[6] + *(int *)(iVar6 + 0x18) + -1;
        FUN_0036a1a4(iVar1);
        iVar1 = (*pcVar5)(iVar6,uVar4,uVar2,uVar3,iVar1 - extraout_r1);
        if (iVar1 != 0) {
          return iVar1;
        }
        FUN_003591f4(param_1[7],*(undefined4 *)(param_1[0x1a] + 0x28),0xff);
        param_1[4] = 0xffffffff;
      }
      iVar1 = (**(code **)(param_1[0x1a] + 0x10))();
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar4 & 0x100000) == 0) {
      local_30 = *(undefined4 *)(param_2 + 0x28);
      local_2c = *(undefined4 *)(param_2 + 0x2c);
      local_40 = 0x20200008;
      local_3c = &local_30;
    }
    else {
      local_3c = *(undefined4 **)(param_2 + 0x4c);
      local_40 = *(uint *)(param_2 + 0x2c) | 0x20100000;
    }
    local_40 = local_40 | (uint)*(ushort *)(param_2 + 4) << 10;
    local_34 = *(undefined4 *)(*(int *)(param_2 + 0x50) + 4);
    local_38 = *(uint *)(*(int *)(param_2 + 0x50) + 8) | (uint)*(ushort *)(param_2 + 4) << 10 |
               0x10200000;
    iVar1 = FUN_0035ad1c(param_1,(int *)(param_2 + 8),&local_40,2);
    if ((-1 < iVar1) && ((iVar1 == 0 || (iVar1 = FUN_0035b4a8(param_1,0), iVar1 == 0)))) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
      return 0;
    }
    uVar4 = *(uint *)(param_2 + 0x30);
  }
  *(uint *)(param_2 + 0x30) = uVar4 | 0x80000;
  return iVar1;
}


// FUN_00359d5c @ 00359d5c

void FUN_00359d5c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*(byte *)(param_2 + 0x32) & 2) != 0) && (iVar1 = FUN_0035b918(), iVar1 != 0)) {
    return;
  }
  FUN_0035cd90(param_1,param_2,param_3,param_4);
  return;
}


// thunk_FUN_00359db0 @ 00359dac

int thunk_FUN_00359db0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_25;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 & 0x40000) != 0) {
    iVar1 = FUN_0035b918(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = *(uint *)(param_2 + 0x30);
  }
  uVar4 = *(uint *)(param_2 + 0x34);
  if (((uVar3 & 0x800) != 0) && (uVar2 = *(uint *)(param_2 + 0x2c), uVar4 < uVar2)) {
    *(uint *)(param_2 + 0x34) = uVar2;
    uVar4 = uVar2;
  }
  iVar1 = -0x1b;
  if (uVar4 + param_4 <= *(uint *)(param_1 + 0x74)) {
    if (((uVar3 & 0x20000) != 0) || (uVar4 <= *(uint *)(param_2 + 0x2c))) {
LAB_00359e78:
      iVar1 = FUN_0035d06c(param_1,param_2,param_3,param_4);
      if (-1 < iVar1) {
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfff7ffff;
      }
      return iVar1;
    }
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x2c);
    do {
      if (uVar4 <= *(uint *)(param_2 + 0x34)) goto LAB_00359e78;
      uStack_25 = 0;
      iVar1 = FUN_0035d06c(param_1,param_2,&uStack_25,1);
    } while (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1));
  }
  return iVar1;
}


// FUN_00359db0 @ 00359db0

int FUN_00359db0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_25;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 & 0x40000) != 0) {
    iVar1 = FUN_0035b918(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = *(uint *)(param_2 + 0x30);
  }
  uVar4 = *(uint *)(param_2 + 0x34);
  if (((uVar3 & 0x800) != 0) && (uVar2 = *(uint *)(param_2 + 0x2c), uVar4 < uVar2)) {
    *(uint *)(param_2 + 0x34) = uVar2;
    uVar4 = uVar2;
  }
  iVar1 = -0x1b;
  if (uVar4 + param_4 <= *(uint *)(param_1 + 0x74)) {
    if (((uVar3 & 0x20000) != 0) || (uVar4 <= *(uint *)(param_2 + 0x2c))) {
LAB_00359e78:
      iVar1 = FUN_0035d06c(param_1,param_2,param_3,param_4);
      if (-1 < iVar1) {
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfff7ffff;
      }
      return iVar1;
    }
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x2c);
    do {
      if (uVar4 <= *(uint *)(param_2 + 0x34)) goto LAB_00359e78;
      local_25 = 0;
      iVar1 = FUN_0035d06c(param_1,param_2,&local_25,1);
    } while (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1));
  }
  return iVar1;
}


// thunk_FUN_00359ea8 @ 00359ea4

uint thunk_FUN_00359ea8(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_2 + 0x34);
  uVar3 = param_3;
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar7 = *(uint *)(param_2 + 0x2c);
      uVar3 = uVar7;
      if (uVar7 < uVar5) {
        uVar3 = uVar5;
      }
      if ((*(byte *)(param_2 + 0x32) & 2) == 0) {
        uVar3 = uVar7;
      }
      uVar3 = uVar3 + param_3;
      if (uVar3 == 0xffffffff || (int)(uVar3 + 1) < 0 != SCARRY4(uVar3,1)) {
        return 0xffffffea;
      }
    }
    else {
      uVar3 = uVar5;
      if ((param_4 == 1) && (uVar3 = uVar5 + param_3, (int)(uVar5 + param_3) < 0)) {
        return 0xffffffea;
      }
    }
  }
  uVar7 = 0xffffffea;
  if ((uVar3 <= *(uint *)(param_1 + 0x74)) && (uVar7 = uVar5, uVar5 != uVar3)) {
    if ((*(byte *)(param_2 + 0x32) & 2) == 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar4 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c) - 8;
      if (uVar4 <= uVar5) {
        iVar2 = FUN_00369d30(uVar5,uVar4);
        uVar7 = (iVar2 - 1U) - (DAT_0035a0d8 & iVar2 - 1U >> 1);
        uVar7 = (uVar7 & DAT_0035a0dc) + (DAT_0035a0dc & uVar7 >> 2);
        uVar7 = FUN_00369d30((uVar5 - ((uVar7 + (uVar7 >> 4) & DAT_0035a0e0) * DAT_0035a0e4 >> 0x16
                                      & 0xfffffffc)) + -8,uVar4);
      }
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        iVar2 = FUN_00369d30(uVar3,uVar4);
        uVar1 = DAT_0035a0dc;
        uVar5 = DAT_0035a0d8;
        uVar6 = (iVar2 - 1U) - (DAT_0035a0d8 & iVar2 - 1U >> 1);
        uVar6 = (uVar6 & DAT_0035a0dc) + (DAT_0035a0dc & uVar6 >> 2);
        uVar6 = FUN_00369d30((uVar3 - ((uVar6 + (uVar6 >> 4) & DAT_0035a0e0) * DAT_0035a0e4 >> 0x16
                                      & 0xfffffffc)) + -8,uVar4);
        uVar5 = uVar6 - (uVar5 & uVar6 >> 1);
        uVar5 = (uVar5 & uVar1) + (uVar1 & uVar5 >> 2);
        uVar5 = uVar3 - (uVar6 * uVar4 +
                        ((uVar5 + (uVar5 >> 4) & DAT_0035a0e0) * DAT_0035a0e4 >> 0x16 & 0xfffffffc))
        ;
      }
      if (((uVar7 == uVar6) && (*(uint *)(param_2 + 0x44) <= uVar5)) &&
         (uVar5 < *(int *)(param_2 + 0x48) + *(uint *)(param_2 + 0x44))) {
        *(uint *)(param_2 + 0x3c) = uVar5;
        *(uint *)(param_2 + 0x34) = uVar3;
        return uVar3;
      }
    }
    uVar7 = FUN_0035b918(param_1);
    if (uVar7 == 0) {
      *(uint *)(param_2 + 0x34) = uVar3;
      uVar7 = uVar3;
    }
  }
  return uVar7;
}


// FUN_00359ea8 @ 00359ea8

uint FUN_00359ea8(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_2 + 0x34);
  uVar3 = param_3;
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar7 = *(uint *)(param_2 + 0x2c);
      uVar3 = uVar7;
      if (uVar7 < uVar5) {
        uVar3 = uVar5;
      }
      if ((*(byte *)(param_2 + 0x32) & 2) == 0) {
        uVar3 = uVar7;
      }
      uVar3 = uVar3 + param_3;
      if (uVar3 == 0xffffffff || (int)(uVar3 + 1) < 0 != SCARRY4(uVar3,1)) {
        return 0xffffffea;
      }
    }
    else {
      uVar3 = uVar5;
      if ((param_4 == 1) && (uVar3 = uVar5 + param_3, (int)(uVar5 + param_3) < 0)) {
        return 0xffffffea;
      }
    }
  }
  uVar7 = 0xffffffea;
  if ((uVar3 <= *(uint *)(param_1 + 0x74)) && (uVar7 = uVar5, uVar5 != uVar3)) {
    if ((*(byte *)(param_2 + 0x32) & 2) == 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar4 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c) - 8;
      if (uVar4 <= uVar5) {
        iVar2 = FUN_00369d30(uVar5,uVar4);
        uVar7 = (iVar2 - 1U) - (DAT_0035a0d8 & iVar2 - 1U >> 1);
        uVar7 = (uVar7 & DAT_0035a0dc) + (DAT_0035a0dc & uVar7 >> 2);
        uVar7 = FUN_00369d30((uVar5 - ((uVar7 + (uVar7 >> 4) & DAT_0035a0e0) * DAT_0035a0e4 >> 0x16
                                      & 0xfffffffc)) + -8,uVar4);
      }
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        iVar2 = FUN_00369d30(uVar3,uVar4);
        uVar1 = DAT_0035a0dc;
        uVar5 = DAT_0035a0d8;
        uVar6 = (iVar2 - 1U) - (DAT_0035a0d8 & iVar2 - 1U >> 1);
        uVar6 = (uVar6 & DAT_0035a0dc) + (DAT_0035a0dc & uVar6 >> 2);
        uVar6 = FUN_00369d30((uVar3 - ((uVar6 + (uVar6 >> 4) & DAT_0035a0e0) * DAT_0035a0e4 >> 0x16
                                      & 0xfffffffc)) + -8,uVar4);
        uVar5 = uVar6 - (uVar5 & uVar6 >> 1);
        uVar5 = (uVar5 & uVar1) + (uVar1 & uVar5 >> 2);
        uVar5 = uVar3 - (uVar6 * uVar4 +
                        ((uVar5 + (uVar5 >> 4) & DAT_0035a0e0) * DAT_0035a0e4 >> 0x16 & 0xfffffffc))
        ;
      }
      if (((uVar7 == uVar6) && (*(uint *)(param_2 + 0x44) <= uVar5)) &&
         (uVar5 < *(int *)(param_2 + 0x48) + *(uint *)(param_2 + 0x44))) {
        *(uint *)(param_2 + 0x3c) = uVar5;
        *(uint *)(param_2 + 0x34) = uVar3;
        return uVar3;
      }
    }
    uVar7 = FUN_0035b918(param_1);
    if (uVar7 == 0) {
      *(uint *)(param_2 + 0x34) = uVar3;
      uVar7 = uVar3;
    }
  }
  return uVar7;
}


// FUN_0035a0e8 @ 0035a0e8

int FUN_0035a0e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c4 [3];
  undefined4 local_b8;
  uint local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [34];
  ushort local_52;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_28 = param_2;
  iVar3 = FUN_0035f9dc();
  if (iVar3 == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x28);
    iVar3 = FUN_0035fb70(param_1,&local_48,&local_28,&local_52);
    uVar2 = local_28;
    if ((iVar3 != -2) || (local_52 == 0x3ff)) {
      if (-1 < iVar3) {
        iVar3 = -0x11;
      }
      return iVar3;
    }
    uVar4 = FUN_00366f6c(local_28);
    iVar3 = -0x24;
    if (uVar4 <= *(uint *)(param_1 + 0x70)) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
      iVar3 = FUN_0035a7b8(param_1,auStack_74);
      if (iVar3 == 0) {
        local_94 = local_48;
        uStack_90 = uStack_44;
        uStack_8c = uStack_40;
        uStack_88 = uStack_3c;
        local_84 = local_38;
        uStack_80 = uStack_34;
        uStack_7c = uStack_30;
        uStack_78 = uStack_2c;
        do {
          uVar1 = DAT_0035a338;
          if (uStack_80._3_1_ == '\0') {
            local_9c = DAT_0035a338;
            local_98 = &uStack_7c;
            iVar3 = FUN_0035a894(param_1,auStack_74,&local_9c,1);
            if (iVar3 != 0) {
              return iVar3;
            }
            local_ac = uVar1;
            if (uStack_34._3_1_ != '\0') {
              local_a4 = uVar1;
              *(undefined4 **)(param_1 + 0x28) = &local_50;
              local_4a = 0;
              local_4c = 0;
              uVar5 = *(int *)(param_1 + 0x30) + 1;
              uVar6 = uVar5 & 0x7fffffff;
              if ((uVar5 & 0x3ff) != 0) {
                uVar6 = uVar6 | 0x80000000;
              }
              *(uint *)(param_1 + 0x30) = uVar6;
              local_a0 = auStack_74;
              iVar3 = FUN_0035a894(param_1,&local_94,&local_a4,1);
              *(undefined4 *)(param_1 + 0x28) = local_50;
              if (iVar3 != 0) {
                return iVar3;
              }
              uVar5 = *(int *)(param_1 + 0x30) - 1;
              uVar6 = uVar5 & 0x7fffffff;
              if ((uVar5 & 0x3ff) != 0) {
                uVar6 = uVar6 | 0x80000000;
              }
              *(uint *)(param_1 + 0x30) = uVar6;
              local_ac = 0;
              if (uStack_34._3_1_ == '\0') {
                local_ac = uVar1;
              }
            }
            uVar5 = (uint)local_52;
            local_b8 = uVar2;
            local_c4[1] = 0;
            local_b4 = uVar5 << 10 | 0x20000008;
            local_c4[0] = uVar5 << 10 | 0x40100000;
            local_c4[2] = uVar4 | uVar5 << 10 | 0x200000;
            local_b0 = auStack_74;
            local_a8 = auStack_74;
            iVar3 = FUN_0035a894(param_1,&local_48,local_c4,4);
            return iVar3;
          }
          iVar3 = FUN_0035eff0(param_1,&local_94,&uStack_7c,0xffffffff,0xffffffff,0,0,0);
        } while (iVar3 == 0);
      }
    }
  }
  return iVar3;
}


// FUN_0035a33c @ 0035a33c

/* WARNING: Type propagation algorithm not settling */

uint FUN_0035a33c(code *******param_1,code *******param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  code *****pppppcVar3;
  code *******pppppppcVar4;
  code *******pppppppcVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  int iVar8;
  code ******ppppppcVar9;
  int iVar10;
  int iVar11;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  code *******local_2c;
  code *******local_28;
  
  iVar11 = 1;
  local_44 = *DAT_0035a5ec;
  uStack_40 = DAT_0035a5ec[1];
  uStack_3c = DAT_0035a5ec[2];
  uStack_38 = DAT_0035a5ec[3];
  local_34 = DAT_0035a5ec[4];
  local_30 = DAT_0035a5ec[5];
  local_2c = (code *******)DAT_0035a5ec[6];
  local_28 = (code *******)DAT_0035a5ec[7];
  pppppppcVar5 = (code *******)0x1;
  iVar8 = 1;
  pppppppcVar6 = (code *******)0xffffffff;
  pppppppcVar7 = (code *******)0xffffffff;
  pppppppcVar4 = (code *******)0x0;
  do {
    if (pppppppcVar4 == pppppppcVar6 && pppppppcVar5 == pppppppcVar7) {
      return 0xffffffac;
    }
    if (pppppppcVar4 == pppppppcVar7 && pppppppcVar5 == pppppppcVar6) {
      return 0xffffffac;
    }
    if (iVar11 == iVar8) {
      iVar8 = iVar11 << 1;
      iVar11 = 0;
      pppppppcVar6 = pppppppcVar4;
      pppppppcVar7 = pppppppcVar5;
    }
    uVar1 = (*(code *)param_2)(param_3);
    if (uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (*(code *)param_2)(param_3,local_28);
    if (uVar1 != 0) {
      return uVar1;
    }
    pppppppcVar5 = (code *******)&local_2c;
    uVar1 = FUN_0035eff0(param_1,&local_44,&local_2c,0xffffffff,0xffffffff,0,0,0);
    if (uVar1 != 0) {
      return uVar1;
    }
    if ((short)local_30 != 0) {
      uVar1 = 0;
      iVar10 = 0x20000008;
      do {
        pppppppcVar5 = DAT_0035a5f0;
        uVar2 = FUN_0035c958(param_1,&local_44,DAT_0035a5f0,iVar10,0,&local_4c,8);
        if (uVar2 == 0xffffffff || (int)(uVar2 + 1) < 0 != SCARRY4(uVar2,1)) {
          if (uVar2 != 0xfffffffe) {
            return uVar2;
          }
        }
        else {
          if (uVar2 >> 0x14 == 0x202) {
            pppppppcVar5 = param_1;
            uVar2 = FUN_0035fdc8(param_1,0,param_1,local_4c,local_48,param_2,param_3);
          }
          else {
            if ((uVar2 >> 0x14 != 0x200) || (param_4 == 0)) goto LAB_0035a450;
            uVar2 = (*(code *)param_2)(param_3,local_4c);
            if (uVar2 != 0) {
              return uVar2;
            }
            pppppppcVar5 = param_2;
            uVar2 = (*(code *)param_2)(param_3,local_48);
          }
          if (uVar2 != 0) {
            return uVar2;
          }
        }
LAB_0035a450:
        uVar1 = uVar1 + 1;
        iVar10 = iVar10 + 0x400;
      } while (uVar1 < (local_30 & 0xffff));
    }
    if (local_2c != (code *******)0xffffffff) {
      iVar11 = iVar11 + 1;
      pppppppcVar5 = local_28;
    }
    pppppppcVar4 = local_2c;
    if (local_2c == (code *******)0xffffffff || pppppppcVar5 == (code *******)0xffffffff) {
      ppppppcVar9 = param_1[10];
      do {
        if (ppppppcVar9 == (code ******)0x0) {
          return 0;
        }
        if (*(char *)((int)ppppppcVar9 + 6) == '\x01') {
          pppppcVar3 = ppppppcVar9[0xc];
          if (((uint)pppppcVar3 & 0x110000) == 0x10000) {
            uVar1 = FUN_0035fdc8(param_1,ppppppcVar9 + 0x10,param_1,ppppppcVar9[10],ppppppcVar9[0xb]
                                 ,param_2,param_3);
            if (uVar1 != 0) {
              return uVar1;
            }
            pppppcVar3 = ppppppcVar9[0xc];
          }
          if ((((uint)pppppcVar3 & 0x120000) == 0x20000) &&
             (uVar1 = FUN_0035fdc8(param_1,ppppppcVar9 + 0x10,param_1,ppppppcVar9[0xe],
                                   ppppppcVar9[0xd],param_2,param_3), uVar1 != 0)) {
            return uVar1;
          }
        }
        ppppppcVar9 = (code ******)*ppppppcVar9;
      } while( true );
    }
  } while( true );
}


// FUN_0035a5f4 @ 0035a5f4

undefined4 FUN_0035a5f4(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_2 + 0x34);
  param_1[0x1a] = param_2;
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x20);
  if (iVar5 == 0) {
    iVar2 = FUN_00367140(*(undefined4 *)(param_2 + 0x28));
    param_1[3] = iVar2;
    if (iVar2 != 0) goto LAB_0035a63c;
  }
  else {
    param_1[3] = iVar5;
    iVar2 = iVar5;
LAB_0035a63c:
    if (*(int *)(param_2 + 0x38) != 0) {
      uVar4 = *(undefined4 *)(param_2 + 0x28);
      param_1[7] = *(int *)(param_2 + 0x38);
LAB_0035a678:
      FUN_003591f4(iVar2,uVar4,0xff);
      *param_1 = 0xffffffff;
      FUN_003591f4(param_1[7],*(undefined4 *)(param_1[0x1a] + 0x28),0xff);
      param_1[4] = 0xffffffff;
      param_2 = param_1[0x1a];
      if (*(int *)(param_2 + 0x3c) == 0) {
        iVar5 = FUN_00367140(*(undefined4 *)(param_2 + 0x2c));
        param_1[0x19] = iVar5;
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_2 + 0x34);
          goto LAB_0035a76c;
        }
      }
      else {
        param_1[0x19] = *(int *)(param_2 + 0x3c);
      }
      iVar5 = *(int *)(param_2 + 0x50);
      iVar2 = *(int *)(param_2 + 0x40);
      iVar3 = *(int *)(param_2 + 0x44);
      uVar6 = *(uint *)(param_2 + 0x48);
      param_1[0x1f] = iVar5;
      if (iVar2 == 0) {
        iVar2 = 0xff;
      }
      if (iVar3 == 0) {
        iVar3 = 0x7fffffff;
      }
      param_1[0x1c] = iVar2;
      uVar1 = 0x3fe;
      if (uVar6 != 0) {
        uVar1 = uVar6;
      }
      param_1[0x1d] = iVar3;
      param_1[0x1e] = uVar1;
      if (iVar5 == -1) {
        uVar1 = 0;
      }
      else {
        if (iVar5 != 0) goto LAB_0035a748;
        uVar6 = *(uint *)(param_2 + 0x4c);
        if (uVar6 == 0) {
          uVar6 = *(uint *)(param_2 + 0x1c);
        }
        if (uVar6 >> 3 <= uVar1) {
          uVar1 = uVar6 >> 3;
        }
        if (*(uint *)(param_2 + 0x28) < uVar1) {
          uVar1 = *(uint *)(param_2 + 0x28);
        }
      }
      param_1[0x1f] = uVar1;
LAB_0035a748:
      param_1[8] = 0xffffffff;
      param_1[9] = 0xffffffff;
      FUN_00359150(param_1 + 10,0x2c);
      return 0;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    iVar3 = FUN_00367140(uVar4);
    param_1[7] = iVar3;
    if (iVar3 != 0) goto LAB_0035a678;
LAB_0035a76c:
    if (iVar5 != 0) goto LAB_0035a780;
  }
  FUN_00366f88(param_1[3]);
  param_2 = param_1[0x1a];
LAB_0035a780:
  if (*(int *)(param_2 + 0x38) == 0) {
    FUN_00366f88(param_1[7]);
    param_2 = param_1[0x1a];
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    FUN_00366f88(param_1[0x19]);
    return 0xfffffff4;
  }
  return 0xfffffff4;
}


// FUN_0035a7b8 @ 0035a7b8

void FUN_0035a7b8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_r1;
  int *piVar2;
  
  iVar1 = FUN_0035a8d0(param_1,param_2 + 1);
  if ((iVar1 == 0) && (iVar1 = FUN_0035a8d0(param_1,param_2), iVar1 == 0)) {
    piVar2 = param_2 + 2;
    *piVar2 = 0;
    iVar1 = FUN_0035aa30(param_1,0,param_1,4,*param_2,0,piVar2,4);
    if (iVar1 == 0 || iVar1 == -0x54) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x24);
      if (0 < iVar1) {
        iVar1 = *piVar2 + (iVar1 + 1U | 1) + -1;
        FUN_0036a1a4(iVar1);
        *piVar2 = iVar1 - extraout_r1;
      }
      param_2[3] = 4;
      param_2[4] = 0xffffffff;
      param_2[5] = 0;
      param_2[6] = 0xffffffff;
      param_2[7] = 0xffffffff;
      return;
    }
  }
  return;
}


// FUN_0035a894 @ 0035a894

int FUN_0035a894(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0035ad1c();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_0035b4a8(param_1,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}


// FUN_0035a8d0 @ 0035a8d0

int FUN_0035a8d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_0035aa2c;
  while( true ) {
    uVar3 = *(uint *)(param_1 + 0x58);
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (uVar2 < uVar3) {
      iVar6 = *(int *)(param_1 + 100);
      do {
        if ((*(byte *)(iVar6 + (uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0) {
          FUN_0036a1a4(*(int *)(param_1 + 0x54) + uVar2,*(undefined4 *)(param_1 + 0x6c));
          *param_2 = extraout_r1_00;
          iVar4 = *(int *)(param_1 + 0x60);
          uVar3 = *(uint *)(param_1 + 0x5c);
          do {
            iVar4 = iVar4 + -1;
            uVar3 = uVar3 + 1;
            *(uint *)(param_1 + 0x5c) = uVar3;
            *(int *)(param_1 + 0x60) = iVar4;
            if (*(uint *)(param_1 + 0x58) <= uVar3) {
              return 0;
            }
          } while ((*(byte *)(iVar6 + (uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0);
          return 0;
        }
        uVar2 = uVar2 + 1;
        *(uint *)(param_1 + 0x5c) = uVar2;
        uVar5 = *(int *)(param_1 + 0x60) - 1;
        *(uint *)(param_1 + 0x60) = uVar5;
      } while (uVar3 != uVar2);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x60);
      uVar3 = uVar2;
    }
    if (uVar5 == 0) break;
    uVar7 = *(undefined4 *)(param_1 + 100);
    iVar6 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_0036a1a4(*(int *)(param_1 + 0x54) + uVar3,*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x54) = extraout_r1;
    iVar6 = *(int *)(iVar6 + 0x2c);
    if ((uint)(iVar6 * 8) < uVar5) {
      uVar5 = iVar6 << 3;
    }
    *(uint *)(param_1 + 0x58) = uVar5;
    FUN_00359150(uVar7);
    iVar6 = FUN_0035a33c(param_1,uVar1,param_1,1);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
      return iVar6;
    }
  }
  return -0x1c;
}


// FUN_0035aa30 @ 0035aa30

int FUN_0035aa30(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
                int param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  int extraout_r1_00;
  int extraout_r1_01;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = -0x54;
  if ((param_8 + param_6 <= *(uint *)(*(int *)(param_1 + 0x68) + 0x1c)) &&
     (param_5 <= *(int *)(param_1 + 0x6c) - 1U)) {
    if (param_8 != 0) {
      do {
        uVar2 = param_8;
        if ((param_2 == (uint *)0x0) || (*param_2 != param_5)) {
LAB_0035ab80:
          uVar6 = uVar2;
          if (*param_3 == param_5) {
            uVar3 = param_3[1];
            if (param_6 < param_3[2] + uVar3) {
              uVar6 = uVar3 - param_6;
              if (uVar3 < param_6 || uVar6 == 0) {
                uVar6 = uVar6 + param_3[2];
                if (uVar2 < uVar6) {
                  uVar6 = uVar2;
                }
                FUN_00359188(param_7,param_3[3] + (param_6 - uVar3),uVar6);
                goto LAB_0035acac;
              }
              if (uVar2 < uVar6) {
                uVar6 = uVar2;
              }
            }
          }
          iVar1 = *(int *)(param_1 + 0x68);
          uVar2 = *(uint *)(iVar1 + 0x14);
          FUN_0036a1a4(param_6,uVar2);
          if ((param_8 < param_4 || param_8 < uVar2) || (extraout_r1_00 != 0)) {
            uVar6 = param_6 - extraout_r1_00;
            *param_3 = param_5;
            param_3[1] = uVar6;
            iVar5 = (param_4 - 1) + param_6 + uVar2;
            FUN_0036a1a4(iVar5,uVar2);
            uVar3 = iVar5 - extraout_r1;
            pcVar4 = *(code **)(iVar1 + 4);
            uVar2 = *(uint *)(iVar1 + 0x1c);
            if (uVar3 < *(uint *)(iVar1 + 0x1c)) {
              uVar2 = uVar3;
            }
            uVar3 = *(uint *)(iVar1 + 0x28);
            if (uVar2 - uVar6 < *(uint *)(iVar1 + 0x28)) {
              uVar3 = uVar2 - uVar6;
            }
            param_3[2] = uVar3;
            iVar1 = (*pcVar4)(iVar1,param_5,uVar6,param_3[3],uVar3);
            if (iVar1 != 0) {
              return iVar1;
            }
          }
          else {
            FUN_0036a1a4(uVar6,uVar2);
            iVar5 = uVar6 - extraout_r1_01;
            iVar1 = (**(code **)(iVar1 + 4))(iVar1,param_5,param_6,param_7,iVar5);
            if (iVar1 != 0) {
              return iVar1;
            }
            param_6 = iVar5 + param_6;
            param_7 = param_7 + iVar5;
            param_8 = param_8 - iVar5;
          }
        }
        else {
          uVar3 = param_2[1];
          if (param_2[2] + uVar3 <= param_6) goto LAB_0035ab80;
          uVar2 = uVar3 - param_6;
          if (param_6 <= uVar3 && uVar2 != 0) {
            if (param_8 < uVar2) {
              uVar2 = param_8;
            }
            goto LAB_0035ab80;
          }
          uVar6 = uVar2 + param_2[2];
          if (param_8 < uVar6) {
            uVar6 = param_8;
          }
          FUN_00359188(param_7,param_2[3] + (param_6 - uVar3),uVar6);
LAB_0035acac:
          param_6 = uVar6 + param_6;
          param_7 = param_7 + uVar6;
          param_8 = param_8 - uVar6;
        }
      } while (param_8 != 0);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// FUN_0035accc @ 0035accc

undefined4 FUN_0035accc(int param_1,int param_2)

{
  uint extraout_r1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  FUN_0036a1a4((param_2 - *(int *)(param_1 + 0x54)) + *(int *)(param_1 + 0x6c),
               *(int *)(param_1 + 0x6c));
  if (extraout_r1 < uVar1) {
    *(byte *)(*(int *)(param_1 + 100) + (extraout_r1 >> 3)) =
         *(byte *)(*(int *)(param_1 + 100) + (extraout_r1 >> 3)) | (byte)(1 << (extraout_r1 & 7));
  }
  return 0;
}


// FUN_0035ad1c @ 0035ad1c

uint FUN_0035ad1c(uint param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint in_r12;
  bool bVar13;
  uint local_a8;
  int local_a0 [3];
  uint *local_94;
  int local_90 [3];
  uint *local_84;
  uint local_80;
  uint *local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  for (puVar10 = *(undefined4 **)(param_1 + 0x28); puVar10 != (undefined4 *)0x0;
      puVar10 = (undefined4 *)*puVar10) {
    if (puVar10 + 2 != param_2) {
      uVar4 = *param_2;
      uVar1 = puVar10[2];
      if (uVar1 != uVar4) {
        uVar6 = puVar10[3];
        bVar13 = uVar6 != uVar4;
        if (bVar13) {
          uVar4 = param_2[1];
        }
        if ((bVar13 && uVar6 != uVar4) && (uVar1 != uVar4)) goto LAB_0035ad48;
      }
      if ((*(char *)((int)puVar10 + 6) == '\x01') &&
         (((*(byte *)((int)puVar10 + 0x32) & 0x10) != 0 &&
          (*(uint *)(*(int *)(param_1 + 0x68) + 0x28) < (uint)puVar10[0xb])))) {
        puVar10[0xf] = puVar10[0xd];
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
        uVar4 = FUN_0035c590(param_1,puVar10);
        if (uVar4 != 0) {
          return uVar4;
        }
        puVar10[0xc] = puVar10[0xc] & 0xffefffff;
        uVar4 = FUN_0035b918(param_1,puVar10);
        if (uVar4 != 0) {
          return uVar4;
        }
      }
    }
LAB_0035ad48:
  }
  local_38 = *param_2;
  local_34 = param_2[1];
  local_58 = *param_2;
  local_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uVar4 = param_2[7];
  uStack_3c = uVar4;
  uVar1 = FUN_0035babc(param_1,&local_58,param_2,param_3,param_4,&local_78);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (*param_2 != local_38) {
    uVar7 = param_2[1];
    uVar6 = local_38;
    if (uVar7 != local_38) {
      uVar6 = local_34;
    }
    if ((uVar7 != local_38 && uVar7 != uVar6) && (*param_2 != uVar6)) goto LAB_0035ae88;
  }
  *param_2 = local_58;
  param_2[1] = local_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
  param_2[4] = local_48;
  param_2[5] = uStack_44;
  param_2[6] = uStack_40;
  param_2[7] = uStack_3c;
  uVar4 = uStack_3c;
LAB_0035ae88:
  if (uVar1 == 2) {
    uVar4 = FUN_0035c958(param_1,param_2,0x7ff00000,0x7ff0000c,0,&local_30,0xc);
    if ((int)uVar4 < 0) {
      if (uVar4 != 0xfffffffe) {
        return uVar4;
      }
    }
    else {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) ^ local_30;
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) ^ local_2c;
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) ^ local_28;
    }
    local_38 = local_78;
    local_7c = param_2 + 6;
    local_34 = local_74;
    local_80 = DAT_0035b49c | (uint)*(byte *)((int)param_2 + 0x17) << 0x14;
    uVar1 = FUN_0035babc(param_1,&local_78,&local_38,&local_80,1,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    local_58 = local_78;
    local_54 = local_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = local_60;
    uStack_3c = local_5c;
    uVar4 = local_5c;
  }
  local_5c = uVar4;
  if (uVar1 != 1) {
    return 0;
  }
  local_a8 = 0;
  do {
    uVar4 = *(uint *)(param_1 + 0x20);
    if (local_38 == uVar4) {
LAB_0035afc0:
      *(uint *)(param_1 + 0x20) = local_58;
      *(uint *)(param_1 + 0x24) = local_54;
    }
    else {
      bVar13 = local_34 != uVar4;
      if (bVar13) {
        uVar4 = *(uint *)(param_1 + 0x24);
      }
      if ((!bVar13 || local_34 == uVar4) || (local_38 == uVar4)) goto LAB_0035afc0;
    }
    uVar4 = local_5c;
    for (piVar5 = *(int **)(param_1 + 0x28); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      uVar4 = piVar5[2];
      if (local_38 == uVar4) {
LAB_0035b01c:
        piVar5[2] = local_58;
        piVar5[3] = local_54;
      }
      else {
        bVar13 = local_34 != uVar4;
        if (bVar13) {
          uVar4 = piVar5[3];
        }
        if ((!bVar13 || local_34 == uVar4) || (local_38 == uVar4)) goto LAB_0035b01c;
      }
      if (*(char *)((int)piVar5 + 6) == '\x02') {
        uVar4 = piVar5[0xb];
        if (local_38 != uVar4) {
          bVar13 = local_34 != uVar4;
          if (bVar13) {
            uVar4 = piVar5[0xc];
          }
          if ((bVar13 && local_34 != uVar4) && (local_38 != uVar4)) goto LAB_0035aff4;
        }
        piVar5[0xb] = local_58;
        piVar5[0xc] = local_54;
      }
LAB_0035aff4:
      uVar4 = local_34;
    }
    uVar6 = 1;
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
    uVar1 = 1;
    local_5c = 1;
    local_60 = 0;
    do {
      uVar2 = 0xffffffac;
      if ((local_60 == uVar7 && local_5c == uVar8) || (local_60 == uVar8 && local_5c == uVar7)) {
LAB_0035b150:
        if ((uVar2 == 0xffffffff || (int)(uVar2 + 1) < 0 != SCARRY4(uVar2,1)) &&
           (uVar2 != 0xfffffffe)) {
          return uVar2;
        }
        iVar11 = 0;
        if (uVar2 == 0xfffffffe) goto LAB_0035b2a0;
        uVar1 = 0x3ff;
        uVar4 = *(int *)(param_1 + 0x30) + 1;
        uVar7 = uVar4 & 0x7fffffff;
        if ((uVar4 & 0x3ff) != 0) {
          uVar7 = uVar7 | 0x80000000;
        }
        *(uint *)(param_1 + 0x30) = uVar7;
        uVar8 = DAT_0035b4a0;
        if ((uVar4 & 0x70000000) == 0) {
          uVar1 = 0x3ff;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x34);
          if (uVar3 != local_78) {
            uVar6 = *(uint *)(param_1 + 0x38);
          }
          if ((uVar3 == local_78 || uVar6 == local_78) ||
             (in_r12 = local_74, uVar6 == local_74 || uVar3 == local_74)) {
            uVar1 = uVar4 >> 10 & 0x3ff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
            *(uint *)(param_1 + 0x30) = uVar7 & uVar8;
            if (uVar1 < (uVar2 >> 10 & 0x3ff)) {
              uVar2 = uVar2 - 0x400;
            }
          }
        }
        local_84 = &local_58;
        local_30 = local_78;
        local_90[1] = 0;
        local_2c = local_74;
        local_90[0] = uVar1 - 0x3ff;
        if (local_90[0] != 0) {
          local_90[0] = uVar1 * 0x400 + 0x4ff00000;
        }
        local_90[2] = uVar2;
        uVar4 = FUN_0035babc(param_1,&local_78,&local_30,local_90,2,0);
        if (uVar4 == 0xffffffff || (int)(uVar4 + 1) < 0 != SCARRY4(uVar4,1)) {
          return uVar4;
        }
        if (uVar4 != 1) {
          iVar11 = -1;
          goto LAB_0035b2a0;
        }
        local_38 = local_30;
        local_34 = local_2c;
        uStack_40 = local_60;
        uVar4 = 1;
        local_a8 = 1;
        goto LAB_0035b458;
      }
      if (uVar6 == uVar1) {
        uVar1 = uVar6 << 1;
        uVar6 = 0;
        uVar7 = local_60;
        uVar8 = local_5c;
      }
      local_2c = local_38;
      local_28 = local_34;
      local_30 = param_1;
      uVar3 = FUN_0035eff0(param_1,&local_78,&local_60,DAT_0035b4a0 - 0x100000,0x20000008,0,
                           DAT_0035b4a4,&local_30);
      uVar2 = uVar4;
      if ((uVar3 != 0) && (uVar2 = uVar3, uVar3 == 0xfffffffe)) {
        uVar2 = uVar4;
      }
      if (uVar3 != 0xfffffffe && uVar3 != 0) goto LAB_0035b150;
    } while ((local_60 != 0xffffffff) && (uVar6 = uVar6 + 1, uVar4 = uVar2, local_5c != 0xffffffff))
    ;
    iVar11 = 0;
LAB_0035b2a0:
    iVar9 = 1;
    uVar4 = 0xffffffff;
    uVar1 = 0xffffffff;
    iVar12 = 1;
    local_5c = 1;
    local_60 = 0;
    while( true ) {
      if (local_60 == uVar1 && local_5c == uVar4) {
        return 0xffffffac;
      }
      if (local_60 == uVar4 && local_5c == uVar1) {
        return 0xffffffac;
      }
      if (iVar9 == iVar12) {
        iVar12 = iVar9 << 1;
        iVar9 = 0;
        uVar1 = local_60;
        uVar4 = local_5c;
      }
      if ((local_60 == local_38 || local_5c == local_38) ||
         (local_5c == local_34 || local_60 == local_34)) break;
      uVar6 = FUN_0035eff0(param_1,&local_78,&local_60,0xffffffff,0xffffffff,0,0,0);
      if (uVar6 != 0) {
        if (uVar6 != 0xfffffffe) {
          return uVar6;
        }
        goto LAB_0035b488;
      }
      if ((local_60 == 0xffffffff) || (iVar9 = iVar9 + 1, local_5c == 0xffffffff))
      goto LAB_0035b488;
    }
    uVar4 = *(uint *)(param_1 + 0x30);
    uVar1 = 0x3ff;
    if ((uVar4 & 0x3ff) != 0) {
      uVar6 = uVar4 + iVar11;
      uVar4 = uVar6 & 0x7fffffff;
      if ((uVar6 & 0x3ff) != 0) {
        uVar4 = uVar4 | 0x80000000;
      }
      *(uint *)(param_1 + 0x30) = uVar4;
    }
    uVar6 = DAT_0035b4a0;
    local_94 = &local_58;
    if ((uVar4 & 0x70000000) != 0) {
      if (*(uint *)(param_1 + 0x34) == local_78) {
LAB_0035b3c0:
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(uint *)(param_1 + 0x30) = uVar4 & uVar6;
        uVar1 = uVar4 >> 10 & 0x3ff;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x38);
        if (uVar7 != local_78) {
          in_r12 = local_74;
        }
        if ((uVar7 == local_78 || uVar7 == in_r12) || (*(uint *)(param_1 + 0x34) == in_r12))
        goto LAB_0035b3c0;
      }
    }
    local_38 = local_78;
    local_a0[1] = 0;
    local_34 = local_74;
    local_a0[2] = DAT_0035b49c | (uStack_64 >> 0x18) << 0x14;
    local_a0[0] = uVar1 - 0x3ff;
    if (local_a0[0] != 0) {
      local_a0[0] = uVar1 * 0x400 + 0x4ff00000;
    }
    uVar4 = FUN_0035babc(param_1,&local_78,&local_38,local_a0,2,0);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uStack_40 = local_60;
LAB_0035b458:
    local_58 = local_78;
    local_54 = local_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_3c = local_5c;
    if (uVar4 != 1) {
LAB_0035b488:
      if (local_a8 != 0) {
        local_a8 = 3;
      }
      return local_a8;
    }
  } while( true );
}


// FUN_0035b4a8 @ 0035b4a8

uint FUN_0035b4a8(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint local_b0;
  uint local_a8;
  uint *local_a4;
  uint local_a0 [3];
  uint *local_94;
  undefined1 auStack_90 [24];
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if ((*(ushort *)(param_1 + 0x30) & 0x3ff) != 0) {
    puVar11 = &uStack_58;
    local_b0 = 0;
    do {
      local_50 = *DAT_0035b904;
      iStack_4c = DAT_0035b904[1];
      iStack_48 = DAT_0035b904[2];
      iStack_44 = DAT_0035b904[3];
      local_40 = DAT_0035b904[4];
      uStack_3c = DAT_0035b904[5];
      local_38 = DAT_0035b904[6];
      uVar8 = DAT_0035b904[7];
      bVar1 = false;
      local_34 = uVar8;
      do {
        uVar2 = FUN_0035eff0(param_1,&local_70,&local_38,0xffffffff,0xffffffff,0,0,0,puVar11);
        if (uVar2 != 0) {
          return uVar2;
        }
        if (uStack_3c._3_1_ == '\0') {
          iVar6 = 1;
          iVar10 = -1;
          iVar9 = -1;
          iVar7 = 1;
          local_74 = 1;
          local_78 = 0;
          do {
            uVar2 = 0xffffffac;
            if ((local_78 == iVar9 && local_74 == iVar10) ||
               (local_78 == iVar10 && local_74 == iVar9)) {
LAB_0035b66c:
              if ((uVar2 == 0xffffffff || (int)(uVar2 + 1) < 0 != SCARRY4(uVar2,1)) &&
                 (uVar2 != 0xfffffffe)) {
                return uVar2;
              }
              if ((local_b0 != 0) || (uVar2 == 0xfffffffe)) goto LAB_0035b700;
              uVar3 = FUN_0035c958(param_1,auStack_90,DAT_0035b910,uVar2,0,&local_30,uVar2 & 0x3ff);
              uVar2 = DAT_0035b914;
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              if (((local_30 == local_38) && (local_2c == local_34)) ||
                 (local_30 == local_34 && local_2c == local_38)) goto LAB_0035b528;
              uVar3 = *(uint *)(param_1 + 0x30);
              if ((uVar3 & 0x70000000) == 0) {
LAB_0035b840:
                local_a0[0] = 0;
              }
              else {
                if (*(int *)(param_1 + 0x34) != local_50) {
                  iVar9 = *(int *)(param_1 + 0x38);
                  iVar7 = local_50;
                  if (iVar9 != local_50) {
                    iVar7 = iStack_4c;
                  }
                  if ((iVar9 != local_50 && iVar9 != iVar7) && (*(int *)(param_1 + 0x34) != iVar7))
                  goto LAB_0035b840;
                }
                *(undefined4 *)(param_1 + 0x34) = 0;
                *(undefined4 *)(param_1 + 0x38) = 0;
                *(uint *)(param_1 + 0x30) = uVar3 & uVar2;
                if ((uVar3 & 0xffc00) == 0xffc00) goto LAB_0035b840;
                local_a0[0] = uVar3 & 0xffc00 | 0x4ff00000;
              }
              local_94 = &local_30;
              local_a0[1] = 0;
              puVar4 = local_a0;
              uVar5 = 2;
              local_a0[2] = DAT_0035b900;
              goto LAB_0035b86c;
            }
            if (iVar6 == iVar7) {
              iVar7 = iVar6 << 1;
              iVar6 = 0;
              iVar9 = local_78;
              iVar10 = local_74;
            }
            local_2c = local_38;
            local_28 = local_34;
            local_30 = param_1;
            uVar3 = FUN_0035eff0(param_1,auStack_90,&local_78,DAT_0035b90c,0x20000008,0,DAT_0035b908
                                 ,&local_30);
            uVar2 = uVar8;
            if ((uVar3 != 0) && (uVar2 = uVar3, uVar3 == 0xfffffffe)) {
              uVar2 = uVar8;
            }
            if (uVar3 != 0xfffffffe && uVar3 != 0) goto LAB_0035b66c;
          } while ((local_78 != -1) && (iVar6 = iVar6 + 1, uVar8 = uVar2, local_74 != -1));
          uVar2 = 0xfffffffe;
LAB_0035b700:
          uVar2 = local_b0 ^ 1 | uVar2 ^ 0xfffffffe;
          if (uVar2 != 0) {
            uVar2 = 1;
          }
          if (uVar2 != 0 || param_2 != 1) goto LAB_0035b528;
          uVar2 = FUN_0035c958(param_1,&local_70,0x7ff00000,0x7ff0000c,0,&local_30,0xc);
          if ((int)uVar2 < 0) {
            if (uVar2 != 0xfffffffe) {
              return uVar2;
            }
          }
          else {
            *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) ^ local_30;
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) ^ local_2c;
            *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) ^ local_28;
            uVar8 = local_2c;
          }
          puVar4 = &local_a8;
          uVar5 = 1;
          local_a8 = DAT_0035b900 | (uStack_5c >> 0x18) << 0x14;
          local_a4 = puVar11;
LAB_0035b86c:
          uVar2 = FUN_0035ad1c(param_1,&local_50,puVar4,uVar5);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          bVar1 = (bool)(uVar2 == 3 | bVar1);
        }
        else {
LAB_0035b528:
          local_50 = local_70;
          iStack_4c = iStack_6c;
          iStack_48 = iStack_68;
          iStack_44 = iStack_64;
          local_40 = local_60;
          uStack_3c = uStack_5c;
          local_38 = uStack_58;
          local_34 = uStack_54;
          uVar8 = uStack_54;
        }
        uVar2 = local_38;
        if (local_38 != 0xffffffff) {
          uVar2 = local_34;
        }
      } while (local_38 != 0xffffffff && uVar2 != 0xffffffff);
      local_b0 = local_b0 + 1;
      if (bVar1) {
        local_b0 = 0;
      }
    } while ((int)local_b0 < 2);
    uVar8 = *(int *)(param_1 + 0x30) + (*(int *)(param_1 + 0x30) * -0x1000000 >> 0x18);
    uVar2 = uVar8 & 0x7fffffff;
    if ((uVar8 & 0x3ff) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
    *(uint *)(param_1 + 0x30) = uVar2;
  }
  return 0;
}


// FUN_0035b918 @ 0035b918

int FUN_0035b918(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uStack_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  undefined4 local_28;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 & 0x40000) != 0) {
    bVar6 = (uVar3 & 0x100000) == 0;
    uVar3 = uVar3 & 0xfffbffff;
    piVar1 = param_1;
    if (bVar6) {
      piVar1 = (int *)0xffffffff;
    }
    *(uint *)(param_2 + 0x30) = uVar3;
    if (bVar6) {
      *(int **)(param_2 + 0x40) = piVar1;
    }
  }
  iVar2 = 0;
  if ((uVar3 & 0x20000) != 0) {
    uVar5 = *(uint *)(param_2 + 0x34);
    if ((uVar3 & 0x100000) != 0) {
      uVar4 = *(uint *)(param_2 + 0x2c);
      if (*(uint *)(param_2 + 0x2c) < uVar5) {
        uVar4 = uVar5;
      }
LAB_0035ba84:
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x2c) = uVar4;
      *(uint *)(param_2 + 0x30) = uVar3 & 0xfffcffff | 0x10000;
      *(uint *)(param_2 + 0x34) = uVar5;
      return 0;
    }
    local_4c = *(uint *)(param_2 + 0x2c);
    local_2c = param_1[3];
    local_70 = 0;
    local_72 = 0;
    local_74 = 0;
    local_78 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_3c = 0;
    local_40 = 0;
    local_28 = 0;
    local_48 = 1;
    local_50 = *(undefined4 *)(param_2 + 0x28);
    local_38 = *param_1;
    iStack_34 = param_1[1];
    iStack_30 = param_1[2];
    *param_1 = -1;
    local_44 = uVar5;
    if (uVar5 < local_4c) {
      do {
        iVar2 = FUN_0035cd90(param_1,&local_78,&uStack_79,1);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = FUN_0035d06c(param_1,param_2,&uStack_79,1);
        if (iVar2 < 0) {
          return iVar2;
        }
        uVar4 = *(uint *)(param_2 + 0x34);
        uVar3 = *(uint *)(param_2 + 0x2c);
        if (*param_1 != -1) {
          *param_1 = -1;
          local_38 = -1;
        }
      } while (uVar4 < uVar3);
    }
    do {
      iVar2 = FUN_0035cbfc(param_1,param_2 + 0x40,param_1,1);
      if (iVar2 != -0x54) {
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = *(uint *)(param_2 + 0x30);
        uVar4 = *(uint *)(param_2 + 0x34);
        goto LAB_0035ba84;
      }
      iVar2 = FUN_0035c590(param_1,param_2);
    } while (iVar2 == 0);
  }
  return iVar2;
}


// FUN_0035babc @ 0035babc

/* WARNING: Type propagation algorithm not settling */

uint FUN_0035babc(int param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint unaff_r8;
  bool bVar14;
  undefined8 uVar15;
  int local_78;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint *local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  if (0 < param_5) {
    bVar14 = false;
    iVar6 = 0;
    do {
      while( true ) {
        uVar8 = param_4[iVar6 * 2] >> 0x14 & 0x7ff;
        if (uVar8 != 0x401) break;
        *(short *)(param_2 + 5) = (short)param_2[5] + 1;
LAB_0035bb24:
        iVar6 = iVar6 + 1;
        if (iVar6 == param_5) {
          if (!bVar14) goto LAB_0035bbcc;
          sVar5 = (short)param_2[5];
          goto LAB_0035bbb8;
        }
      }
      if (uVar8 != 0x4ff) {
        if ((param_4[iVar6 * 2] >> 0x14 & 0x700) == 0x600) {
          puVar9 = (uint *)param_4[iVar6 * 2 + 1];
          param_2[6] = *puVar9;
          param_2[7] = puVar9[1];
          *(byte *)((int)param_2 + 0x17) = (byte)(param_4[iVar6 * 2] >> 0x14) & 1;
        }
        goto LAB_0035bb24;
      }
      bVar14 = true;
      sVar5 = (short)param_2[5] + -1;
      iVar4 = iVar6 - param_5;
      iVar6 = iVar6 + 1;
      *(short *)(param_2 + 5) = sVar5;
    } while (iVar4 != -1);
LAB_0035bbb8:
    if (sVar5 == 0) {
      uVar2 = 0;
      uVar8 = 1;
      iVar6 = 1;
      uVar12 = 0xffffffff;
      uVar11 = 0xffffffff;
      local_78 = 1;
      puVar9 = (uint *)(param_6 + 0x18);
      *puVar9 = 0;
      *(undefined4 *)(param_6 + 0x1c) = 1;
      do {
        if (uVar2 == uVar11 && uVar8 == uVar12) {
          return 0xffffffac;
        }
        if (uVar2 == uVar12 && uVar8 == uVar11) {
          return 0xffffffac;
        }
        if (iVar6 == local_78) {
          local_78 = iVar6 << 1;
          iVar6 = 0;
          uVar11 = uVar2;
          uVar12 = uVar8;
        }
        if ((uVar2 == *param_2 || uVar8 == *param_2) || (uVar8 == param_2[1] || uVar2 == param_2[1])
           ) {
          unaff_r8 = 2;
          if (*(char *)(param_6 + 0x17) != '\0') goto LAB_0035c21c;
          break;
        }
        uVar15 = FUN_0035eff0(param_1,param_6,puVar9,0xffffffff,0xffffffff,0,0,0);
        uVar8 = (uint)((ulonglong)uVar15 >> 0x20);
        unaff_r8 = (uint)uVar15;
        if (unaff_r8 != 0) {
          if (unaff_r8 != 0xfffffffe) {
            return unaff_r8;
          }
          break;
        }
        uVar2 = *puVar9;
        if (uVar2 != 0xffffffff) {
          iVar6 = iVar6 + 1;
          uVar8 = *(uint *)(param_6 + 0x1c);
        }
        unaff_r8 = 0xffffffac;
      } while (uVar2 != 0xffffffff && uVar8 != 0xffffffff);
    }
  }
LAB_0035bbcc:
  if (*(char *)((int)param_2 + 0x16) != '\0') {
    local_40 = param_2[3];
    local_3c = param_2[4];
    local_38 = 0xffffffff;
    local_44 = *param_2;
    iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 0x4c);
    if (iVar6 == 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
    }
    local_54 = &local_44;
    local_30 = iVar6 - 8;
    local_58 = param_1;
    local_34 = local_40;
    uVar8 = FUN_0035dbcc(param_1,param_2,local_40,local_3c,param_4,param_5,0,0,0,0,DAT_0035c578,
                         &local_58);
    if (uVar8 != 0xffffffac) {
      unaff_r8 = uVar8;
    }
    if (uVar8 != 0xffffffac && uVar8 != 0xffffffe4) {
      if (unaff_r8 != 0) {
        return unaff_r8;
      }
      local_60 = *(uint *)(param_1 + 0x4c) ^ *(uint *)(param_1 + 0x40) ^ *(uint *)(param_1 + 0x34);
      local_5c = *(uint *)(param_1 + 0x50) ^ *(uint *)(param_1 + 0x44) ^ *(uint *)(param_1 + 0x38);
      local_64 = (*(uint *)(param_1 + 0x48) ^ *(uint *)(param_1 + 0x3c) ^ *(uint *)(param_1 + 0x30))
                 & DAT_0035c57c;
      if ((local_64 == 0 && local_60 == 0) && (uVar8 = 0, uVar11 = local_3c, local_5c == 0)) {
LAB_0035c070:
        local_3c = uVar11;
        uVar11 = FUN_0035e280(param_1,&local_44);
        if (uVar11 != 0xffffffac) {
          uVar8 = uVar11;
        }
        if (uVar11 != 0xffffffac && uVar11 != 0xffffffe4) {
          if (uVar8 != 0) {
            return uVar8;
          }
          unaff_r8 = 0;
          param_2[3] = local_40;
          param_2[4] = local_3c;
          *(uint *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
          goto LAB_0035c21c;
        }
      }
      else {
        uVar8 = FUN_0035c958(param_1,param_2,0x7ff00000,0x7ff0000c,0,&local_50,0xc);
        if ((int)uVar8 < 0) {
          if (uVar8 != 0xfffffffe) {
            return uVar8;
          }
        }
        else {
          local_64 = local_64 ^ local_50;
          local_60 = local_60 ^ uStack_4c;
          local_5c = local_5c ^ uStack_48;
        }
        if (local_40 + 0x10 <= local_30) {
          uVar11 = DAT_0035c580;
          uVar8 = local_3c ^ DAT_0035c580;
          local_50 = uVar8 << 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 8 & 0xff00 | uVar8 >> 0x18;
          uVar8 = FUN_0035e968(param_1,&local_44,&local_50,4);
          if ((uVar8 == 0) && (uVar8 = FUN_0035e968(param_1,&local_44,&local_64,0xc), uVar8 == 0))
          goto LAB_0035c070;
          if (uVar8 != 0xffffffac && uVar8 != 0xffffffe4) {
            return uVar8;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar11 = (uint)(ushort)param_2[5];
  uVar8 = uVar11;
  do {
    if (uVar11 < 2) goto LAB_0035c1a8;
    uVar12 = 0;
    uVar11 = uVar8 & 0xffff;
    do {
      local_44 = 0;
      unaff_r8 = FUN_0035dbcc(param_1,param_2,0,0xffffffff,param_4,param_5,DAT_0035c588,
                              uVar12 & 0xffff,uVar8 & 0xffff,(int)(uVar12 * -0x10000) >> 0x10,
                              DAT_0035c584,&local_44);
      if (unaff_r8 != 0) goto LAB_0035c214;
      if (uVar11 < 0xff) {
        iVar6 = *(int *)(param_1 + 0x68);
        uVar7 = *(uint *)(iVar6 + 0x1c);
        uVar2 = *(uint *)(iVar6 + 0x4c);
        if (*(uint *)(iVar6 + 0x4c) == 0) {
          uVar2 = uVar7;
        }
        iVar6 = *(int *)(iVar6 + 0x18) + (uVar2 >> 1) + -1;
        FUN_0036a1a4(iVar6);
        uVar2 = iVar6 - extraout_r1;
        uVar7 = uVar7 - 0x28;
        if (uVar7 < uVar2) {
          uVar2 = uVar7;
        }
        if (local_44 <= uVar2) break;
      }
      uVar12 = uVar12 + (uVar11 >> 1);
      uVar11 = (uVar8 & 0xffff) - uVar12;
    } while (1 < uVar11);
    if (uVar12 == 0) goto LAB_0035c1a8;
    unaff_r8 = FUN_0035a7b8(param_1,&local_44);
    if (unaff_r8 != 0) {
LAB_0035c184:
      if (unaff_r8 != 0xffffffe4) goto LAB_0035c214;
      goto LAB_0035c1a8;
    }
    local_28 = param_2[7];
    local_30 = CONCAT13(*(undefined1 *)((int)param_2 + 0x17),(undefined3)local_30);
    local_2c = param_2[6];
    uVar11 = uVar12 & 0xffff;
    unaff_r8 = FUN_0035eb54(param_1,&local_44,param_4,param_5,param_2,uVar11,uVar8 & 0xffff);
    if ((int)unaff_r8 < 0) goto LAB_0035c184;
    bVar14 = true;
    *(undefined1 *)((int)param_2 + 0x17) = 1;
    param_2[6] = local_44;
    param_2[7] = local_40;
    if (*param_2 != *(uint *)(param_1 + 0x20)) {
      bVar14 = param_2[1] == *(uint *)(param_1 + 0x20) ||
               (param_2[1] == *(uint *)(param_1 + 0x24) || *param_2 == *(uint *)(param_1 + 0x24));
    }
    uVar8 = uVar12;
  } while (((uVar12 & 0xffff) != 0) || (!bVar14));
  *(uint *)(param_1 + 0x20) = local_44;
  *(uint *)(param_1 + 0x24) = local_40;
  uVar8 = 0;
LAB_0035c1a8:
  iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 0x24);
  if (((iVar6 < 1) || (FUN_0036a1a4(param_2[2] + 1,iVar6 + 1U | 1), extraout_r1_00 != 0)) ||
     ((1 < *param_2 && (1 < param_2[1])))) {
LAB_0035c1dc:
    unaff_r8 = FUN_0035eb54(param_1,param_2,param_4,param_5,param_2,0,uVar8 & 0xffff);
  }
  else {
    local_44 = 0;
    uVar12 = FUN_0035a33c(param_1,DAT_0035c58c,&local_44,0);
    uVar11 = local_44;
    if (uVar12 != 0) {
      uVar11 = uVar12;
    }
    if ((int)uVar11 < 0) {
      return uVar11;
    }
    if (*(uint *)(param_1 + 0x6c) - uVar11 <= *(uint *)(param_1 + 0x6c) >> 3) goto LAB_0035c1dc;
    unaff_r8 = FUN_0035a7b8(param_1,&local_44);
    if (unaff_r8 == 0) {
      local_28 = param_2[7];
      local_30 = CONCAT13(*(undefined1 *)((int)param_2 + 0x17),(undefined3)local_30);
      local_2c = param_2[6];
      unaff_r8 = FUN_0035eb54(param_1,&local_44,param_4,param_5,param_2,0,uVar8 & 0xffff);
      if (-1 < (int)unaff_r8) {
        *(undefined1 *)((int)param_2 + 0x17) = 1;
        param_2[6] = local_44;
        param_2[7] = local_40;
        uVar8 = *(uint *)(param_1 + 0x20);
        if (*param_2 == uVar8) {
LAB_0035c534:
          *(uint *)(param_1 + 0x20) = local_44;
          *(uint *)(param_1 + 0x24) = local_40;
        }
        else {
          uVar11 = param_2[1];
          bVar14 = uVar11 != uVar8;
          if (bVar14) {
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((!bVar14 || uVar11 == uVar8) || (*param_2 == uVar8)) goto LAB_0035c534;
        }
        uVar8 = 1;
        goto LAB_0035c1dc;
      }
    }
    if (unaff_r8 == 0xffffffe4) goto LAB_0035c1dc;
  }
LAB_0035c214:
  if ((int)unaff_r8 < 0) {
    return unaff_r8;
  }
LAB_0035c21c:
  piVar13 = *(int **)(param_1 + 0x28);
  if (piVar13 != (int *)0x0) {
    uVar11 = *param_3;
    uVar8 = param_3[1];
    do {
      puVar9 = (uint *)(piVar13 + 2);
      uVar12 = *puVar9;
      if (uVar12 == uVar11) {
LAB_0035c28c:
        uVar12 = param_2[1];
        uVar2 = param_2[2];
        uVar7 = param_2[3];
        *puVar9 = *param_2;
        piVar13[3] = uVar12;
        piVar13[4] = uVar2;
        piVar13[5] = uVar7;
        uVar12 = param_2[5];
        uVar2 = param_2[6];
        uVar7 = param_2[7];
        piVar13[6] = param_2[4];
        piVar13[7] = uVar12;
        piVar13[8] = uVar2;
        piVar13[9] = uVar7;
        if ((puVar9 != param_3) && (puVar3 = param_4, iVar6 = param_5, 0 < param_5)) {
          do {
            uVar12 = *puVar3;
            uVar2 = uVar12 >> 0x14 & 0x7ff;
            if (uVar2 == 0x401) {
              if (((uVar12 >> 10 & 0x3ff) <= (uint)*(ushort *)(piVar13 + 1)) &&
                 (*(ushort *)(piVar13 + 1) = *(ushort *)(piVar13 + 1) + 1,
                 *(char *)((int)piVar13 + 6) == '\x02')) {
                iVar4 = piVar13[10] + 1;
LAB_0035c37c:
                piVar13[10] = iVar4;
              }
            }
            else if (uVar2 == 0x4ff) {
              uVar12 = uVar12 >> 10 & 0x3ff;
              uVar1 = *(ushort *)(piVar13 + 1);
              if (uVar1 == uVar12) {
                piVar13[2] = -1;
                piVar13[3] = -1;
              }
              else if ((uVar12 < uVar1) &&
                      (*(ushort *)(piVar13 + 1) = uVar1 - 1, *(char *)((int)piVar13 + 6) == '\x02'))
              {
                iVar4 = piVar13[10] + -1;
                goto LAB_0035c37c;
              }
            }
            iVar6 = iVar6 + -1;
            puVar3 = puVar3 + 2;
          } while (iVar6 != 0);
        }
        while( true ) {
          if ((*(ushort *)(piVar13 + 1) < *(ushort *)(piVar13 + 7)) ||
             (*(char *)((int)piVar13 + 0x1f) == '\0')) break;
          iVar6 = *(int *)(param_1 + 0x20);
          iVar4 = piVar13[8];
          if (iVar4 != iVar6) {
            iVar10 = piVar13[9];
            bVar14 = iVar10 != iVar6;
            if (bVar14) {
              iVar6 = *(int *)(param_1 + 0x24);
            }
            if ((bVar14 && iVar10 != iVar6) && (iVar4 != iVar6)) {
              *(ushort *)(piVar13 + 1) = *(ushort *)(piVar13 + 1) - *(ushort *)(piVar13 + 7);
            }
          }
          uVar12 = FUN_0035eff0(param_1,puVar9,piVar13 + 8,0xffffffff,0xffffffff,0,0,0);
          if (uVar12 != 0) {
            return uVar12;
          }
        }
      }
      else {
        bVar14 = uVar12 != uVar8;
        if (bVar14) {
          uVar12 = piVar13[3];
        }
        if ((!bVar14 || uVar12 == uVar8) || (uVar12 == uVar11)) goto LAB_0035c28c;
      }
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)0x0);
  }
  return unaff_r8;
}


// FUN_0035c590 @ 0035c590

int FUN_0035c590(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar6;
  int extraout_r1_01;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *local_4c;
  undefined1 uStack_29;
  int local_28;
  
  iVar2 = FUN_0035a8d0(param_1,&local_28);
  if (iVar2 == 0) {
    do {
      iVar2 = local_28;
      iVar3 = (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(int *)(param_1 + 0x68),local_28);
      if (iVar3 != -0x54) {
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar4 = *(uint *)(param_2 + 0x3c);
        if (uVar4 != 0) {
          uVar14 = 0;
          do {
            local_4c = &uStack_29;
            if ((*(byte *)(param_2 + 0x32) & 0x10) == 0) {
              iVar3 = FUN_0035aa30(param_1,(int *)(param_2 + 0x40),param_1,uVar4 - uVar14,
                                   *(undefined4 *)(param_2 + 0x38),uVar14,local_4c,1);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            else {
              if (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) <= uVar14) {
                return -0x54;
              }
              uVar1 = *(ushort *)(param_2 + 4);
              uVar6 = 1;
              uVar10 = uVar14;
              do {
                while (((*(int *)(param_2 + 0x40) == -2 &&
                        (uVar12 = *(uint *)(param_2 + 0x44), uVar12 <= uVar10)) &&
                       (uVar10 < *(int *)(param_2 + 0x48) + uVar12))) {
                  uVar7 = (uVar12 - uVar10) + *(int *)(param_2 + 0x48);
                  if (uVar6 < uVar7) {
                    uVar7 = uVar6;
                  }
                  FUN_00359188(local_4c,*(int *)(param_2 + 0x4c) + (uVar10 - uVar12),uVar7);
                  local_4c = local_4c + uVar7;
                  uVar6 = uVar6 - uVar7;
                  uVar10 = uVar7 + uVar10;
                  iVar2 = local_28;
                  if (uVar6 == 0) goto LAB_0035c7c0;
                }
                *(undefined4 *)(param_2 + 0x40) = 0xfffffffe;
                iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0x14);
                uVar12 = *(uint *)(*(int *)(param_1 + 0x68) + 0x28);
                FUN_0036a1a4(uVar10,iVar2);
                *(uint *)(param_2 + 0x44) = uVar10 - extraout_r1;
                iVar3 = uVar4 + ~uVar14 + uVar10 + iVar2;
                FUN_0036a1a4(iVar3,iVar2);
                uVar5 = DAT_0035c954;
                uVar7 = iVar3 - extraout_r1_00;
                if (uVar7 < uVar12) {
                  uVar12 = uVar7;
                }
                *(uint *)(param_2 + 0x48) = uVar12;
                iVar2 = FUN_0035c958(param_1,param_2 + 8,uVar5,(uint)uVar1 << 10 | 0x20100000,
                                     uVar10 - extraout_r1,*(undefined4 *)(param_2 + 0x4c),uVar12);
                if (iVar2 < 0) {
                  return iVar2;
                }
                iVar2 = local_28;
              } while (uVar6 != 0);
            }
LAB_0035c7c0:
            puVar13 = &uStack_29;
            uVar10 = 1;
            uVar4 = uVar14;
            do {
              if (*(int *)(param_1 + 0x10) == iVar2) {
                uVar6 = *(uint *)(param_1 + 0x14);
                iVar3 = *(int *)(param_1 + 0x68);
                if ((uVar4 < uVar6) || (iVar11 = *(int *)(iVar3 + 0x28), iVar11 + uVar6 <= uVar4))
                goto LAB_0035c80c;
              }
              else {
                iVar3 = *(int *)(param_1 + 0x68);
LAB_0035c80c:
                iVar11 = *(int *)(iVar3 + 0x28);
                *(int *)(param_1 + 0x10) = iVar2;
                *(undefined4 *)(param_1 + 0x18) = 0;
                FUN_0036a1a4(uVar4,*(undefined4 *)(iVar3 + 0x18));
                uVar6 = uVar4 - extraout_r1_01;
                *(uint *)(param_1 + 0x14) = uVar6;
                if (iVar11 + uVar6 <= uVar4) {
                  *(uint *)(param_1 + 0x14) = uVar6;
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
              }
              uVar12 = (iVar11 - uVar4) + uVar6;
              if (uVar10 < uVar12) {
                uVar12 = uVar10;
              }
              FUN_00359188(*(int *)(param_1 + 0x1c) + (uVar4 - uVar6),puVar13,uVar12);
              uVar4 = uVar12 + uVar4;
              uVar6 = uVar4 - *(int *)(param_1 + 0x14);
              if (uVar6 < *(uint *)(param_1 + 0x18)) {
                uVar6 = *(uint *)(param_1 + 0x18);
              }
              uVar7 = *(uint *)(*(int *)(param_1 + 0x68) + 0x28);
              *(uint *)(param_1 + 0x18) = uVar6;
              if ((uVar6 == uVar7) &&
                 (iVar3 = FUN_0035cbfc(param_1,(int *)(param_1 + 0x10),param_1,1), iVar3 != 0)) {
                if (iVar3 != -0x54) {
                  return iVar3;
                }
                goto LAB_0035c5e4;
              }
              uVar10 = uVar10 - uVar12;
              puVar13 = puVar13 + uVar12;
            } while (uVar10 != 0);
            uVar4 = *(uint *)(param_2 + 0x3c);
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar4);
        }
        FUN_00359188(*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_1 + 0x1c),
                     *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        uVar8 = *(undefined4 *)(param_1 + 0x14);
        uVar9 = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(param_2 + 0x44) = uVar8;
        *(undefined4 *)(param_2 + 0x48) = uVar9;
        FUN_003591f4(uVar5,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28),0xff);
        *(int *)(param_2 + 0x38) = iVar2;
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
        return 0;
      }
LAB_0035c5e4:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar2 = FUN_0035a8d0(param_1,&local_28);
    } while (iVar2 == 0);
  }
  return iVar2;
}


// FUN_0035c958 @ 0035c958

int FUN_0035c958(int param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6,
                uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_28;
  
  uVar5 = param_2[3];
  uVar6 = 0;
  if ((*(uint *)(param_1 + 0x3c) & 0x70000000) != 0) {
    if (*(int *)(param_1 + 0x40) == *param_2) {
      if ((param_3 & 0xffc00) == 0) goto LAB_0035ca28;
    }
    else if (((param_3 & 0xffc00) == 0) ||
            (*(int *)(param_1 + 0x44) != *param_2 &&
             (*(int *)(param_1 + 0x44) != param_2[1] && *(int *)(param_1 + 0x40) != param_2[1])))
    goto LAB_0035ca28;
    uVar2 = *(uint *)(param_1 + 0x3c) >> 10 & 0x3ff;
    uVar4 = param_4 >> 10 & 0x3ff;
    if (uVar2 == uVar4) {
      return -2;
    }
    uVar6 = DAT_0035cbf8;
    if (uVar4 <= uVar2) {
      uVar6 = 0;
    }
  }
LAB_0035ca28:
  iVar3 = -2;
  local_28 = param_2[4];
  do {
    uVar7 = local_28;
    uVar4 = uVar7 & 0x3ff;
    uVar2 = uVar7;
    if (uVar4 == 0x3ff) {
      uVar2 = uVar7 + 1;
    }
    if (uVar5 < (uVar2 & 0x3ff) + 8) {
      return -2;
    }
    uVar5 = (uVar5 - (uVar2 & 0x3ff)) - 4;
    local_28 = uVar7;
    iVar1 = FUN_0035aa30(param_1,0,param_1,4,*param_2,uVar5,&local_28,4);
    if (iVar1 != 0) {
      return iVar1;
    }
    local_28 = ((local_28 << 0x18 | (local_28 & 0xff00) << 8 |
                local_28 >> 8 & 0xff00 | local_28 >> 0x18) ^ uVar7) & 0x7fffffff;
    if ((((param_3 & 0xffc00) != 0) && ((uVar7 & 0x70000000) == 0x40000000)) &&
       ((uVar7 >> 10 & 0x3ff) <= (param_4 - uVar6 >> 10 & 0x3ff))) {
      if (uVar7 == (param_4 - uVar6 & 0xffc00 | 0x40100000)) {
        return -2;
      }
      uVar6 = (DAT_0035cbf8 & (int)(uVar7 << 4) >> 0xe) + uVar6;
    }
  } while (((param_4 - uVar6 ^ uVar7) & param_3) != 0);
  if (uVar4 != 0x3ff) {
    if (param_7 <= uVar4) {
      uVar4 = param_7;
    }
    iVar3 = FUN_0035aa30(param_1,0,param_1,uVar4,*param_2,param_5 + uVar5 + 4,param_6,uVar4);
    if (iVar3 == 0) {
      FUN_00359150(param_6 + uVar4,param_7 - uVar4);
      iVar3 = uVar6 + uVar7;
    }
  }
  return iVar3;
}


// FUN_0035cbfc @ 0035cbfc

int FUN_0035cbfc(int param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_2c [8];
  
  iVar1 = 0;
  uVar6 = *param_2;
  if (uVar6 < 0xfffffffe) {
    uVar2 = param_2[1];
    iVar1 = *(int *)(param_1 + 0x68);
    uVar3 = param_2[3];
    pcVar5 = *(code **)(iVar1 + 8);
    iVar8 = param_2[2] + *(int *)(iVar1 + 0x18) + -1;
    FUN_0036a1a4(iVar8);
    uVar10 = iVar8 - extraout_r1;
    iVar1 = (*pcVar5)(iVar1,uVar6,uVar2,uVar3,uVar10);
    if (iVar1 == 0) {
      uVar6 = param_2[3];
      if ((param_4 != 0) && (*param_3 = 0xffffffff, iVar8 != extraout_r1)) {
        uVar2 = *param_2;
        uVar7 = 0;
        uVar3 = param_2[1];
        do {
          uVar4 = uVar10 - uVar7;
          uVar9 = uVar4;
          if (7 < uVar4) {
            uVar9 = 8;
          }
          iVar1 = FUN_0035aa30(param_1,0,param_3,uVar4,uVar2,uVar7 + uVar3,auStack_2c,uVar9);
          if (iVar1 != 0) {
            if (-1 < iVar1) {
              iVar1 = -0x54;
            }
            return iVar1;
          }
          iVar1 = FUN_00367760(auStack_2c,uVar6 + uVar7,uVar9);
          if (iVar1 != 0) {
            return -0x54;
          }
          uVar7 = uVar9 + uVar7;
        } while (uVar7 < uVar10);
        uVar6 = param_2[3];
      }
      FUN_003591f4(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28),0xff);
      *param_2 = 0xffffffff;
      return 0;
    }
  }
  return iVar1;
}


// FUN_0035cd90 @ 0035cd90

uint FUN_0035cd90(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_44;
  int local_40;
  
  uVar14 = *(uint *)(param_2 + 0x34);
  uVar6 = 0;
  if (uVar14 < *(uint *)(param_2 + 0x2c)) {
    uVar7 = *(uint *)(param_2 + 0x2c) - uVar14;
    if (param_4 < uVar7) {
      uVar7 = param_4;
    }
    if (uVar7 != 0) {
      piVar3 = (int *)(param_2 + 0x40);
      puVar4 = (undefined4 *)(param_2 + 0x38);
      puVar5 = (uint *)(param_2 + 0x3c);
      uVar11 = uVar7;
      local_40 = param_3;
      do {
        uVar6 = *(uint *)(param_2 + 0x30);
        if ((uVar6 & 0x40000) == 0) {
LAB_0035ce88:
          if ((uVar6 & 0x100000) == 0) {
            uVar6 = FUN_0035d91c(param_1,piVar3,*(undefined4 *)(param_2 + 0x28),
                                 *(undefined4 *)(param_2 + 0x2c),uVar14,puVar4,puVar5);
            if (uVar6 != 0) {
              return uVar6;
            }
            uVar6 = *(uint *)(param_2 + 0x30);
            uVar14 = *(uint *)(param_2 + 0x3c);
          }
          else {
            *puVar5 = uVar14;
            *puVar4 = 0xfffffffe;
          }
          uVar6 = uVar6 | 0x40000;
          *(uint *)(param_2 + 0x30) = uVar6;
          uVar10 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
          uVar8 = uVar14;
        }
        else {
          uVar8 = *puVar5;
          uVar10 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
          if (uVar8 == uVar10) goto LAB_0035ce88;
        }
        uVar9 = uVar10 - uVar8;
        if (uVar11 < uVar10 - uVar8) {
          uVar9 = uVar11;
        }
        if ((uVar6 & 0x100000) == 0) {
          uVar6 = FUN_0035aa30(param_1,0,piVar3,uVar10,*puVar4,uVar8,local_40,uVar9);
          if (uVar6 != 0) {
            return uVar6;
          }
        }
        else {
          if (uVar10 < uVar9 + uVar8) {
            return 0xffffffac;
          }
          if (uVar10 != uVar8) {
            uVar1 = *(ushort *)(param_2 + 4);
            local_44 = local_40;
            uVar6 = uVar9;
            do {
              if (((*piVar3 == -2) && (uVar14 = *(uint *)(param_2 + 0x44), uVar14 <= uVar8)) &&
                 (uVar8 < *(int *)(param_2 + 0x48) + uVar14)) {
                uVar15 = (uVar14 - uVar8) + *(int *)(param_2 + 0x48);
                if (uVar6 < uVar15) {
                  uVar15 = uVar6;
                }
                FUN_00359188(local_44,*(int *)(param_2 + 0x4c) + (uVar8 - uVar14),uVar15);
                local_44 = local_44 + uVar15;
                uVar6 = uVar6 - uVar15;
                uVar8 = uVar15 + uVar8;
              }
              else {
                *(undefined4 *)(param_2 + 0x40) = 0xfffffffe;
                iVar12 = *(int *)(*(int *)(param_1 + 0x68) + 0x14);
                uVar14 = *(uint *)(*(int *)(param_1 + 0x68) + 0x28);
                FUN_0036a1a4(uVar8,iVar12);
                *(uint *)(param_2 + 0x44) = uVar8 - extraout_r1;
                iVar13 = (uVar10 - 1) + uVar8 + iVar12;
                FUN_0036a1a4(iVar13,iVar12);
                uVar2 = DAT_0035d068;
                uVar15 = iVar13 - extraout_r1_00;
                if (uVar15 < uVar14) {
                  uVar14 = uVar15;
                }
                *(uint *)(param_2 + 0x48) = uVar14;
                uVar14 = FUN_0035c958(param_1,param_2 + 8,uVar2,(uint)uVar1 << 10 | 0x20100000,
                                      uVar8 - extraout_r1,*(undefined4 *)(param_2 + 0x4c),uVar14);
                if ((int)uVar14 < 0) {
                  return uVar14;
                }
              }
            } while (uVar6 != 0);
          }
        }
        uVar14 = *(int *)(param_2 + 0x34) + uVar9;
        uVar11 = uVar11 - uVar9;
        *(uint *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + uVar9;
        *(uint *)(param_2 + 0x34) = uVar14;
        local_40 = local_40 + uVar9;
        uVar6 = uVar7;
      } while (uVar11 != 0);
    }
  }
  return uVar6;
}


// FUN_0035d06c @ 0035d06c

uint FUN_0035d06c(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  uint uVar9;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_6c;
  undefined4 local_30;
  undefined1 uStack_29;
  int local_28;
  
  if ((*(byte *)(param_2 + 0x32) & 0x10) != 0) {
    uVar10 = *(int *)(param_2 + 0x34) + param_4;
    uVar1 = *(uint *)(param_2 + 0x2c);
    if (*(uint *)(param_2 + 0x2c) < uVar10) {
      uVar1 = uVar10;
    }
    if (*(uint *)(param_1 + 0x7c) < uVar1) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
      uVar1 = FUN_0035c590(param_1,param_2);
      uVar10 = *(uint *)(param_2 + 0x30);
      if (uVar1 != 0) {
LAB_0035d8f0:
        *(uint *)(param_2 + 0x30) = uVar10 | 0x80000;
        return uVar1;
      }
      *(uint *)(param_2 + 0x30) = uVar10 & 0xffefffff;
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  piVar2 = (int *)(param_2 + 0x40);
  uVar10 = param_4;
LAB_0035d110:
  uVar1 = *(uint *)(param_2 + 0x30);
  if ((uVar1 & 0x20000) != 0) {
    iVar8 = *(int *)(param_2 + 0x3c);
    iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
    if (iVar8 == iVar3) {
      iVar3 = *(int *)(param_2 + 0x34);
      iVar8 = iVar3;
      if ((uVar1 & 0x100000) == 0) goto LAB_0035d35c;
      goto LAB_0035d1b8;
    }
    goto LAB_0035d1d8;
  }
  iVar8 = *(int *)(param_2 + 0x34);
  if ((uVar1 & 0x100000) != 0) {
LAB_0035d1b8:
    *(int *)(param_2 + 0x3c) = iVar8;
    *(undefined4 *)(param_2 + 0x38) = 0xfffffffe;
    goto LAB_0035d1c4;
  }
  if (*(int *)(param_2 + 0x34) == 0) {
    iVar3 = 0;
LAB_0035d35c:
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    uVar1 = FUN_0035a8d0(param_1,&local_28);
    if (uVar1 == 0) {
      uVar6 = iVar3 - 1;
      do {
        iVar4 = local_28;
        uVar1 = (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(int *)(param_1 + 0x68),local_28);
        if (uVar1 != 0xffffffac) {
          if (uVar1 != 0) goto LAB_0035d88c;
          if (iVar3 == 0) {
LAB_0035d8b8:
            iVar8 = 0;
LAB_0035d8bc:
            *(int *)(param_2 + 0x38) = iVar4;
            *(int *)(param_2 + 0x3c) = iVar8;
            goto LAB_0035d1c4;
          }
          iVar15 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
          uVar7 = 0;
          uVar12 = iVar15 - 8;
          uVar1 = uVar6;
          if (uVar12 <= uVar6) {
            iVar8 = FUN_00369d30(uVar6,uVar12);
            uVar1 = DAT_0035d910;
            uVar7 = (iVar8 - 1U) - (DAT_0035d90c & iVar8 - 1U >> 1);
            uVar7 = (uVar7 & DAT_0035d910) + (DAT_0035d910 & uVar7 >> 2);
            uVar7 = FUN_00369d30((iVar3 + -9) -
                                 ((uVar7 + (uVar7 >> 4) & DAT_0035d914) * DAT_0035d918 >> 0x16 &
                                 0xfffffffc),uVar12);
            uVar9 = uVar7 - (DAT_0035d90c & uVar7 >> 1);
            uVar1 = (uVar9 & uVar1) + (uVar1 & uVar9 >> 2);
            uVar1 = uVar6 - (uVar7 * uVar12 +
                            ((uVar1 + (uVar1 >> 4) & DAT_0035d914) * DAT_0035d918 >> 0x16 &
                            0xfffffffc));
          }
          iVar8 = uVar1 + 1;
          if (iVar8 == iVar15) {
            uVar9 = 0;
            uVar7 = uVar7 + 1 & ~uVar7;
            uVar1 = uVar7 >> 0x10;
            if (uVar1 != 0) {
              uVar1 = 1;
            }
            uVar7 = uVar7 >> (uVar1 << 4 & 0xff);
            uVar12 = (uint)(0xff < uVar7);
            uVar7 = uVar7 >> (uVar12 << 3);
            uVar17 = (uint)(0xf < uVar7);
            uVar7 = uVar7 >> (uVar17 << 2);
            uVar16 = (uint)(3 < uVar7);
            uVar1 = uVar1 << 4 | (uVar7 >> (uVar16 << 1)) >> 1 | uVar12 << 3 | uVar17 << 2 |
                    uVar16 << 1;
            local_30 = uVar5;
            do {
              puVar13 = &local_30;
              uVar7 = uVar9 << 2;
              uVar17 = 4;
              do {
                if (*piVar2 == iVar4) {
                  uVar12 = *(uint *)(param_2 + 0x44);
                  iVar8 = *(int *)(param_1 + 0x68);
                  if ((uVar7 < uVar12) ||
                     (iVar15 = *(int *)(iVar8 + 0x28), iVar15 + uVar12 <= uVar7)) goto LAB_0035d56c;
                }
                else {
                  iVar8 = *(int *)(param_1 + 0x68);
LAB_0035d56c:
                  iVar15 = *(int *)(iVar8 + 0x28);
                  *(int *)(param_2 + 0x40) = iVar4;
                  *(undefined4 *)(param_2 + 0x48) = 0;
                  FUN_0036a1a4(uVar7,*(undefined4 *)(iVar8 + 0x18));
                  uVar12 = uVar7 - extraout_r1_00;
                  *(uint *)(param_2 + 0x44) = uVar12;
                  if (iVar15 + uVar12 <= uVar7) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                }
                uVar16 = (iVar15 - uVar7) + uVar12;
                if (uVar17 < uVar16) {
                  uVar16 = uVar17;
                }
                FUN_00359188(*(int *)(param_2 + 0x4c) + (uVar7 - uVar12),puVar13,uVar16);
                uVar7 = uVar16 + uVar7;
                uVar12 = uVar7 - *(int *)(param_2 + 0x44);
                if (uVar12 < *(uint *)(param_2 + 0x48)) {
                  uVar12 = *(uint *)(param_2 + 0x48);
                }
                iVar8 = *(int *)(param_1 + 0x68);
                *(uint *)(param_2 + 0x48) = uVar12;
                if ((uVar12 == *(uint *)(iVar8 + 0x28)) &&
                   (uVar12 = FUN_0035cbfc(param_1,piVar2,param_1,1), uVar12 != 0)) {
                  iVar15 = 1;
                  if (uVar12 == 0xffffffac) {
                    iVar15 = 4;
                    uVar12 = uStack_6c;
                  }
                  goto LAB_0035d820;
                }
                uVar17 = uVar17 - uVar16;
                puVar13 = (undefined4 *)((int)puVar13 + uVar16);
              } while (uVar17 != 0);
              if (uVar9 == uVar1) {
                iVar15 = 1;
                *(int *)(param_2 + 0x38) = iVar4;
                *(uint *)(param_2 + 0x3c) = uVar1 * 4 + 4;
                uVar12 = 0;
                goto LAB_0035d820;
              }
              uVar12 = FUN_0035aa30(param_1,0,param_1,4);
              uVar9 = uVar9 + 1;
            } while (uVar12 == 0);
            iVar15 = 1;
          }
          else {
            uVar7 = 0;
            if (iVar8 == 0) goto LAB_0035d8b8;
            while( true ) {
              puVar14 = &uStack_29;
              iVar15 = 1;
              uVar12 = FUN_0035aa30(param_1,0,param_1,iVar8 - uVar7);
              if (uVar12 != 0) break;
              uVar17 = 1;
              uVar9 = uVar7;
              do {
                if (*piVar2 == iVar4) {
                  uVar12 = *(uint *)(param_2 + 0x44);
                  iVar15 = *(int *)(param_1 + 0x68);
                  if ((uVar9 < uVar12) ||
                     (iVar11 = *(int *)(iVar15 + 0x28), iVar11 + uVar12 <= uVar9))
                  goto LAB_0035d718;
                }
                else {
                  iVar15 = *(int *)(param_1 + 0x68);
LAB_0035d718:
                  iVar11 = *(int *)(iVar15 + 0x28);
                  *(int *)(param_2 + 0x40) = iVar4;
                  *(undefined4 *)(param_2 + 0x48) = 0;
                  FUN_0036a1a4(uVar9,*(undefined4 *)(iVar15 + 0x18));
                  uVar12 = uVar9 - extraout_r1_01;
                  *(uint *)(param_2 + 0x44) = uVar12;
                  if (iVar11 + uVar12 <= uVar9) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                }
                uVar16 = (iVar11 - uVar9) + uVar12;
                if (uVar17 < uVar16) {
                  uVar16 = uVar17;
                }
                FUN_00359188(*(int *)(param_2 + 0x4c) + (uVar9 - uVar12),puVar14,uVar16);
                uVar9 = uVar16 + uVar9;
                uVar12 = uVar9 - *(int *)(param_2 + 0x44);
                if (uVar12 < *(uint *)(param_2 + 0x48)) {
                  uVar12 = *(uint *)(param_2 + 0x48);
                }
                iVar15 = *(int *)(param_1 + 0x68);
                *(uint *)(param_2 + 0x48) = uVar12;
                if ((uVar12 == *(uint *)(iVar15 + 0x28)) &&
                   (uVar12 = FUN_0035cbfc(param_1,piVar2,param_1,1), uVar12 != 0)) {
                  if (uVar12 == 0xffffffac) {
                    iVar15 = 4;
                    uVar12 = uStack_6c;
                  }
                  else {
                    iVar15 = 1;
                  }
                  goto LAB_0035d820;
                }
                uVar17 = uVar17 - uVar16;
                puVar14 = puVar14 + uVar16;
              } while (uVar17 != 0);
              bVar18 = uVar7 == uVar1;
              uVar7 = uVar7 + 1;
              if (bVar18) goto LAB_0035d8bc;
            }
          }
LAB_0035d820:
          uStack_6c = uVar12;
          uVar1 = uStack_6c;
          if (iVar15 != 4) goto LAB_0035d88c;
        }
        *piVar2 = -1;
        uVar1 = FUN_0035a8d0(param_1,&local_28);
        if (uVar1 != 0) break;
      } while( true );
    }
  }
  else {
    uVar1 = FUN_0035d91c(param_1,piVar2,*(undefined4 *)(param_2 + 0x28),
                         *(undefined4 *)(param_2 + 0x2c));
    if (uVar1 == 0) {
      FUN_003591f4(*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28),
                   0xff);
      *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
      iVar3 = *(int *)(param_2 + 0x34);
      goto LAB_0035d35c;
    }
  }
  goto LAB_0035d8ec;
LAB_0035d88c:
  uStack_6c = uVar1;
  uVar1 = uStack_6c;
  if (uStack_6c != 0) {
LAB_0035d8ec:
    uVar10 = *(uint *)(param_2 + 0x30);
    goto LAB_0035d8f0;
  }
  iVar8 = *(int *)(param_2 + 0x3c);
LAB_0035d1c4:
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
  iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
LAB_0035d1d8:
  uVar6 = iVar3 - iVar8;
  if (uVar10 < (uint)(iVar3 - iVar8)) {
    uVar6 = uVar10;
  }
  if (iVar3 != iVar8) {
LAB_0035d1f4:
    iVar3 = *(int *)(param_2 + 0x38);
    uVar12 = *(uint *)(param_2 + 0x3c);
    iVar8 = param_3;
    uVar7 = uVar6;
    do {
      if (*piVar2 == iVar3) {
        uVar1 = *(uint *)(param_2 + 0x44);
        iVar4 = *(int *)(param_1 + 0x68);
        if ((uVar12 < uVar1) || (iVar15 = *(int *)(iVar4 + 0x28), iVar15 + uVar1 <= uVar12))
        goto LAB_0035d244;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x68);
LAB_0035d244:
        iVar15 = *(int *)(iVar4 + 0x28);
        *(int *)(param_2 + 0x40) = iVar3;
        *(undefined4 *)(param_2 + 0x48) = 0;
        FUN_0036a1a4(uVar12,*(undefined4 *)(iVar4 + 0x18));
        uVar1 = uVar12 - extraout_r1;
        *(uint *)(param_2 + 0x44) = uVar1;
        if (iVar15 + uVar1 <= uVar12) {
          *(uint *)(param_2 + 0x44) = uVar1;
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      uVar9 = (iVar15 - uVar12) + uVar1;
      if (uVar7 < uVar9) {
        uVar9 = uVar7;
      }
      FUN_00359188(*(int *)(param_2 + 0x4c) + (uVar12 - uVar1),iVar8,uVar9);
      uVar12 = uVar9 + uVar12;
      uVar1 = uVar12 - *(int *)(param_2 + 0x44);
      if (uVar1 < *(uint *)(param_2 + 0x48)) {
        uVar1 = *(uint *)(param_2 + 0x48);
      }
      iVar4 = *(int *)(param_1 + 0x68);
      *(uint *)(param_2 + 0x48) = uVar1;
      if ((uVar1 == *(uint *)(iVar4 + 0x28)) &&
         (uVar1 = FUN_0035cbfc(param_1,piVar2,param_1,1), uVar1 != 0)) goto code_r0x0035d2ec;
      uVar7 = uVar7 - uVar9;
      iVar8 = iVar8 + uVar9;
      if (uVar7 == 0) {
        iVar8 = *(int *)(param_2 + 0x3c);
        break;
      }
    } while( true );
  }
  uVar10 = uVar10 - uVar6;
  param_3 = param_3 + uVar6;
  *(uint *)(param_2 + 0x3c) = iVar8 + uVar6;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + uVar6;
  if (uVar10 == 0) {
    return param_4;
  }
  goto LAB_0035d110;
code_r0x0035d2ec:
  if ((uVar1 != 0xffffffac) || (uVar1 = FUN_0035c590(param_1,param_2), uVar1 != 0))
  goto LAB_0035d8ec;
  goto LAB_0035d1f4;
}


// FUN_0035d91c @ 0035d91c

int FUN_0035d91c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                undefined4 *param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_2c;
  undefined4 local_28;
  
  if (param_4 == 0) {
    local_28 = 0xffffffff;
    local_2c = 0;
  }
  else {
    uVar9 = 0;
    uVar6 = 0;
    local_2c = param_5;
    uVar8 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c) - 8;
    local_28 = param_3;
    if (uVar8 <= param_4 - 1U) {
      iVar1 = FUN_00369d30(param_4 - 1U,uVar8);
      uVar6 = (iVar1 - 1U) - (DAT_0035dbbc & iVar1 - 1U >> 1);
      uVar6 = (uVar6 & DAT_0035dbc0) + (DAT_0035dbc0 & uVar6 >> 2);
      uVar6 = FUN_00369d30((param_4 -
                           ((uVar6 + (uVar6 >> 4) & DAT_0035dbc4) * DAT_0035dbc8 >> 0x16 &
                           0xfffffffc)) + -9,uVar8);
    }
    if (uVar8 <= param_5) {
      iVar1 = FUN_00369d30(param_5,uVar8);
      uVar3 = DAT_0035dbc0;
      uVar9 = (iVar1 - 1U) - (DAT_0035dbbc & iVar1 - 1U >> 1);
      uVar9 = (uVar9 & DAT_0035dbc0) + (DAT_0035dbc0 & uVar9 >> 2);
      uVar9 = FUN_00369d30((param_5 -
                           ((uVar9 + (uVar9 >> 4) & DAT_0035dbc4) * DAT_0035dbc8 >> 0x16 &
                           0xfffffffc)) + -8,uVar8);
      uVar2 = uVar9 - (DAT_0035dbbc & uVar9 >> 1);
      uVar3 = (uVar2 & uVar3) + (uVar3 & uVar2 >> 2);
      local_2c = param_5 - (uVar9 * uVar8 +
                           ((uVar3 + (uVar3 >> 4) & DAT_0035dbc4) * DAT_0035dbc8 >> 0x16 &
                           0xfffffffc));
    }
    while (uVar9 < uVar6) {
      uVar8 = uVar6 - uVar9 >> 0x10;
      if (uVar8 != 0) {
        uVar8 = 1;
      }
      uVar2 = uVar6 - uVar9 >> (uVar8 << 4 & 0xff);
      uVar4 = (uint)(0xff < uVar2);
      uVar2 = uVar2 >> (uVar4 << 3);
      uVar5 = (uint)(0xf < uVar2);
      uVar2 = uVar2 >> (uVar5 << 2);
      uVar7 = (uint)(3 < uVar2);
      uVar3 = (uVar6 & -uVar6) >> 0x10;
      if (uVar3 != 0) {
        uVar3 = 1;
      }
      uVar2 = uVar8 << 4 | (uVar2 >> (uVar7 << 1)) >> 1 | uVar4 << 3 | uVar5 << 2 | uVar7 << 1;
      uVar8 = (uVar6 & -uVar6) >> (uVar3 << 4 & 0xff);
      uVar4 = (uint)(0xff < uVar8);
      uVar8 = uVar8 >> (uVar4 << 3);
      uVar7 = (uint)(0xf < uVar8);
      uVar8 = uVar8 >> (uVar7 << 2);
      uVar5 = (uint)(3 < uVar8);
      uVar8 = uVar3 << 4 | (uVar8 >> (uVar5 << 1)) >> 1 | uVar4 << 3 | uVar7 << 2 | uVar5 << 1;
      if (uVar2 < uVar8) {
        uVar8 = uVar2;
      }
      uVar6 = uVar6 + (-1 << (uVar8 & 0xff));
      iVar1 = FUN_0035aa30(param_1,0,param_2,4,local_28,uVar8 << 2,&local_28,4);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  *param_6 = local_28;
  *param_7 = local_2c;
  return 0;
}


// FUN_0035dbcc @ 0035dbcc

/* WARNING: Type propagation algorithm not settling */

int FUN_0035dbcc(undefined4 param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,
                uint param_6,uint param_7,uint param_8,uint param_9,uint param_10,code *param_11,
                uint *param_12)

{
  short sVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  code *local_d0;
  uint local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint *local_b8;
  uint local_b4;
  uint local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint auStack_9c [7];
  uint auStack_80 [23];
  
  local_c4 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_b8 = param_12;
  local_c0 = param_9;
  local_bc = param_8;
  local_b0 = 0;
  pcVar2 = param_11;
  local_c8 = param_10;
LAB_0035dc44:
  do {
    while( true ) {
      local_d0 = pcVar2;
      do {
        uVar3 = param_4;
        if ((param_4 & 0x3ff) == 0x3ff) {
          uVar3 = param_4 + 1;
        }
        iVar4 = param_3 + (uVar3 & 0x3ff);
        uVar3 = iVar4 + 4;
        if (uVar3 < param_2[3]) {
          iVar5 = FUN_0035aa30(param_1,0,param_1,4,*param_2,uVar3,&local_a0,4);
          if (iVar5 != 0) {
            return iVar5;
          }
          local_a0 = (local_a0 << 0x18 | (local_a0 & 0xff00) << 8 |
                     local_a0 >> 8 & 0xff00 | local_a0 >> 0x18) ^ param_4 | 0x80000000;
          local_a4 = iVar4 + 8;
          puVar6 = &local_a8;
          local_a8 = *param_2;
          param_4 = local_a0;
          param_3 = uVar3;
        }
        else {
          if ((int)param_6 < 1) {
            iVar4 = 0;
            goto LAB_0035de20;
          }
          local_a0 = *param_5;
          puVar6 = (uint *)param_5[1];
          param_5 = param_5 + 2;
          param_6 = param_6 - 1;
        }
      } while ((param_7 & 0x7ff00000 & (local_a0 ^ local_b0)) != 0);
      local_b4 = param_3;
      if ((param_7 & 0xffc00) == 0) break;
      auStack_9c[local_c4 * 0xf] = (uint)param_2;
      auStack_80[local_c4 * 0xf + 5] = (uint)puVar6;
      auStack_80[local_c4 * 0xf + -2] = param_7;
      auStack_80[local_c4 * 0xf + 7] = local_a4;
      auStack_9c[local_c4 * 0xf + 1] = param_3;
      auStack_9c[local_c4 * 0xf + 2] = param_4;
      auStack_9c[local_c4 * 0xf + 3] = (uint)param_5;
      auStack_80[local_c4 * 0xf + -3] = param_6;
      auStack_80[local_c4 * 0xf + 6] = local_a8;
      auStack_80[local_c4 * 0xf + 2] = (uint)local_d0;
      auStack_80[local_c4 * 0xf + 3] = (uint)local_b8;
      *(short *)(auStack_80 + local_c4 * 0xf + 1) = (short)local_c8;
      *(short *)((int)auStack_80 + (local_c4 * 0x1e + 1) * 2) = (short)local_c0;
      *(short *)(auStack_80 + local_c4 * 0xf) = (short)local_bc;
      auStack_80[local_c4 * 0xf + -1] = local_b0;
      local_b8 = auStack_80 + local_c4 * 0xf + 4;
      *local_b8 = local_a0;
      local_c8 = 0;
      local_d0 = DAT_0035e11c;
      local_c0 = 0;
      local_bc = 0;
      param_7 = 0;
      local_b0 = 0;
      pcVar2 = local_d0;
      local_c4 = local_c4 + 1;
    }
    while( true ) {
      param_3 = local_b4;
      pcVar2 = local_d0;
      if ((((param_7 & 0xffc00) != 0) &&
          ((uVar3 = local_a0 >> 10 & 0x3ff, uVar3 < (local_bc & 0xffff) ||
           ((local_c0 & 0xffff) <= uVar3)))) || (uVar3 = local_a0 >> 0x14 & 0x7ff, uVar3 == 0))
      goto LAB_0035dc44;
      sVar1 = (short)local_c8;
      if (uVar3 == 0x101) break;
      if (uVar3 == 0x102) {
        if ((local_a0 & 0x3ff) != 0) {
          puVar6 = puVar6 + 1;
          uVar3 = 0;
          goto LAB_0035df64;
        }
        goto LAB_0035dc44;
      }
      iVar4 = (*local_d0)(local_b8,local_a0 + sVar1 * 0x400);
      if (iVar4 < 0) {
        return iVar4;
      }
      if (iVar4 == 0) goto LAB_0035dc44;
LAB_0035de20:
      if (local_c4 == 0) {
        return iVar4;
      }
      local_c4 = local_c4 + -1;
      param_2 = (uint *)auStack_9c[local_c4 * 0xf];
      local_c0 = (uint)*(ushort *)((int)auStack_80 + (local_c4 * 0x1e + 1) * 2);
      local_b8 = (uint *)auStack_80[local_c4 * 0xf + 3];
      local_d0 = (code *)auStack_80[local_c4 * 0xf + 2];
      local_c8 = (uint)(ushort)auStack_80[local_c4 * 0xf + 1];
      param_5 = (uint *)auStack_9c[local_c4 * 0xf + 3];
      param_7 = auStack_80[local_c4 * 0xf + -2];
      local_bc = (uint)(ushort)auStack_80[local_c4 * 0xf];
      puVar6 = (uint *)auStack_80[local_c4 * 0xf + 5];
      local_a4 = auStack_80[local_c4 * 0xf + 7];
      local_a8 = auStack_80[local_c4 * 0xf + 6];
      param_6 = auStack_80[local_c4 * 0xf + -3];
      local_b4 = auStack_9c[local_c4 * 0xf + 1];
      local_a0 = auStack_80[local_c4 * 0xf + 4];
      param_4 = auStack_9c[local_c4 * 0xf + 2];
      local_b0 = auStack_80[local_c4 * 0xf + -1];
    }
    pcVar2 = DAT_0035e11c;
    if (local_d0 != DAT_0035e11c) {
      auStack_9c[local_c4 * 0xf] = (uint)param_2;
      auStack_80[local_c4 * 0xf + -3] = param_6;
      auStack_9c[local_c4 * 0xf + 3] = (uint)param_5;
      *(short *)(auStack_80 + local_c4 * 0xf + 1) = sVar1;
      auStack_80[local_c4 * 0xf + -2] = param_7;
      auStack_80[local_c4 * 0xf + 2] = (uint)local_d0;
      auStack_80[local_c4 * 0xf + 4] = 0;
      auStack_80[local_c4 * 0xf + 5] = 0;
      auStack_80[local_c4 * 0xf + 6] = 0;
      auStack_80[local_c4 * 0xf + 7] = 0;
      param_5 = (uint *)0x0;
      *(short *)((int)auStack_80 + (local_c4 * 0x1e + 1) * 2) = (short)local_c0;
      auStack_80[local_c4 * 0xf + 3] = (uint)local_b8;
      param_6 = 0;
      *(short *)(auStack_80 + local_c4 * 0xf) = (short)local_bc;
      auStack_9c[local_c4 * 0xf + 1] = local_b4;
      auStack_9c[local_c4 * 0xf + 2] = param_4;
      auStack_80[local_c4 * 0xf + -1] = local_b0;
      local_bc = local_a0 & 0x3ff;
      local_c8 = (local_c8 - local_bc) + (local_a0 >> 10 & 0x3ff);
      local_c0 = local_bc + 1;
      param_4 = 0xffffffff;
      param_7 = 0x600ffc00;
      local_b0 = 0x20000000;
      local_b4 = 0;
      param_3 = local_b4;
      pcVar2 = local_d0;
      local_c4 = local_c4 + 1;
      param_2 = puVar6;
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 3;
    if ((local_a0 & 0x3ff) <= uVar3) break;
LAB_0035df64:
    iVar4 = (*local_d0)(local_b8,(local_a0 & 0xffc00) + sVar1 * 0x400 | puVar6[1] |
                                 (uint)(byte)puVar6[-1] << 0x14 | 0x30000000,*puVar6);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (iVar4 != 0) break;
  }
  goto LAB_0035dc44;
}


// FUN_0035e13c @ 0035e13c

int FUN_0035e13c(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uStack_29;
  uint local_28;
  
  uVar4 = param_3;
  if ((param_3 & 0x3ff) == 0x3ff) {
    uVar4 = param_3 + 1;
  }
  uVar4 = uVar4 & 0x3ff;
  iVar1 = -0x1c;
  if (uVar4 + *(int *)(param_2 + 4) + 4 <= *(uint *)(param_2 + 0x14)) {
    uVar2 = *(uint *)(param_2 + 8) ^ param_3 & 0x7fffffff;
    local_28 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
    iVar1 = FUN_0035e968(param_1,param_2,&local_28,4);
    if (iVar1 == 0) {
      if (param_3 == 0xffffffff || (int)(param_3 + 1) < 0 != SCARRY4(param_3,1)) {
        if (uVar4 != 0) {
          iVar1 = 0;
          do {
            iVar3 = FUN_0035aa30(param_1,0,param_1,uVar4,*param_4,iVar1 + param_4[1],&uStack_29,1);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_0035e968(param_1,param_2,&uStack_29,1);
            if (iVar3 != 0) {
              return iVar3;
            }
            uVar4 = uVar4 - 1;
            iVar1 = iVar1 + 1;
          } while (uVar4 != 0);
        }
      }
      else {
        iVar1 = FUN_0035e968(param_1,param_2,param_4,uVar4);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      *(uint *)(param_2 + 8) = param_3 & 0x7fffffff;
      return 0;
    }
  }
  return iVar1;
}


// FUN_0035e280 @ 0035e280

int FUN_0035e280(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  int extraout_r1_00;
  uint uVar4;
  int iVar5;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int local_58;
  int local_50;
  uint local_38;
  undefined4 local_34;
  byte local_2d;
  uint local_2c;
  int local_28;
  
  uVar8 = param_2[1];
  uVar6 = *(uint *)(param_1[0x1a] + 0x1c);
  if (uVar8 + 0x14 < uVar6) {
    uVar6 = uVar8 + 0x14;
  }
  iVar10 = uVar6 + *(int *)(param_1[0x1a] + 0x18) + -1;
  FUN_0036a1a4(iVar10);
  uVar6 = iVar10 - extraout_r1;
  local_58 = 0;
  local_50 = 0;
  if (uVar8 < uVar6) {
    local_50 = 0;
    local_58 = 0;
    do {
      local_2d = 0xff;
      uVar2 = uVar6 - (uVar8 + 4);
      if (0x3fd < uVar2) {
        uVar2 = 0x3fe;
      }
      uVar2 = uVar2 + uVar8 + 4;
      uVar9 = uVar6 - 0x14;
      if (uVar2 < uVar6 - 0x14) {
        uVar9 = uVar2;
      }
      if (uVar6 <= uVar2) {
        uVar9 = uVar2;
      }
      uVar2 = DAT_0035e8b8;
      if ((uVar6 <= uVar9) &&
         (iVar10 = *(int *)(param_1[0x1a] + 0x18),
         uVar9 <= (uint)(*(int *)(param_1[0x1a] + 0x1c) - iVar10))) {
        iVar10 = FUN_0035aa30(param_1,0,param_1,iVar10,*param_2,uVar9,&local_2d,1);
        if (iVar10 != 0 && iVar10 != -0x54) {
          return iVar10;
        }
        local_34 = 0xffffffff;
        uVar8 = *(uint *)(param_1[0x1a] + 0x18);
        local_38 = uVar8;
        if (uVar8 != 0) {
          uVar2 = 0;
          iVar10 = *param_2;
          do {
            uVar3 = uVar8 - uVar2;
            uVar16 = 8;
            if (uVar3 < 8) {
              uVar16 = uVar3;
            }
            iVar1 = FUN_0035aa30(param_1,0,param_1,uVar3,iVar10,uVar2 + uVar9,&local_2c,uVar16);
            if (iVar1 != 0) {
              if (iVar1 != -0x54) {
                return iVar1;
              }
              break;
            }
            local_34 = FUN_0035ff40(local_34,&local_2c,uVar16);
            uVar2 = uVar16 + uVar2;
          } while (uVar2 < uVar8);
        }
        if ((uint)param_2[5] < param_2[1] + 0xcU) {
          return -0x1c;
        }
        uVar8 = param_2[2] ^ DAT_0035e8bc;
        local_2c = uVar8 << 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 8 & 0xff00 | uVar8 >> 0x18;
        iVar10 = FUN_0035e968(param_1,param_2,&local_2c,4);
        if (iVar10 != 0) {
          return iVar10;
        }
        iVar10 = FUN_0035e968(param_1,param_2,&local_38,8);
        if (iVar10 != 0) {
          return iVar10;
        }
        uVar8 = param_2[1];
        param_2[2] = DAT_0035e8bc;
        iVar10 = (int)(char)local_2d;
        uVar2 = DAT_0035e8b8;
        if (iVar10 != -1 && iVar10 + 1 < 0 == SCARRY4(iVar10,1)) {
          uVar2 = DAT_0035e8b8 + 0x100000;
        }
      }
      puVar13 = &local_2c;
      uVar2 = uVar2 | (uVar9 - uVar8) - 4;
      uVar8 = uVar2 ^ param_2[2];
      local_2c = uVar8 << 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 8 & 0xff00 | uVar8 >> 0x18;
      local_28 = FUN_0035ff40(param_2[3],puVar13,4);
      param_2[3] = local_28;
      iVar10 = *param_2;
      uVar8 = param_2[1];
      uVar16 = 8;
      do {
        if (param_1[4] == iVar10) {
          uVar3 = param_1[5];
          iVar1 = param_1[0x1a];
          if ((uVar8 < uVar3) || (iVar11 = *(int *)(iVar1 + 0x28), iVar11 + uVar3 <= uVar8))
          goto LAB_0035e58c;
        }
        else {
          iVar1 = param_1[0x1a];
LAB_0035e58c:
          param_1[4] = iVar10;
          param_1[6] = 0;
          iVar11 = *(int *)(iVar1 + 0x28);
          FUN_0036a1a4(uVar8,*(undefined4 *)(iVar1 + 0x18));
          uVar3 = uVar8 - extraout_r1_00;
          param_1[5] = uVar3;
          if (iVar11 + uVar3 <= uVar8) {
            param_1[5] = uVar3;
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        uVar14 = (iVar11 - uVar8) + uVar3;
        if (uVar16 < uVar14) {
          uVar14 = uVar16;
        }
        FUN_00359188(param_1[7] + (uVar8 - uVar3),puVar13,uVar14);
        iVar1 = param_1[5];
        uVar8 = uVar14 + uVar8;
        iVar11 = param_1[0x1a];
        uVar3 = uVar8 - iVar1;
        if (uVar3 < (uint)param_1[6]) {
          uVar3 = param_1[6];
        }
        param_1[6] = uVar3;
        if ((uVar3 == *(uint *)(iVar11 + 0x28)) && (uVar4 = param_1[4], uVar4 < 0xfffffffe)) {
          iVar5 = *(int *)(iVar11 + 0x18);
          pcVar7 = *(code **)(iVar11 + 8);
          FUN_0036a1a4();
          iVar1 = (*pcVar7)(iVar11,uVar4,iVar1,param_1[7],(uVar3 + iVar5 + -1) - extraout_r1_01);
          if (iVar1 != 0) {
            return iVar1;
          }
          FUN_003591f4(param_1[7],*(undefined4 *)(param_1[0x1a] + 0x28),0xff);
          param_1[4] = 0xffffffff;
        }
        uVar16 = uVar16 - uVar14;
        puVar13 = (uint *)((int)puVar13 + uVar14);
      } while (uVar16 != 0);
      if (local_50 == 0) {
        local_58 = param_2[3];
        local_50 = param_2[1] + 4;
      }
      param_2[1] = uVar9;
      param_2[2] = uVar2 ^ (~(uint)local_2d & 0x80) << 0x18;
      param_2[3] = -1;
      iVar10 = param_1[0x1a];
      if ((uVar6 <= uVar9) || ((uint)(*(int *)(iVar10 + 0x28) + param_1[5]) <= uVar9)) {
        uVar8 = param_1[4];
        *param_1 = 0xffffffff;
        if (uVar8 < 0xfffffffe) {
          pcVar7 = *(code **)(iVar10 + 8);
          uVar15 = param_1[5];
          uVar12 = param_1[7];
          iVar1 = param_1[6] + *(int *)(iVar10 + 0x18) + -1;
          FUN_0036a1a4(iVar1);
          iVar10 = (*pcVar7)(iVar10,uVar8,uVar15,uVar12,iVar1 - extraout_r1_02);
          if (iVar10 != 0) {
            return iVar10;
          }
          FUN_003591f4(param_1[7],*(undefined4 *)(param_1[0x1a] + 0x28),0xff);
          param_1[4] = 0xffffffff;
          iVar10 = param_1[0x1a];
        }
        iVar10 = (**(code **)(iVar10 + 0x10))();
        if (iVar10 != 0) {
          return iVar10;
        }
        uVar9 = param_2[1];
      }
      uVar8 = uVar9;
    } while (uVar9 < uVar6);
  }
  iVar1 = param_2[4];
  iVar10 = -1;
  if (local_50 != iVar1) {
    uVar6 = 0;
    iVar11 = *param_2;
    do {
      uVar8 = (local_50 - iVar1) - uVar6;
      if (7 < uVar8) {
        uVar8 = 8;
      }
      iVar5 = FUN_0035aa30(param_1,0,param_1,(local_50 + 4) - uVar6,iVar11,uVar6 + iVar1,&local_2c,
                           uVar8);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar10 = FUN_0035ff40(iVar10,&local_2c,uVar8);
      uVar6 = uVar8 + uVar6;
    } while (uVar6 < (uint)(local_50 - iVar1));
  }
  iVar1 = -0x54;
  if ((iVar10 == local_58) &&
     (iVar1 = FUN_0035aa30(param_1,0,param_1,4,*param_2,local_50,&local_2c,4), iVar1 == 0)) {
    iVar10 = FUN_0035ff40(local_58,&local_2c,4);
    if (iVar10 != 0) {
      iVar10 = -0x54;
    }
    return iVar10;
  }
  return iVar1;
}


// FUN_0035e8c0 @ 0035e8c0

undefined4 FUN_0035e8c0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar2 = *param_1;
  uVar5 = 1;
  uVar1 = 0;
  uVar4 = uVar2 & 0x3ff;
  uVar3 = DAT_0035e960;
  if ((param_2 & 0x10000000) == 0) {
    uVar3 = DAT_0035e960 + 0xf0100000;
  }
  bVar6 = uVar4 != 0x3ff;
  if (bVar6) {
    uVar4 = uVar2 ^ param_2;
  }
  if ((bVar6 && (uVar4 & uVar3) != 0) &&
     ((param_2 & DAT_0035e960) != (uVar2 & 0xffc00 | 0x4ff00000))) {
    uVar5 = 0;
    if ((param_2 & 0x70000000) != 0x40000000) {
      return 0;
    }
    if ((uVar2 >> 10 & 0x3ff) < (param_2 >> 10 & 0x3ff)) {
      return 0;
    }
    uVar1 = uVar2 + (DAT_0035e964 & (int)(param_2 << 4) >> 0xe);
  }
  *param_1 = uVar1;
  return uVar5;
}


// FUN_0035e968 @ 0035e968

int FUN_0035e968(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  int iVar4;
  int extraout_r1_00;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_4 != 0) {
    iVar6 = *param_2;
    uVar9 = param_2[1];
    iVar10 = param_3;
    uVar11 = param_4;
    do {
      if (*(int *)(param_1 + 0x10) == iVar6) {
        uVar2 = *(uint *)(param_1 + 0x14);
        iVar1 = *(int *)(param_1 + 0x68);
        if ((uVar9 < uVar2) || (iVar7 = *(int *)(iVar1 + 0x28), iVar7 + uVar2 <= uVar9))
        goto LAB_0035ea04;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x68);
LAB_0035ea04:
        iVar7 = *(int *)(iVar1 + 0x28);
        *(int *)(param_1 + 0x10) = iVar6;
        *(undefined4 *)(param_1 + 0x18) = 0;
        FUN_0036a1a4(uVar9,*(undefined4 *)(iVar1 + 0x18));
        uVar2 = uVar9 - extraout_r1;
        *(uint *)(param_1 + 0x14) = uVar2;
        if (iVar7 + uVar2 <= uVar9) {
          *(uint *)(param_1 + 0x14) = uVar2;
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      uVar8 = (iVar7 - uVar9) + uVar2;
      if (uVar11 < uVar8) {
        uVar8 = uVar11;
      }
      FUN_00359188(*(int *)(param_1 + 0x1c) + (uVar9 - uVar2),iVar10,uVar8);
      iVar1 = *(int *)(param_1 + 0x14);
      iVar7 = *(int *)(param_1 + 0x68);
      uVar9 = uVar8 + uVar9;
      uVar2 = uVar9 - iVar1;
      if (uVar2 < *(uint *)(param_1 + 0x18)) {
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      uVar3 = *(uint *)(iVar7 + 0x28);
      *(uint *)(param_1 + 0x18) = uVar2;
      if ((uVar2 == uVar3) && (uVar3 = *(uint *)(param_1 + 0x10), uVar3 < 0xfffffffe)) {
        iVar4 = *(int *)(iVar7 + 0x18);
        pcVar5 = *(code **)(iVar7 + 8);
        FUN_0036a1a4();
        iVar1 = (*pcVar5)(iVar7,uVar3,iVar1,*(undefined4 *)(param_1 + 0x1c),
                          (uVar2 + iVar4 + -1) - extraout_r1_00);
        if (iVar1 != 0) {
          return iVar1;
        }
        FUN_003591f4(*(undefined4 *)(param_1 + 0x1c),
                     *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28),0xff);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      }
      uVar11 = uVar11 - uVar8;
      iVar10 = iVar10 + uVar8;
    } while (uVar11 != 0);
  }
  iVar10 = FUN_0035ff40(param_2[3],param_3,param_4);
  param_2[3] = iVar10;
  param_2[1] = param_2[1] + param_4;
  return 0;
}


// FUN_0035eb54 @ 0035eb54

uint FUN_0035eb54(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  undefined4 ******ppppppuVar4;
  uint uVar5;
  undefined4 *******pppppppuVar6;
  undefined4 ******ppppppuVar7;
  uint *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined4 ******local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar8 = param_2 + 2;
  uVar5 = *puVar8 + 1;
  iVar1 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(iVar1 + 0x24);
  if (iVar2 < 1) {
    *puVar8 = uVar5;
    bVar11 = false;
    bVar10 = false;
  }
  else {
    *puVar8 = uVar5;
    FUN_0036a1a4(uVar5,iVar2 + 1U | 1);
    bVar11 = false;
    if (extraout_r1 == 0) {
      uVar5 = *param_2;
      bVar10 = false;
      uVar3 = 0;
      if (uVar5 != 0) {
        bVar11 = uVar5 != 1;
        if (bVar11) {
          uVar5 = param_2[1];
        }
        if ((bVar11 && uVar5 != 1) && (uVar3 = uVar5, uVar5 != 0)) {
          uVar3 = 1;
        }
      }
      bVar11 = true;
      if (uVar3 != 0) goto LAB_0035ef08;
    }
    else {
      bVar10 = false;
    }
  }
  do {
    local_3c = 0xffffffff;
    local_40 = 0xffffffff;
    iVar2 = *(int *)(iVar1 + 0x4c);
    local_38 = 0;
    local_44 = 0;
    local_48 = param_2[1];
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x1c);
    }
    local_34 = iVar2 - 8;
    uVar5 = (**(code **)(iVar1 + 0xc))();
    if (uVar5 != 0xffffffac) {
      if (uVar5 != 0) {
        return uVar5;
      }
      uVar5 = FUN_0035e968(param_1,&local_48,puVar8,4);
      if (uVar5 != 0xffffffac) {
        if (uVar5 != 0) {
          return uVar5;
        }
        local_50 = param_1;
        local_4c = &local_48;
        uVar5 = FUN_0035dbcc(param_1,param_5,0,0xffffffff,param_3,param_4,DAT_0035efe0,param_6,
                             param_7,param_6 * -0x10000 >> 0x10,DAT_0035efe4,&local_50);
        if (uVar5 != 0xffffffac) {
          if (uVar5 != 0) {
            return uVar5;
          }
          uVar5 = param_2[6];
          bVar12 = uVar5 != 0xffffffff;
          if (bVar12) {
            uVar5 = param_2[7];
          }
          if (bVar12 && uVar5 != 0xffffffff) {
            uVar5 = FUN_0035e13c(param_1,&local_48,
                                 DAT_0035efe0 + (uint)*(byte *)((int)param_2 + 0x17) * 0x100000 +
                                 0x20000008);
            if (uVar5 == 0xffffffac) goto LAB_0035ef08;
            if (uVar5 != 0) {
              return uVar5;
            }
          }
          local_54 = 0;
          local_58 = 0;
          uVar5 = 0;
          if (!bVar10) {
            local_54 = *(uint *)(param_1 + 0x38) ^ *(uint *)(param_1 + 0x44);
            local_58 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x40);
            uVar5 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x3c);
          }
          local_58 = local_58 ^ *(uint *)(param_1 + 0x4c);
          local_54 = local_54 ^ *(uint *)(param_1 + 0x50);
          puVar9 = (undefined4 *)0x7ff0000c;
          local_5c = (undefined4 ******)((uVar5 ^ *(uint *)(param_1 + 0x48)) & DAT_0035efe8);
          uVar5 = FUN_0035c958(param_1,param_2,0x7ff00000,0x7ff0000c,0,&local_30,0xc);
          if ((int)uVar5 < 0) {
            if (uVar5 != 0xfffffffe) {
              return uVar5;
            }
          }
          else {
            local_58 = local_58 ^ uStack_2c;
            local_5c = (undefined4 ******)((uint)local_5c ^ local_30);
            local_54 = local_54 ^ uStack_28;
            puVar9 = param_7;
          }
          if (((undefined4 *******)local_5c == (undefined4 *******)0x0 && local_58 == 0) &&
             (pppppppuVar6 = (undefined4 *******)local_5c, local_54 == 0)) {
LAB_0035eef4:
            uVar5 = FUN_0035e280(param_1,&local_48);
            if (uVar5 != 0xffffffac) {
              if (uVar5 != 0) {
                return uVar5;
              }
              if (bVar10 == false) {
                pppppppuVar6 = (undefined4 *******)(param_1 + 0x30);
                puVar9 = (undefined4 *)(param_1 + 0x3c);
              }
              param_2[3] = local_44;
              param_2[4] = local_40;
              *(short *)(param_2 + 5) = (short)param_7 - (short)param_6;
              uVar5 = *param_2;
              *param_2 = param_2[1];
              param_2[1] = uVar5;
              *(uint *)(param_1 + 0x4c) = 0;
              *(undefined4 *)(param_1 + 0x50) = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
              if (bVar10 != false) {
                return (uint)bVar10;
              }
              ppppppuVar4 = pppppppuVar6[1];
              ppppppuVar7 = pppppppuVar6[2];
              *puVar9 = *pppppppuVar6;
              puVar9[1] = ppppppuVar4;
              puVar9[2] = ppppppuVar7;
              return (uint)bVar10;
            }
          }
          else {
            if (local_34 < local_44 + 0x10) {
              return 0xffffffe4;
            }
            uVar5 = local_40 ^ DAT_0035efec;
            local_30 = uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
            uVar5 = FUN_0035e968(param_1,&local_48,&local_30,4);
            if (uVar5 == 0) {
              pppppppuVar6 = &local_5c;
              puVar9 = (undefined4 *)&PrefetchAbort;
              uVar5 = FUN_0035e968(param_1,&local_48);
              if (uVar5 == 0) {
                local_40 = DAT_0035efec;
                goto LAB_0035eef4;
              }
            }
            if (uVar5 != 0xffffffac) {
              return uVar5;
            }
          }
        }
      }
    }
LAB_0035ef08:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*param_2 < 2) {
      return 0xffffffe4;
    }
    if (param_2[1] < 2) {
      return 0xffffffe4;
    }
    uVar5 = FUN_0035a8d0(param_1);
    if (uVar5 != 0) {
      if (uVar5 != 0xffffffe4) {
        return uVar5;
      }
      if (!bVar11) {
        return 0xffffffe4;
      }
    }
    iVar1 = *(int *)(param_1 + 0x68);
    bVar10 = true;
    bVar11 = false;
  } while( true );
}


// FUN_0035eff0 @ 0035eff0

uint FUN_0035eff0(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,ushort *param_6,
                 code *param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int extraout_r1;
  code *pcVar12;
  uint uVar13;
  code *pcVar14;
  code *pcVar15;
  uint uVar16;
  uint unaff_r5;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint local_80;
  uint local_74;
  uint local_6c;
  uint local_68;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_2c [2];
  
  uVar10 = *param_3;
  uVar13 = *(uint *)(param_1 + 0x6c);
  if (uVar13 != 0) {
    if (uVar13 > uVar10) {
      unaff_r5 = param_3[1];
    }
    if (uVar13 <= uVar10 || uVar13 <= unaff_r5) {
      return 0xffffffac;
    }
  }
  uVar13 = 0;
  local_34 = 0;
  local_38 = 0;
  uVar10 = FUN_0035aa30(param_1,0,param_1,4,uVar10,0,&local_38,4);
  if (uVar10 != 0 && uVar10 != 0xffffffac) {
    return uVar10;
  }
  uVar10 = FUN_0035aa30(param_1,0,param_1,4,param_3[1],0,(uint)&local_38 | 4,4);
  if (uVar10 != 0xffffffac) {
    if (uVar10 != 0) {
      return uVar10;
    }
    if (0 < local_34 - local_38) {
      uVar13 = 1;
    }
  }
  *param_2 = param_3[uVar13];
  uVar10 = param_3[uVar13 ^ 1];
  param_2[2] = *(uint *)((uint)&local_38 | uVar13 << 2);
  param_2[1] = uVar10;
  param_2[3] = 0;
  local_74 = 0xffffffff;
  bVar2 = true;
  do {
    local_3c = 0xffffffff;
    local_40 = 0xffffffff;
    local_4c = FUN_0035ff40(0xffffffff,param_2 + 2,4);
    local_80 = 0;
    uVar16 = 0xffffffff;
    local_5c = 0;
    local_6c = 0;
    uVar10 = local_74;
    bVar3 = 0;
LAB_0035f144:
    do {
      uVar6 = uVar16;
      while( true ) {
        bVar1 = false;
        uVar16 = uVar6;
        if ((uVar6 & 0x3ff) == 0x3ff) {
          uVar16 = uVar6 + 1;
        }
        pcVar15 = *(code **)(*(int *)(param_1 + 0x68) + 0x1c);
        iVar11 = local_5c + (uVar16 & 0x3ff);
        local_5c = iVar11 + 4;
        uVar5 = FUN_0035aa30(param_1,0,param_1,pcVar15,*param_2,local_5c,&local_50,4);
        pcVar12 = pcVar15;
        if (uVar5 != 0) goto joined_r0x0035f668;
        local_4c = FUN_0035ff40(local_4c,&local_50,4);
        uVar16 = (local_50 << 0x18 | (local_50 & 0xff00) << 8 |
                 local_50 >> 8 & 0xff00 | local_50 >> 0x18) ^ uVar6;
        local_50 = uVar16;
        if (uVar16 == 0xffffffff || (int)(uVar16 + 1) < 0 != SCARRY4(uVar16,1)) {
          bVar1 = (uVar6 & 0x78000000) == 0x50000000;
          goto LAB_0035f614;
        }
        iVar11 = iVar11 + 8;
        uVar6 = uVar16;
        if ((uVar16 & 0x3ff) == 0x3ff) {
          uVar6 = uVar16 + 1;
        }
        uVar6 = uVar6 & 0x3ff;
        pcVar15 = *(code **)(*(int *)(param_1 + 0x68) + 0x1c);
        if (pcVar15 < (code *)(iVar11 + uVar6)) goto LAB_0035f614;
        if ((uVar16 & 0x78000000) != 0x50000000) break;
        uVar5 = FUN_0035aa30(param_1,0,param_1,pcVar15,*param_2,iVar11,local_2c,4);
        uVar6 = local_50;
        pcVar12 = pcVar15;
        if (uVar5 != 0) goto joined_r0x0035f668;
        if (local_4c != local_2c[0]) goto LAB_0035f614;
        uVar7 = FUN_0035ff40(*(undefined4 *)(param_1 + 0x2c),&local_4c,4);
        *(undefined4 *)(param_1 + 0x2c) = uVar7;
        *(short *)(param_2 + 5) = (short)local_6c;
        param_2[7] = local_3c;
        uVar6 = uVar16 | (uVar6 & 0x100000) << 0xb;
        param_2[4] = uVar6;
        *(char *)((int)param_2 + 0x17) = (char)local_80;
        param_2[6] = local_40;
        uVar16 = local_50;
        if ((local_50 & 0x3ff) == 0x3ff) {
          uVar16 = local_50 + 1;
        }
        param_2[3] = iVar11 + (uVar16 & 0x3ff);
        local_4c = -1;
        local_74 = uVar10;
      }
      if (uVar6 != 0) {
        uVar8 = *param_2;
        uVar17 = 0;
        do {
          uVar18 = uVar6 - uVar17;
          pcVar12 = pcVar15 + -uVar17;
          if (7 < uVar18) {
            uVar18 = 8;
          }
          uVar5 = FUN_0035aa30(param_1,0,param_1,pcVar12,uVar8,uVar17 + iVar11,local_2c,uVar18);
          if (uVar5 != 0) goto joined_r0x0035f668;
          local_4c = FUN_0035ff40(local_4c,local_2c,uVar18);
          uVar17 = uVar18 + uVar17;
        } while (uVar17 < uVar6);
      }
      uVar6 = local_50;
      uVar5 = local_50 >> 0x14 & 0x700;
      local_68 = uVar10;
      bVar4 = bVar3;
      if (uVar5 == 0x600) {
        pcVar12 = *(code **)(*(int *)(param_1 + 0x68) + 0x1c);
        uVar5 = FUN_0035aa30(param_1,0,param_1,pcVar12,*param_2,iVar11,&local_40,8);
        if (uVar5 == 0) {
          local_80 = (uVar6 & 0x100000) >> 0x14;
          goto LAB_0035f51c;
        }
        goto joined_r0x0035f668;
      }
      if (uVar5 == 0x400) {
        iVar19 = (local_50 >> 0x14) << 0x18;
        local_6c = local_6c + (iVar19 >> 0x18);
        if (local_50 == (uVar10 & 0xffc00 | 0x4ff00000)) {
          local_68 = uVar10 | 0x80000000;
        }
        else if (uVar10 == 0xffffffff) {
          local_68 = 0xffffffff;
        }
        else if ((local_50 >> 10 & 0x3ff) <= (uVar10 >> 10 & 0x3ff)) {
          local_68 = uVar10 + (iVar19 >> 0xe);
        }
      }
      else if (uVar5 == 0) {
        uVar10 = local_50 >> 10 & 0x3ff;
        if ((local_6c & 0xffff) <= uVar10) {
          local_6c = uVar10 + 1;
        }
      }
      else if ((local_50 >> 0x14 & 0x7ff) == 0x5ff) {
        bVar1 = false;
        pcVar15 = *(code **)(*(int *)(param_1 + 0x68) + 0x1c);
        iVar19 = FUN_0035aa30(param_1,0,param_1,pcVar15,*param_2,iVar11,&local_48,8);
        bVar4 = 1;
        if (iVar19 != -0x54) goto LAB_0035f51c;
        goto LAB_0035f614;
      }
LAB_0035f51c:
      uVar10 = local_68;
      bVar3 = bVar4;
    } while (((local_50 ^ param_5) & param_4) != 0);
    local_58 = *param_2;
    pcVar12 = param_7;
    local_54 = iVar11;
    uVar5 = (*param_7)(param_8,local_50,&local_58);
    if (-1 < (int)uVar5) {
      uVar10 = local_50;
      if (uVar5 != 0) {
        if (((local_50 ^ local_68) & DAT_0035f870) == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = local_68;
          if ((uVar5 == 2) && ((local_50 >> 10 & 0x3ff) <= (local_68 >> 10 & 0x3ff))) {
            uVar10 = local_50 | 0x80000000;
          }
        }
      }
      goto LAB_0035f144;
    }
joined_r0x0035f668:
    pcVar15 = pcVar12;
    bVar1 = false;
    if (uVar5 != 0xffffffac) {
      return uVar5;
    }
LAB_0035f614:
    uVar10 = param_2[3];
    if (uVar10 != 0) {
      *(undefined1 *)((int)param_2 + 0x16) = 0;
      if (!bVar1) goto LAB_0035f788;
      iVar11 = *(int *)(param_1 + 0x68);
      FUN_0036a1a4(uVar10,*(undefined4 *)(iVar11 + 0x18));
      if (!(bool)(extraout_r1 == 0 & bVar3)) goto LAB_0035f788;
      if (local_48 == 0) {
        iVar11 = -1;
        uVar10 = 0;
        goto LAB_0035f760;
      }
      iVar19 = *(int *)(iVar11 + 0x1c);
      uVar16 = 0;
      iVar11 = -1;
      uVar13 = *param_2;
      break;
    }
    uVar10 = *param_2;
    *param_2 = param_2[1];
    uVar16 = *(uint *)((uint)&local_38 | (uVar13 ^ 1) << 2);
    param_2[1] = uVar10;
    param_2[2] = uVar16;
    bVar1 = !bVar2;
    bVar2 = false;
    if (bVar1) {
      return 0xffffffac;
    }
  } while( true );
LAB_0035f6d0:
  uVar6 = local_48 - uVar16;
  pcVar15 = (code *)(iVar19 - uVar16);
  if (7 < uVar6) {
    uVar6 = 8;
  }
  uVar5 = FUN_0035aa30(param_1,0,param_1,pcVar15,uVar13,uVar16 + uVar10,local_2c,uVar6);
  if (uVar5 != 0) {
    uVar10 = 0xffffffac;
    if (uVar5 != 0xffffffac) goto LAB_0035f77c;
    goto LAB_0035f760;
  }
  iVar11 = FUN_0035ff40(iVar11,local_2c,uVar6);
  uVar16 = uVar6 + uVar16;
  if (local_48 <= uVar16) {
    uVar10 = 0;
LAB_0035f760:
    uVar5 = uVar10;
    *(bool *)((int)param_2 + 0x16) = iVar11 == local_44;
LAB_0035f77c:
    if (uVar5 == 0 || uVar5 == 0xffffffac) {
LAB_0035f788:
      if ((*(uint *)(param_1 + 0x3c) & 0x70000000) != 0) {
        pcVar12 = *(code **)(param_1 + 0x40);
        pcVar14 = (code *)*param_2;
        if (pcVar12 != pcVar14) {
          pcVar15 = *(code **)(param_1 + 0x44);
        }
        if ((pcVar12 == pcVar14 || pcVar15 == pcVar14) ||
           (pcVar15 == (code *)param_2[1] || pcVar12 == (code *)param_2[1])) {
          uVar13 = *(uint *)(param_1 + 0x3c) >> 10 & 0x3ff;
          uVar10 = local_74 >> 10 & 0x3ff;
          if (uVar13 == uVar10) {
            local_74 = local_74 | 0x80000000;
          }
          else if (local_74 == 0xffffffff) {
            local_74 = 0xffffffff;
          }
          else if (uVar13 < uVar10) {
            local_74 = local_74 - 0x400;
          }
        }
      }
      if (param_6 != (ushort *)0x0) {
        uVar9 = (ushort)param_2[5];
        uVar10 = local_74 >> 10 & 0x3ff;
        if (uVar10 < uVar9) {
          uVar9 = (ushort)uVar10;
        }
        *param_6 = uVar9;
      }
      uVar5 = local_74;
      if (local_74 == 0xffffffff || (int)(local_74 + 1) < 0 != SCARRY4(local_74,1)) {
        uVar10 = 0;
        if ((local_74 >> 10 & 0x3ff) < (uint)(ushort)param_2[5]) {
          uVar10 = 0xfffffffe;
        }
        return uVar10;
      }
    }
    return uVar5;
  }
  goto LAB_0035f6d0;
}


// FUN_0035f874 @ 0035f874

int FUN_0035f874(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = *param_1;
  iVar1 = FUN_0035aa30(iVar1,iVar1 + 0x10,iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x1c),
                       *param_3,param_3[1],&local_18,8);
  if (iVar1 == 0) {
    iVar1 = 0;
    if ((local_18 != param_1[1]) && (local_14 != param_1[2] && local_18 != param_1[2])) {
      local_14 = local_14 - param_1[1];
      if (local_14 != 0) {
        local_14 = 1;
      }
      return local_14;
    }
  }
  return iVar1;
}


// FUN_0035f8f8 @ 0035f8f8

int FUN_0035f8f8(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_2c [8];
  
  param_2 = param_2 & 0x3ff;
  uVar3 = param_1[2];
  uVar5 = param_2;
  if (uVar3 < param_2) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    uVar6 = *param_1;
    iVar1 = param_1[1];
    uVar8 = *param_3;
    iVar9 = param_3[1];
    uVar3 = 0;
    do {
      uVar4 = uVar5 - uVar3;
      uVar7 = uVar4;
      if (7 < uVar4) {
        uVar7 = 8;
      }
      iVar2 = FUN_0035aa30(uVar6,0,uVar6,uVar4,uVar8,uVar3 + iVar9,auStack_2c,uVar7);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00367760(auStack_2c,iVar1 + uVar3,uVar7);
      if (iVar2 != 0) {
        iVar1 = 2;
        if (iVar2 < 0) {
          iVar1 = 1;
        }
        return iVar1;
      }
      uVar3 = uVar7 + uVar3;
    } while (uVar3 < uVar5);
    uVar3 = param_1[2];
  }
  iVar1 = 0;
  if ((uVar3 != param_2) && (iVar1 = 2, uVar3 < param_2)) {
    iVar1 = 1;
  }
  return iVar1;
}


// FUN_0035f9dc @ 0035f9dc

void FUN_0035f9dc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_50;
  uint *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [32];
  
  if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
    iVar2 = FUN_0035eff0(param_1,auStack_30,param_1 + 0x20,0xffffffff,0xffffffff,0,0,0);
    if (iVar2 != 0) {
      return;
    }
    local_48 = 0x20001;
    local_4c = &local_48;
    local_50 = DAT_0035fb68;
    local_40 = *(undefined4 *)(param_1 + 0x6c);
    uStack_3c = *(undefined4 *)(param_1 + 0x70);
    uStack_38 = *(undefined4 *)(param_1 + 0x74);
    uStack_34 = *(undefined4 *)(param_1 + 0x78);
    local_44 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c);
    iVar2 = FUN_0035ad1c(param_1,auStack_30,&local_50,1);
    if (iVar2 < 0) {
      return;
    }
    if ((iVar2 != 0) && (iVar2 = FUN_0035b4a8(param_1,0), iVar2 != 0)) {
      return;
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffdff;
  }
  if ((*(byte *)(param_1 + 0x3f) & 0x70) == 0) {
LAB_0035fb54:
    FUN_0035b4a8(param_1,1);
    return;
  }
  iVar2 = FUN_0035eff0(param_1,auStack_30,param_1 + 0x40,0xffffffff,0xffffffff,0,0,0);
  uVar1 = DAT_0035fb6c;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    local_44 = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & uVar1;
    local_48 = *(uint *)(param_1 + 0x3c) & 0xffc00 | 0x4ff00000;
    iVar2 = FUN_0035ad1c(param_1,auStack_30,&local_48,1);
    if ((-1 < iVar2) && ((iVar2 == 0 || (iVar2 = FUN_0035b4a8(param_1,0), iVar2 == 0))))
    goto LAB_0035fb54;
  }
  return;
}


// FUN_0035fb70 @ 0035fb70

uint FUN_0035fb70(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int local_30;
  byte *local_2c;
  uint local_28;
  
  uVar1 = DAT_0035fdac;
  pbVar10 = (byte *)*param_3;
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = 0x3ff;
  }
  puVar7 = (undefined4 *)(param_2 + 0x18);
  *puVar7 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
  uVar9 = 0x2ffc00;
LAB_0035fbd0:
  do {
    while( true ) {
      iVar2 = FUN_003678dc(pbVar10,uVar1);
      pbVar11 = pbVar10 + iVar2;
      uVar3 = FUN_003677b4(pbVar11,uVar1);
      if (uVar3 != 2) break;
      if (*(short *)pbVar11 != 0x2e2e) goto LAB_0035fc08;
LAB_0035fd7c:
      pbVar10 = pbVar11 + uVar3;
    }
    uVar4 = uVar3;
    if (uVar3 == 1) {
      uVar4 = (uint)*pbVar11;
    }
    if (uVar3 == 1 && uVar4 == 0x2e) goto LAB_0035fd7c;
LAB_0035fc08:
    pbVar10 = pbVar11 + uVar3;
    iVar2 = 1;
    pbVar8 = pbVar10;
LAB_0035fc28:
    iVar5 = FUN_003678dc(pbVar8,uVar1);
    pbVar8 = pbVar8 + iVar5;
    iVar5 = FUN_003677b4(pbVar8,uVar1);
    if (iVar5 == 2) {
      if (*(short *)pbVar8 != 0x2e2e) goto LAB_0035fc20;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) break;
LAB_0035fc24:
      pbVar8 = pbVar8 + iVar5;
      goto LAB_0035fc28;
    }
    if (iVar5 != 0) {
LAB_0035fc20:
      iVar2 = iVar2 + 1;
      goto LAB_0035fc24;
    }
    if (*pbVar11 == 0) {
      return uVar9;
    }
    *param_3 = pbVar11;
    if ((uVar9 & 0x7ff00000) != 0x200000) {
      return 0xffffffec;
    }
    if (((uVar9 & 0xffc00) != 0xffc00) &&
       (uVar9 = FUN_0035c958(param_1,param_2,0x700ffc00,uVar9 & 0xffc00 | 0x20000008,0,puVar7,8),
       (int)uVar9 < 0)) {
      return uVar9;
    }
    while( true ) {
      iVar2 = FUN_00367790(pbVar11,0x2f);
      puVar6 = (undefined2 *)0x0;
      if (iVar2 == 0) {
        puVar6 = param_4;
      }
      local_30 = param_1;
      local_2c = pbVar11;
      local_28 = uVar3;
      uVar9 = FUN_0035eff0(param_1,param_2,puVar7,0x78000000,uVar3,puVar6,DAT_0035fdb0,&local_30);
      if ((int)uVar9 < 0) {
        return uVar9;
      }
      if (uVar9 != 0) break;
      if (*(char *)(param_2 + 0x17) == '\0') {
        return 0xfffffffe;
      }
    }
  } while( true );
  pbVar10 = pbVar8 + 2;
  goto LAB_0035fbd0;
}


// FUN_0035fdc8 @ 0035fdc8

int FUN_0035fdc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                code *param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_2c [2];
  
  if (param_5 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c) - 8;
  if (uVar3 <= param_5 - 1U) {
    iVar1 = FUN_00369d30(param_5 - 1U,uVar3);
    uVar2 = (iVar1 - 1U) - (DAT_0035ff30 & iVar1 - 1U >> 1);
    uVar2 = (uVar2 & DAT_0035ff34) + (DAT_0035ff34 & uVar2 >> 2);
    uVar2 = FUN_00369d30((param_5 -
                         ((uVar2 + (uVar2 >> 4) & DAT_0035ff38) * DAT_0035ff3c >> 0x16 & 0xfffffffc)
                         ) + -9,uVar3);
  }
  iVar1 = (*param_6)(param_7,param_4);
  while( true ) {
    if (iVar1 != 0) {
      return iVar1;
    }
    if (uVar2 == 0) {
      return 0;
    }
    uVar3 = uVar2 & 1;
    iVar1 = (2 - uVar3) * 4;
    iVar1 = FUN_0035aa30(param_1,param_2,param_3,iVar1,param_4,0,local_2c,iVar1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((uVar3 == 0) && (iVar1 = (*param_6)(param_7,local_2c[0]), iVar1 != 0)) break;
    uVar2 = uVar2 - (2 - uVar3);
    param_4 = local_2c[uVar3 ^ 1];
    iVar1 = (*param_6)(param_7,param_4);
  }
  return iVar1;
}


// FUN_0035ff40 @ 0035ff40

void FUN_0035ff40(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}


// FUN_0035ff90 @ 0035ff90

undefined4 FUN_0035ff90(void)

{
  undefined2 uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int *piVar13;
  undefined2 *puVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  char *pcVar23;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  char *local_1ac;
  undefined1 auStack_1a8 [64];
  undefined1 auStack_168 [160];
  undefined1 auStack_c8 [64];
  uint local_88 [25];
  
  local_1ac = (char *)FUN_00356134();
  iVar6 = FUN_00356140();
  piVar13 = DAT_00360f88;
  *DAT_00360f88 = iVar6;
  uVar7 = FUN_003561c4();
  iVar6 = DAT_00360f94;
  *DAT_00360f8c = uVar7;
  iVar17 = 0;
  *DAT_00360f90 = (uint)(((uVar7 | *piVar13 - 1U) & 3) == 0);
  do {
    FUN_003561d4(iVar17,*(undefined4 *)(iVar6 + iVar17 * 4));
    iVar17 = iVar17 + 1;
  } while (iVar17 != 0x40);
  uVar18 = 0;
  FUN_003561d4(0x40,0);
  uVar7 = DAT_00360f98;
  uVar21 = 0x1e;
  iVar6 = 0xd0;
  do {
    iVar17 = (uint)((ulonglong)uVar7 * (ulonglong)uVar18 >> 0x23) + 0x1c;
    FUN_003561d4(iVar6,uVar21 | iVar17 * 0x10000 | iVar17 * 0x100);
    uVar21 = uVar21 + 0xf;
    uVar18 = uVar18 + 0xe3;
    iVar6 = iVar6 + 1;
  } while (uVar21 != 0x10e);
  iVar6 = 0xe0;
  uVar18 = 0;
  iVar17 = 0;
  uVar21 = 0;
  do {
    FUN_003561d4(iVar6,(uint)((ulonglong)uVar7 * (ulonglong)uVar21 >> 0x23) + 0xf3 |
                       iVar17 + 0x9600U |
                       ((uint)((ulonglong)uVar7 * (ulonglong)uVar18 >> 0x20) & 0x7fff8) * 0x2000 +
                       0x210000);
    iVar6 = iVar6 + 1;
    uVar18 = uVar18 + 0xde;
    iVar17 = iVar17 + 0x700;
    uVar21 = uVar21 + 0xc;
  } while (iVar6 != 0xf0);
  iVar17 = 0x1e0;
  uVar7 = *DAT_00360f8c;
  iVar6 = *DAT_00360f88;
  do {
    FUN_003591f4(iVar6,0x356,0x40);
    iVar6 = iVar6 + uVar7;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  FUN_003561ec(0,0x1e0);
  FUN_00359150(auStack_c8,0x40);
  iVar6 = FUN_00367898(local_1ac,0x2f);
  pcVar16 = local_1ac;
  if (iVar6 != 0) {
    pcVar16 = (char *)(iVar6 + 1);
  }
  FUN_00368218(auStack_c8,0x40,DAT_00360f9c,pcVar16);
  puVar8 = (undefined1 *)FUN_00367898(auStack_c8,0x2e);
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  pcVar16 = (char *)FUN_00356128();
  uVar9 = DAT_00360fa0;
  if (*pcVar16 != '\0') {
    uVar9 = FUN_00356128();
  }
  FUN_00368218(auStack_168,0xa0,DAT_00360fa4,uVar9);
  FUN_0035a0e8(DAT_00360fa8,auStack_168);
  iVar6 = FUN_00366f6c(auStack_168);
  FUN_00368218(auStack_168 + iVar6,0xa0 - iVar6,DAT_00360fac,auStack_c8);
  uVar9 = DAT_00360fb4;
  puVar8 = DAT_00360fb8;
  if ((*local_1ac != '\0') &&
     (uVar7 = FUN_00358eac(local_1ac), uVar9 = DAT_00360fb4, puVar8 = DAT_00360fb8, 0 < (int)uVar7))
  {
    iVar17 = FUN_00366f6c(local_1ac);
    iVar6 = DAT_00360fb0;
    if ((iVar17 < 4) ||
       (((((local_1ac[iVar17 + -4] & 0xdfU) != 0xe || ((local_1ac[iVar17 + -3] & 0xdfU) != 0x5a)) ||
         ((local_1ac[iVar17 + -2] & 0xdfU) != 0x49)) || ((local_1ac[iVar17 + -1] & 0xdfU) != 0x50)))
       ) {
      uVar9 = DAT_00361030;
      puVar8 = DAT_00361034;
      if ((uVar7 < 0x100001) &&
         (uVar18 = FUN_00358d7c(local_1ac,0,DAT_00360fd8,uVar7), uVar9 = DAT_00360fb4,
         puVar8 = DAT_00360fb8, uVar18 == uVar7)) {
LAB_0036025c:
        iVar6 = FUN_003647c0(DAT_00360fd8,uVar7);
        if (iVar6 == 0) {
          iVar6 = FUN_003647a4();
          if (iVar6 != 0) {
            uVar9 = FUN_003647b4();
            FUN_00358d7c(auStack_168,0,uVar9,0x2000);
          }
          uVar9 = FUN_00364794();
          iVar6 = FUN_003647a4();
          puVar8 = DAT_00360ff0;
          if (iVar6 == 0) {
            puVar8 = DAT_00360fb8;
          }
          FUN_003681d4(DAT_00360ff4,auStack_c8,uVar9,uVar7 >> 10,puVar8);
          *DAT_00360ff8 = DAT_00360ffc;
          iVar6 = FUN_00356298();
          iVar17 = FUN_00356b90();
          uVar7 = FUN_00356ae8();
          puVar19 = DAT_00361000;
          iVar22 = 0;
          *DAT_00361000 = uVar7;
          bVar3 = iVar6 == 0;
          puVar11 = (undefined2 *)(DAT_00361024 + 2);
          local_1bc = iVar17;
          do {
            local_1b4 = 0;
            local_1b8 = 0;
            do {
              while( true ) {
                while( true ) {
                  uVar7 = FUN_00356ae8();
                  uVar18 = *puVar19;
                  *puVar19 = uVar7;
                  if ((uVar7 & ~uVar18 & 2) == 0) break;
                  if (bVar3) {
                    FUN_00356a50();
                  }
                  iVar6 = FUN_003647a4();
                  if (iVar6 != 0) {
                    uVar9 = FUN_003647b4();
                    FUN_00358e1c(auStack_168,uVar9,0x2000);
                  }
                  uVar7 = FUN_00356ae8();
                  pcVar16 = (char *)0x0;
                  *puVar19 = uVar7;
                  do {
                    iVar6 = 0x100;
                    uVar7 = *DAT_00360f8c;
                    iVar17 = *DAT_00360f88 + uVar7 * 0x70 + 0xf7;
                    do {
                      FUN_003591f4(iVar17,0x168,0xd0);
                      uVar9 = DAT_00361008;
                      iVar17 = iVar17 + uVar7;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                    iVar6 = FUN_0035855c(DAT_00361008,auStack_c8);
                    FUN_0036124c(uVar9,(0x356 - iVar6) / 2,0xa0,auStack_c8,0xd0,0xf);
                    pcVar23 = (char *)0x0;
                    iVar6 = 0xeb;
                    do {
                      uVar9 = 0xd0;
                      if (pcVar16 == pcVar23) {
                        uVar9 = 0xe0;
                        uVar7 = *DAT_00360f8c;
                        iVar17 = *DAT_00360f88 + 0xf7;
                        FUN_003591f4(uVar7 * (iVar6 + -0x2f) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x2e) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x2d) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x2c) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x2b) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x2a) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x29) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x28) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x27) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x26) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x25) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x24) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x23) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x22) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x21) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x20) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x1f) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x1e) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x1d) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x1c) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x1b) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x1a) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x19) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x18) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x17) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x16) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x15) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x14) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x13) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x12) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x11) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0x10) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0xf) + iVar17,0x168,0xe0);
                        iVar22 = iVar6 + -0xe;
                        FUN_003591f4(uVar7 * iVar22 + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0xd) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0xc) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -0xb) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -10) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -9) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -8) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -7) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -6) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -5) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -4) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -3) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -2) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * (iVar6 + -1) + iVar17,0x168,0xe0);
                        FUN_003591f4(uVar7 * iVar6 + iVar17,0x168,0xe0);
                      }
                      else {
                        iVar22 = (int)pcVar23 * 0x34 + 0xdd;
                      }
                      FUN_0036124c(DAT_00361008,0x113,iVar22,
                                   *(undefined4 *)(DAT_0036100c + (int)pcVar23 * 4),uVar9,0xf);
                      iVar6 = iVar6 + 0x34;
                      pcVar23 = pcVar23 + 1;
                    } while (iVar6 != 0x187);
                    FUN_003561ec(0,0x1e0);
                    FUN_0035655c(0x10);
                    uVar18 = FUN_00356ae8();
                    uVar7 = DAT_00361010;
                    puVar19 = DAT_00361000;
                    uVar21 = *DAT_00361000;
                    uVar2 = (ulonglong)DAT_00361010;
                    *DAT_00361000 = uVar18;
                    uVar18 = uVar18 & ~uVar21;
                    if ((uVar18 & 0x200) != 0) {
                      pcVar16 = pcVar16 + 2 + (uint)(uVar2 * ZEXT48(pcVar16 + 2) >> 0x21) * -3;
                    }
                    if ((uVar18 & 0x100) != 0) {
                      pcVar16 = pcVar16 + 1 +
                                (uint)((ulonglong)uVar7 * ZEXT48(pcVar16 + 1) >> 0x21) * -3;
                    }
                    if ((uVar18 & 0x4002) != 0) {
                      local_1ac = (char *)0x0;
                    }
                    if ((uVar18 & 0x8000) != 0) {
                      local_1ac = pcVar16;
                    }
                  } while ((uVar18 & 0xc002) == 0);
                  if (local_1ac == (char *)0x1) {
                    FUN_00364930();
                  }
                  else if (local_1ac == (char *)0x2) {
                    if (bVar3) {
                      FUN_00356a50();
                    }
                    iVar6 = FUN_003647a4();
                    if (iVar6 != 0) {
                      uVar9 = FUN_003647b4();
                      FUN_00358e1c(auStack_168,uVar9,0x2000);
                    }
                    goto LAB_00360cec;
                  }
                  iVar6 = FUN_00356298();
                  iVar17 = FUN_00356b90();
                  uVar7 = FUN_00356ae8();
                  *puVar19 = uVar7;
                  iVar22 = 0;
                  bVar3 = iVar6 == 0;
                }
                local_1ac = (char *)FUN_00356ae8();
                uVar18 = (uint)local_1ac & 0xa000;
                if (uVar18 != 0) {
                  uVar18 = 1;
                }
                if (((uint)local_1ac & 0x5000) != 0) {
                  uVar18 = uVar18 | 2;
                }
                uVar18 = uVar18 | (uint)local_1ac & 0xc;
                uVar21 = uVar18 | 0x80;
                iVar6 = FUN_00356ba0(0,0);
                if (600 < iVar6) {
                  uVar18 = uVar21;
                }
                if (((uint)local_1ac & 0x400) != 0) {
                  uVar18 = uVar21;
                }
                uVar21 = uVar18;
                if (iVar6 < DAT_00361004) {
                  uVar21 = uVar18 | 0x40;
                }
                if (((uint)local_1ac & 0x800) != 0) {
                  uVar21 = uVar18 | 0x40;
                }
                iVar6 = FUN_00356ba0(0,1);
                uVar18 = uVar21;
                if (600 < iVar6) {
                  uVar18 = uVar21 | 0x10;
                }
                if (((uint)local_1ac & 0x200) != 0) {
                  uVar18 = uVar21 | 0x10;
                }
                uVar21 = uVar18;
                if (iVar6 < DAT_00361004) {
                  uVar21 = uVar18 | 0x20;
                }
                if (((uint)local_1ac & 0x100) != 0) {
                  uVar21 = uVar18 | 0x20;
                }
                if ((uVar21 & 0xc0) == 0xc0) {
                  uVar21 = uVar21 & 0xffffff3f;
                }
                if ((uVar21 & 0x30) == 0x30) {
                  uVar21 = uVar21 & 0xffffffcf;
                }
                FUN_00364764(uVar21);
                puVar5 = DAT_00361014;
                if ((uVar7 & 0x40) == 0) break;
                *DAT_00361014 = 0;
                FUN_003636bc();
                FUN_003636bc();
                *puVar5 = 1;
                FUN_003636bc();
                FUN_0036140c(DAT_00361018);
                FUN_003561ec(0,0x1e0);
                FUN_0035655c(1);
                local_1b8 = local_1b8 + 1;
                local_1b4 = local_1b4 + 3;
                iVar17 = FUN_00356b90();
              }
              uVar7 = 1;
              iVar6 = 0;
              if ((bVar3) && (iVar22 < 2)) {
                iVar6 = iVar22 + 1;
                iVar22 = FUN_00356754();
                if (299 < iVar22) {
                  iVar6 = 0;
                }
                uVar7 = (uint)(299 < iVar22);
              }
              iVar22 = iVar6;
              puVar5 = DAT_00361014;
              *DAT_00361014 = uVar7;
              FUN_003636bc();
              if (*puVar5 != 0) {
                FUN_003561ec(0,0x1e0);
                local_1b8 = local_1b8 + 1;
              }
              iVar6 = FUN_0036140c(DAT_00361018);
              if (bVar3) {
                puVar12 = puVar11;
                puVar14 = DAT_00361018;
                iVar17 = iVar6;
                if (0 < iVar6) {
                  do {
                    uVar1 = *puVar14;
                    iVar17 = iVar17 + -1;
                    *puVar12 = uVar1;
                    puVar12[-1] = uVar1;
                    puVar12 = puVar12 + 2;
                    puVar14 = puVar14 + 1;
                  } while (iVar17 != 0);
                }
                iVar17 = FUN_00356858();
                if (iVar6 <= iVar17) {
                  FUN_0035688c(DAT_00361024,iVar6);
                }
                FUN_0035655c(1);
                iVar6 = FUN_00356754();
                while (0x708 < iVar6) {
                  FUN_0035655c(1);
                  iVar6 = FUN_00356754();
                }
LAB_00360bb0:
                iVar17 = FUN_00356b90();
              }
              else {
                iVar17 = iVar17 + 0x40ff;
                iVar6 = FUN_00356b90();
                uVar7 = iVar17 - iVar6;
                if ((int)uVar7 < 0x7d1) {
                  FUN_0035655c(1);
                  if ((int)uVar7 <= DAT_0036101c) goto LAB_00360bb0;
                }
                else {
                  FUN_0035655c((uint)((ulonglong)DAT_00361020 * (ulonglong)uVar7 >> 0x26));
                }
              }
              iVar6 = FUN_00356b90();
              local_1b4 = local_1b4 + 1;
            } while ((uint)(iVar6 - local_1bc) < DAT_00361028);
            iVar6 = FUN_00356b90();
            uVar9 = FUN_00369d30(local_1b4 * 1000000,iVar6 - local_1bc);
            FUN_003681d4(DAT_0036102c,uVar9,local_1b8);
            local_1bc = FUN_00356b90();
          } while( true );
        }
        uVar9 = DAT_00360fe8;
        if (iVar6 == -2) {
          uVar9 = DAT_00360fe4;
        }
        uVar10 = FUN_00364794();
        FUN_00368218(auStack_1a8,0x40,uVar9,uVar10);
        uVar9 = DAT_00360fec;
        puVar8 = auStack_1a8;
      }
    }
    else {
      uVar9 = DAT_00360fdc;
      puVar8 = DAT_00360fe0;
      if ((uVar7 < 0x40001) &&
         (uVar18 = FUN_00358d7c(local_1ac,0,DAT_00360fb0,uVar7), puVar4 = DAT_00360fc0,
         uVar9 = DAT_00360fb4, puVar8 = DAT_00360fb8, uVar18 == uVar7)) {
        uVar18 = 0x10015;
        if (0x10015 < (int)uVar7) {
          uVar18 = uVar7;
        }
        puVar8 = puVar4;
        uVar21 = uVar7;
        if ((int)(uVar18 - 0x10015) <= (int)(uVar7 - 0x16)) {
          do {
            iVar17 = iVar6 + uVar21;
            if (*(int *)(iVar17 + -0x16) == DAT_00360fc4) {
              uVar18 = (uint)*(ushort *)(iVar17 + -0xc);
              puVar8 = DAT_00360fc8;
              if (uVar18 != 0) {
                iVar17 = *(int *)(iVar17 + -6);
                goto LAB_00360d88;
              }
              break;
            }
            iVar17 = uVar21 - 0x16;
            uVar21 = uVar21 - 1;
          } while ((int)(uVar18 - 0x10015) < iVar17);
        }
      }
    }
  }
  goto LAB_00360ce8;
  while( true ) {
    uVar18 = uVar18 - 1;
    iVar17 = *(ushort *)((int)piVar13 + 0x1e) + uVar21 + (uint)*(ushort *)(piVar13 + 8);
    puVar8 = DAT_00360fc8;
    if (uVar18 == 0) break;
LAB_00360d88:
    puVar8 = puVar4;
    if ((uVar7 < iVar17 + 0x2eU) || (piVar13 = (int *)(iVar6 + iVar17), *piVar13 != DAT_00360fcc))
    break;
    uVar20 = (uint)*(ushort *)(piVar13 + 7);
    uVar21 = uVar20 + iVar17 + 0x2eU;
    if (uVar7 < uVar21) break;
    if ((((3 < uVar20) && ((*(byte *)((int)piVar13 + uVar20 + 0x2a) & 0xdf) == 0xe)) &&
        ((*(byte *)((int)piVar13 + uVar20 + 0x2b) & 0xdf) == 0x4e)) &&
       (((*(byte *)((int)piVar13 + uVar20 + 0x2c) & 0xdf) == 0x45 &&
        ((*(byte *)((int)piVar13 + uVar20 + 0x2d) & 0xdf) == 0x53)))) {
      uVar18 = *(int *)((int)piVar13 + 0x2a) + 0x1e;
      if ((uVar18 <= uVar7) &&
         (piVar15 = (int *)(iVar6 + *(int *)((int)piVar13 + 0x2a)), *piVar15 == DAT_00360fd0)) {
        uVar21 = piVar13[5];
        iVar17 = *(ushort *)((int)piVar15 + 0x1a) + uVar18 + (uint)*(ushort *)(piVar15 + 7);
        if ((iVar17 + uVar21 <= uVar7) &&
           (uVar7 = piVar13[6], puVar8 = DAT_00360fd4, uVar7 < 0x100001)) {
          if (*(short *)((int)piVar13 + 10) == 0 && uVar21 == uVar7) {
            FUN_00359188(DAT_00360fd8,iVar6 + iVar17,uVar21);
            uVar7 = uVar21;
            goto LAB_0036025c;
          }
          local_88[0] = 0x100000;
          puVar8 = puVar4;
          if (*(short *)((int)piVar13 + 10) == 8) {
            uVar21 = FUN_00365fa8(DAT_00360fd8,local_88,iVar6 + iVar17,uVar21);
            uVar18 = uVar21;
            if (uVar21 == 0) {
              uVar18 = local_88[0];
            }
            uVar9 = DAT_00360fb4;
            if (uVar21 == 0 && uVar18 == uVar7) goto LAB_0036025c;
          }
        }
      }
      break;
    }
  }
LAB_00360ce8:
  FUN_00361038(uVar9,puVar8);
LAB_00360cec:
  pcVar16 = (char *)FUN_00356128();
  uVar9 = DAT_00360fa0;
  if (*pcVar16 != '\0') {
    uVar9 = FUN_00356128();
  }
  FUN_00368218(local_88,0x60,DAT_00360fbc,uVar9);
  FUN_0035604c(local_88,0);
  return 0;
}


// FUN_00361038 @ 00361038

void FUN_00361038(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0x1e0;
  iVar6 = *DAT_00361188;
  iVar8 = *DAT_0036118c;
  do {
    FUN_003591f4(iVar8,0x356,0x40);
    uVar1 = DAT_00361190;
    iVar8 = iVar8 + iVar6;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar6 = FUN_0035855c(DAT_00361190,param_1);
  FUN_0036124c(uVar1,(0x356 - iVar6) / 2,0xe8,param_1,0xd0,0xf);
  uVar1 = DAT_00361194;
  if (*param_2 != '\0') {
    iVar6 = FUN_0035855c(DAT_00361194,param_2);
    FUN_0036124c(uVar1,(0x356 - iVar6) / 2,0x10c,param_2,0xd0,9);
  }
  uVar2 = DAT_00361198;
  uVar1 = DAT_00361194;
  iVar6 = FUN_0035855c(DAT_00361194,DAT_00361198);
  FUN_0036124c(uVar1,0x336 - iVar6,0x1d0,uVar2,0xd0,9);
  FUN_003561ec(0,0x1e0);
  uVar4 = FUN_00356ae8();
  puVar3 = DAT_0036119c;
  *DAT_0036119c = uVar4;
  do {
    FUN_0035655c(0x10);
    uVar4 = FUN_00356ae8();
    uVar5 = *puVar3;
    *puVar3 = uVar4;
  } while ((uVar4 & ~uVar5 & 0xc002) == 0);
  return;
}


// FUN_003611a0 @ 003611a0

void FUN_003611a0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar8 = *DAT_00361240;
  iVar2 = *DAT_00361244 + param_1 * iVar8 * 2;
  iVar9 = iVar2 + 0xab;
  if (*DAT_00361248 == 0) {
    iVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(param_2 + iVar6);
      iVar7 = iVar2 + iVar6 * 2;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(iVar7 + 0xac) = uVar1;
      *(undefined1 *)(iVar7 + 0xab) = uVar1;
    } while (iVar6 != 0x100);
  }
  else {
    uVar3 = 0;
    do {
      bVar10 = uVar3 < 0xfe;
      uVar4 = (uint)*(byte *)(param_2 + uVar3);
      uVar5 = (uint)((byte *)(param_2 + uVar3))[1];
      *(uint *)(iVar9 + uVar3 * 2) = uVar4 << 8 | uVar5 << 0x10 | uVar5 << 0x18 | uVar4;
      uVar3 = uVar3 + 2;
    } while (bVar10);
  }
  FUN_00359188(iVar9 + iVar8,iVar9,0x200);
  return;
}


// FUN_0036124c @ 0036124c

void FUN_0036124c(int param_1,int param_2,int param_3,byte *param_4,char param_5,int param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int local_38;
  
  uVar3 = (uint)*param_4;
  if (uVar3 != 0) {
    local_38 = param_2 << 2;
    iVar7 = *DAT_003613fc;
    iVar8 = *DAT_00361400;
    do {
      if (uVar3 - 0x7f < 0xffffffa1) {
        uVar3 = 0x3f;
      }
      iVar15 = *(int *)(param_1 + 4) + uVar3 * 8;
      uVar3 = *(uint *)(iVar15 + -0x100);
      if (0x3ffffff < uVar3) {
        iVar6 = *(char *)(iVar15 + -0xfb) + param_3;
        iVar4 = *(int *)(param_1 + 8);
        uVar9 = uVar3 & DAT_00361404;
        uVar1 = uVar3 >> 0x14;
        iVar5 = ((int)(local_38 + 2 + ((uint)(local_38 + 2 >> 0x1f) >> 0x1e)) >> 2) +
                (int)*(char *)(iVar15 + -0xfc);
        iVar11 = iVar8 + iVar7 * iVar6 + iVar5;
        uVar10 = 0;
        do {
          if ((iVar6 + uVar10 >> 5 < 0xf) && ((uVar3 & 0x3f00000) != 0)) {
            uVar12 = 0;
            do {
              bVar2 = *(byte *)(uVar10 * ((uVar1 & 0x3f) + 1 >> 1) + iVar4 + uVar9 + (uVar12 >> 1));
              uVar13 = bVar2 & 0xf;
              if ((uVar12 & 1) == 0) {
                uVar13 = (uint)(bVar2 >> 4);
              }
              if (((uVar13 != 0) && (iVar14 = iVar5 + uVar12, -1 < iVar14)) && (iVar14 < 0x356)) {
                *(char *)(iVar11 + uVar12) =
                     param_5 + (char)(uint)((ulonglong)DAT_00361408 * (ulonglong)(uVar13 * param_6)
                                           >> 0x23);
                uVar3 = *(uint *)(iVar15 + -0x100);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < (uVar3 >> 0x14 & 0x3f));
          }
          uVar10 = uVar10 + 1;
          iVar11 = iVar11 + iVar7;
        } while (uVar10 < uVar3 >> 0x1a);
      }
      local_38 = local_38 + (uint)*(ushort *)(iVar15 + -0xfa);
      param_4 = param_4 + 1;
      uVar3 = (uint)*param_4;
    } while (uVar3 != 0);
  }
  return;
}


// FUN_0036140c @ 0036140c

int FUN_0036140c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00361438;
  iVar2 = *DAT_00361438;
  FUN_00359188(param_1,DAT_0036143c,iVar2 << 1);
  *piVar1 = 0;
  return iVar2;
}


// FUN_00361440 @ 00361440

uint FUN_00361440(uint param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  puVar4 = DAT_003617a8;
  if (param_1 >> 0xd == 0) {
    param_1 = param_1 & 0x7ff;
    iVar5 = DAT_003617d4;
LAB_00361458:
    return (uint)*(byte *)(iVar5 + param_1);
  }
  iVar5 = (int)(short)param_1;
  if (iVar5 == -1 || iVar5 + 1 < 0 != SCARRY4(iVar5,1)) {
    return (uint)*(byte *)(*(int *)(DAT_003617d0 + (param_1 >> 0xb & 0xc)) + (param_1 & 0x1fff));
  }
  if (param_1 >> 0xe != 0) {
    if (param_1 == 0x4017) {
      return 0x40;
    }
    if (param_1 == 0x4016) {
      uVar9 = *DAT_0036178c;
      uVar6 = *DAT_00361788;
      bVar13 = uVar9 == 0;
      if (bVar13) {
        uVar9 = uVar6 >> 1 | 0x80;
      }
      if (bVar13) {
        *DAT_00361788 = uVar9;
      }
      return uVar6 & 1 | 0x40;
    }
    if (param_1 == 0x4015) {
      cVar2 = *DAT_00361790;
      *DAT_00361790 = '\0';
      uVar9 = (uint)*(byte *)(DAT_00361794 + 6);
      uVar6 = (uint)*(byte *)(DAT_00361794 + 0x1e);
      if (uVar6 != 0) {
        uVar6 = 1;
      }
      if (uVar9 != 0) {
        uVar9 = 1;
      }
      uVar12 = (uint)*(byte *)(DAT_00361798 + 5);
      if (uVar12 != 0) {
        uVar12 = 1;
      }
      uVar7 = (uint)*(byte *)(DAT_0036179c + 5);
      if (uVar7 != 0) {
        uVar7 = 1;
      }
      uVar11 = (uint)*(ushort *)(DAT_003617a0 + 0x16);
      if (uVar11 != 0) {
        uVar11 = 1;
      }
      uVar6 = uVar9 | uVar6 << 1 | uVar12 << 2 | uVar7 << 3 | uVar11 << 4;
      if (cVar2 != '\0') {
        uVar6 = uVar6 | 0x40;
      }
      return (uVar6 | (uint)*(byte *)(DAT_003617a0 + 9) << 7) & 0xff;
    }
    if (param_1 < 0x6000) {
      return 0;
    }
    param_1 = param_1 & 0x1fff;
    iVar5 = DAT_003617a4;
    goto LAB_00361458;
  }
  param_1 = param_1 & 7;
  if (param_1 != 7) {
    if (param_1 != 4) {
      if (param_1 != 2) {
        return 0;
      }
      *DAT_003617c8 = 0;
      bVar1 = *DAT_003617cc;
      *DAT_003617cc = bVar1 & 0x7f;
      return (uint)bVar1;
    }
    param_1 = (uint)*DAT_003617c0;
    iVar5 = DAT_003617c4;
    goto LAB_00361458;
  }
  uVar3 = *DAT_003617a8;
  uVar6 = (uint)uVar3;
  if ((uVar6 & 0x3f00) == 0x3f00) {
    if ((uVar3 & 0x2000) == 0) {
      pbVar8 = (byte *)(*(int *)(DAT_003617b8 + ((uVar6 & 0x3fff) >> 8 & 0x3c)) + (uVar6 & 0x3ff));
    }
    else {
      if ((uVar6 & 0x3fff) >> 8 < 0x3f) {
        uVar9 = uVar6 & 0x3ff;
        iVar5 = *(int *)(DAT_003617b4 + 0xc);
      }
      else {
        uVar9 = 0x1f;
        if ((uVar3 & 3) == 0) {
          uVar9 = 0xc;
        }
        uVar9 = uVar9 & uVar6;
        iVar5 = DAT_003617b0;
      }
      pbVar8 = (byte *)(iVar5 + uVar9);
    }
    uVar9 = (uint)*pbVar8;
    uVar12 = uVar6 + 0x3000 & 0x2fff;
    if (uVar12 >> 0xd != 0) {
      uVar12 = uVar6 + 0x3000 & 0x3ff;
      iVar5 = *(int *)(DAT_003617b4 + 0xc);
LAB_00361750:
      pbVar8 = (byte *)(iVar5 + uVar12);
      goto LAB_00361754;
    }
LAB_00361718:
    uVar6 = uVar12 >> 8 & 0x3c;
    iVar5 = DAT_003617b8;
  }
  else {
    uVar12 = uVar6 & 0x3fff;
    uVar9 = (uint)*DAT_003617ac;
    if ((uVar3 & 0x2000) == 0) goto LAB_00361718;
    if (0x3e < uVar12 >> 8) {
      uVar12 = 0x1f;
      if ((uVar3 & 3) == 0) {
        uVar12 = 0xc;
      }
      uVar12 = uVar12 & uVar6;
      iVar5 = DAT_003617b0;
      goto LAB_00361750;
    }
    uVar6 = uVar12 >> 8 & 0xc;
    iVar5 = DAT_003617b4;
  }
  pbVar8 = (byte *)(*(int *)(iVar5 + uVar6) + (uVar12 & 0x3ff));
LAB_00361754:
  *DAT_003617ac = *pbVar8;
  sVar10 = 0x20;
  if ((*DAT_003617bc & 4) == 0) {
    sVar10 = 1;
  }
  *puVar4 = sVar10 + uVar3;
  return uVar9;
}


// FUN_003617d8 @ 003617d8

/* WARNING: Control flow encountered bad instruction data */

uint FUN_003617d8(void)

{
  short sVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar12 = DAT_00362824;
  pbVar13 = DAT_00362800;
  if (*DAT_0036277c == '\x01') {
    *DAT_0036277c = '\0';
    cVar6 = *DAT_003627fc;
    *DAT_003627fc = '\x01';
    uVar15 = (uint)*DAT_00362800;
    *DAT_00362800 = *DAT_00362800 - 3;
    iVar12 = DAT_00362824;
    psVar9 = DAT_00362820;
    sVar1 = *DAT_00362820;
    *(char *)(DAT_00362824 + uVar15 + 0x100) = (char)((ushort)sVar1 >> 8);
    pcVar2 = DAT_00362828;
    *(char *)(iVar12 + (uVar15 - 1 & 0xff) + 0x100) = (char)sVar1;
    *(byte *)(iVar12 + (uVar15 - 2 & 0xff) + 0x100) =
         *DAT_00362858 | *pcVar2 << 1 | cVar6 << 2 | *DAT_0036286c << 3 | *DAT_00362870 << 6 |
         *DAT_00362880 << 7 | 0x20;
    uVar15 = 0xfa;
  }
  else {
    if ((*DAT_003627fc != '\0') ||
       (*(char *)(DAT_003629ec + 9) == '\0' && ((*DAT_003629bc | *DAT_003629b8) & 1) == 0)) {
      sVar1 = *DAT_00362820;
      *DAT_00362820 = sVar1 + 1;
      uVar10 = FUN_00361440(sVar1);
      uVar16 = uVar10 >> 2 & 7;
      uVar21 = uVar10 & 0xff;
      uVar18 = uVar10 & 3;
      uVar15 = uVar21 >> 5;
      uVar19 = (uint)*(byte *)(DAT_003628c0 + uVar21);
      if ((uVar18 | 2) != 3) {
        uVar11 = 0;
        if (uVar18 != 1) goto LAB_00361d38;
LAB_00361aa8:
        switch(uVar15) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          uVar10 = FUN_00361440(uVar11 & 0xffff);
          pbVar4 = DAT_00362c94;
          pbVar13 = DAT_00362c88;
          uVar18 = (uint)*DAT_00362ca0;
          uVar16 = uVar18 + (~uVar10 & 0xff) + (uint)*DAT_00362c88;
          *DAT_00362ca0 = (byte)uVar16;
          *pbVar13 = 0xff < uVar16;
          puVar3 = DAT_00362c90;
          uVar15 = uVar16 & 0xff;
          *pbVar4 = (byte)(uVar15 >> 7);
          *puVar3 = (char)(((uVar16 ^ uVar18) & ~(uVar18 ^ ~uVar10)) >> 7);
        }
LAB_0036234c:
        bVar5 = uVar15 == 0;
        pbVar13 = DAT_00362c84;
        goto LAB_00362354;
      }
      uVar20 = (uint)((uVar18 ^ 1) == 0 && (uVar15 ^ 4) == 0);
      if (((((uVar18 ^ 1) != 0 || (uVar15 ^ 4) != 0) && (uVar18 == 3)) &&
          (uVar20 = 1, 0x5f < (uVar10 + 0x40 & 0xff))) && (uVar20 = 0, uVar15 - 1 < 4)) {
        uVar20 = 1;
      }
      switch(uVar16) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar11 = FUN_00361440(sVar1 + 1);
      iVar12 = FUN_00361440(sVar1 + 2);
      *DAT_00362820 = *DAT_00362820 + 2;
      pbVar13 = DAT_0036297c;
      if (uVar18 == 3 && uVar15 == 5) {
        pbVar13 = DAT_00362b1c;
      }
      uVar11 = (uVar11 | iVar12 << 8) + (uint)*pbVar13;
      uVar19 = ((uint)(0xff < ((uVar11 ^ iVar12 << 8) & 0xffff)) & ~uVar20) + uVar19;
      if (uVar18 == 1) goto LAB_00361aa8;
LAB_00361d38:
      pbVar4 = DAT_00362ca0;
      pbVar13 = DAT_00362c84;
      psVar9 = DAT_00362c80;
      if (uVar18 == 0) {
        switch(uVar16) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        switch(uVar15) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          *DAT_00362c8c = 1;
        }
        goto LAB_00362358;
      }
      if (uVar18 != 2) {
        if (uVar16 == 2) {
          if (uVar15 != 7) goto LAB_00362358;
          uVar15 = FUN_00361440(uVar11 & 0xffff);
          uVar15 = uVar15 ^ 0xff;
        }
        else {
          switch(uVar15) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            cVar6 = FUN_00361440(uVar11 & 0xffff);
            FUN_00362e58(uVar11 & 0xffff,cVar6 + '\x01');
            uVar15 = (uint)(byte)(0xfe - cVar6);
          }
        }
        FUN_00362dd0(uVar15);
        goto LAB_00362358;
      }
      iVar12 = (int)(char)uVar10;
      if ((iVar12 == -1 || iVar12 + 1 < 0 != SCARRY4(iVar12,1)) && (uVar16 == 2)) {
        if (uVar15 == 6) {
          bVar5 = *DAT_00362c9c - 1;
          *DAT_00362c9c = bVar5;
        }
        else {
          pbVar13 = DAT_00362ca0;
          if (uVar15 == 5) goto LAB_00362134;
          if (uVar15 != 4) goto LAB_00362358;
          bVar5 = *DAT_00362c9c;
LAB_00362338:
          *pbVar13 = bVar5;
        }
        uVar15 = (uint)bVar5;
        *DAT_00362c94 = bVar5 >> 7;
        goto LAB_0036234c;
      }
      if ((uVar16 | 2) == 6) {
        if (uVar15 != 4 || uVar16 != 6) {
          pbVar13 = DAT_00362c78;
          if (uVar15 != 5 || uVar16 != 6) goto LAB_00362358;
LAB_00362134:
          bVar5 = *pbVar13;
          pbVar13 = DAT_00362c9c;
          goto LAB_00362338;
        }
        bVar5 = *DAT_00362c9c;
        pbVar13 = DAT_00362c78;
      }
      else {
        if (uVar16 == 2) {
          bVar5 = *DAT_00362ca0;
          uVar10 = (uint)bVar5;
          if (uVar21 < 0x20) {
            *DAT_00362c88 = bVar5 >> 7;
            uVar10 = uVar10 << 1;
            bVar5 = bVar5 << 1;
LAB_00362a94:
            bVar14 = (byte)((uVar10 & 0xff) >> 7);
            bVar17 = (uVar10 & 0xff) == 0;
          }
          else {
            if (uVar15 != 2) {
              if (uVar15 == 1) {
                bVar14 = *DAT_00362c88;
                *DAT_00362c88 = bVar5 >> 7;
                uVar10 = (uint)bVar14 | uVar10 << 1;
              }
              else {
                bVar14 = *DAT_00362c88;
                *DAT_00362c88 = bVar5 & 1;
                uVar10 = (uint)bVar14 << 7 | (uint)(bVar5 >> 1);
              }
              bVar5 = (byte)uVar10;
              pbVar13 = DAT_00362c84;
              goto LAB_00362a94;
            }
            bVar14 = 0;
            *DAT_00362c84 = uVar10 < 2;
            bVar17 = (bool)(bVar5 & 1);
            bVar5 = bVar5 >> 1;
            pbVar13 = DAT_00362c88;
          }
          *pbVar13 = bVar17;
          *pbVar4 = bVar5;
          *DAT_00362c94 = bVar14;
          goto LAB_00362358;
        }
        switch(uVar16) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar1 = *DAT_00362c80;
        uVar7 = FUN_00362da0(sVar1);
        pbVar13 = DAT_00362c9c;
        *psVar9 = sVar1 + 2;
        if (uVar15 == 5) {
          pbVar13 = DAT_00362c98;
        }
        uVar8 = uVar7 + *pbVar13;
        uVar19 = uVar19 + (uVar15 == 5 && 0xff < (uVar8 ^ uVar7));
        switch(uVar15) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar16 == 0) goto LAB_00362358;
        iVar12 = FUN_00361440(uVar8);
        uVar15 = iVar12 + 1U & 0xff;
        FUN_00362e58(uVar8,uVar15);
        *DAT_00362c94 = (byte)(uVar15 >> 7);
        iVar12 = uVar15 - (iVar12 + 1U);
        if (iVar12 != 0) {
          iVar12 = 1;
        }
        bVar5 = (byte)iVar12;
        pbVar13 = DAT_00362c84;
      }
LAB_00362354:
      *pbVar13 = bVar5;
      goto LAB_00362358;
    }
    *DAT_003627fc = '\x01';
    psVar9 = DAT_00362820;
    bVar5 = *pbVar13;
    uVar15 = (uint)bVar5;
    sVar1 = *DAT_00362820;
    *(char *)(iVar12 + uVar15 + 0x100) = (char)((ushort)sVar1 >> 8);
    *pbVar13 = bVar5 - 3;
    *(char *)(iVar12 + (uVar15 - 1 & 0xff) + 0x100) = (char)sVar1;
    *(byte *)(iVar12 + (uVar15 - 2 & 0xff) + 0x100) =
         *DAT_00362858 | *DAT_00362828 << 1 | *DAT_0036286c << 3 | *DAT_00362870 << 6 |
         *DAT_00362880 << 7 | 0x20;
    uVar15 = 0xfe;
  }
  uVar19 = 7;
  *psVar9 = *(short *)(*(int *)(DAT_0036288c + 0xc) + (uVar15 | 0x1f00));
LAB_00362358:
  if (*DAT_00362ca4 != 0) {
    uVar19 = *DAT_00362ca4 + uVar19;
    *DAT_00362ca4 = 0;
  }
  return uVar19;
}


// FUN_00362ca8 @ 00362ca8

void FUN_00362ca8(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = DAT_00362d88;
  iVar6 = DAT_00362d84;
  cVar1 = *DAT_00362d7c;
  *DAT_00362d7c = '\x01';
  pbVar3 = DAT_00362d80;
  uVar5 = *puVar4;
  bVar2 = *DAT_00362d80;
  uVar7 = (uint)bVar2;
  *(char *)(iVar6 + uVar7 + 0x100) = (char)(uVar5 >> 8);
  *pbVar3 = bVar2 - 3;
  pbVar3 = DAT_00362d8c;
  *(char *)(iVar6 + (uVar7 - 1 & 0xff) + 0x100) = (char)uVar5;
  *(byte *)(iVar6 + (uVar7 - 2 & 0xff) + 0x100) =
       *pbVar3 | (byte)(param_2 << 4) | *DAT_00362d90 << 1 | cVar1 << 2 | *DAT_00362d94 << 3 |
       *DAT_00362d98 << 6 | *DAT_00362d9c << 7 | 0x20;
  uVar5 = FUN_00361440(param_1);
  iVar6 = FUN_00361440(param_1 + 1U & 0xffff);
  *puVar4 = uVar5 | (ushort)(iVar6 << 8);
  return;
}


// FUN_00362da0 @ 00362da0

uint FUN_00362da0(short param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00361440();
  iVar2 = FUN_00361440(param_1 + 1);
  return uVar1 | iVar2 << 8;
}


// FUN_00362dd0 @ 00362dd0

void FUN_00362dd0(uint param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = DAT_00362e4c;
  pbVar1 = DAT_00362e48;
  uVar6 = (uint)*DAT_00362e44;
  uVar5 = uVar6 + param_1 + (uint)*DAT_00362e48;
  *DAT_00362e44 = (byte)uVar5;
  *pbVar1 = 0xff < uVar5;
  puVar4 = DAT_00362e54;
  *puVar2 = (char)((uVar5 & 0xff) >> 7);
  uVar3 = DAT_00362e50;
  *puVar4 = (char)(((uVar5 ^ uVar6) & ~(param_1 ^ uVar6) & 0xff) >> 7);
  *(bool *)uVar3 = (uVar5 & 0xff) == 0;
  return;
}


// FUN_00362e58 @ 00362e58

/* WARNING: Control flow encountered bad instruction data */

void FUN_00362e58(uint param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  int iVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  iVar10 = DAT_00363598;
  iVar7 = DAT_0036358c;
  pbVar3 = DAT_00363588;
  bVar1 = (byte)param_2;
  if (param_1 >> 0xd == 0) {
    uVar8 = 0x7ff;
    iVar7 = DAT_003635e4;
  }
  else {
    if (param_1 >> 0xe == 0) {
      switch(param_1 & 7) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
        goto switchD_00362e98_caseD_2;
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        return;
      }
    }
    if ((param_1 < 0x4014) || (param_1 == 0x4015)) {
      if (0x4007 < param_1) {
        switch(param_1) {
        case 0x4008:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4009:
        case 0x400d:
        case 0x4014:
switchD_00362e98_caseD_2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x400a:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x400b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x400c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x400e:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x400f:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4010:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4011:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4012:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4013:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4015:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          return;
        }
      }
      uVar8 = param_1 >> 2 & 1;
      param_1 = param_1 & 3;
      if (param_1 == 2) {
        iVar7 = DAT_00363598 + (uVar8 | uVar8 << 1) * 8;
        *(ushort *)(iVar7 + 0x10) = *(ushort *)(iVar7 + 0x10) & 0x700 | (ushort)param_2;
        return;
      }
      if (param_1 == 1) {
        iVar7 = DAT_00363598 + (uVar8 | uVar8 << 1) * 8;
        *(undefined1 *)(iVar7 + 0xe) = 1;
        *(byte *)(iVar7 + 0xd) = bVar1 & 7;
        *(byte *)(iVar7 + 0xc) = (byte)(param_2 >> 3) & 1;
        *(byte *)(iVar7 + 0xb) = (byte)(param_2 >> 4) & 7;
        *(char *)(iVar7 + 10) = (char)(param_2 >> 7);
        return;
      }
      if (param_1 != 0) {
        uVar8 = uVar8 | uVar8 << 1;
        pcVar9 = (char *)(DAT_00363598 + uVar8 * 8);
        cVar2 = *pcVar9;
        pcVar9[0x11] = bVar1 & 7;
        if (cVar2 != '\0') {
          param_2 = (uint)(byte)PTR_DAT_003635ac[param_2 >> 3];
          pcVar9 = (char *)(iVar10 + uVar8 * 8);
        }
        iVar10 = iVar10 + uVar8 * 8;
        if (cVar2 != '\0') {
          pcVar9[6] = (char)param_2;
        }
        *(undefined1 *)(iVar10 + 7) = 1;
        *(undefined1 *)(iVar10 + 5) = 0;
        return;
      }
      iVar7 = DAT_00363598 + (uVar8 | uVar8 << 1) * 8;
      *(byte *)(iVar7 + 4) = bVar1 & 0xf;
      *(byte *)(iVar7 + 3) = (byte)(param_2 >> 4) & 1;
      *(byte *)(iVar7 + 2) = (byte)(param_2 >> 5) & 1;
      *(char *)(iVar7 + 1) = (char)(param_2 >> 6);
      return;
    }
    if (param_1 == 0x4017) {
      uVar8 = param_2 >> 6 & 1;
      *DAT_00363568 = uVar8;
      *DAT_0036356c = param_2 >> 7;
      if (uVar8 != 0) {
        *DAT_00363570 = 0;
      }
      *DAT_00363574 = 0;
      *DAT_00363578 = 0;
      iVar7 = (int)(char)bVar1;
      if (iVar7 != -1 && iVar7 + 1 < 0 == SCARRY4(iVar7,1)) {
        return;
      }
      FUN_00365740();
      FUN_003658d8();
      return;
    }
    if (param_1 == 0x4016) {
      *DAT_0036357c = param_2 & 1;
      if ((param_2 & 1) == 0) {
        return;
      }
      *DAT_00363584 = *DAT_00363580;
      return;
    }
    if (param_1 == 0x4014) {
      iVar10 = 0;
      do {
        uVar6 = FUN_00361440(param_2 * 0x100 + iVar10 & 0xffff);
        uVar8 = (uint)*pbVar3 + iVar10;
        iVar10 = iVar10 + 1;
        *(undefined1 *)(iVar7 + (uVar8 & 0xff)) = uVar6;
      } while (iVar10 != 0x100);
      *DAT_00363590 = *DAT_00363590 + 0x201;
      return;
    }
    iVar7 = (int)(short)param_1;
    if (iVar7 == -1 || iVar7 + 1 < 0 != SCARRY4(iVar7,1)) {
      switch(*DAT_00365eb0) {
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*DAT_00365eb0 != 0x42) {
        return;
      }
      uVar12 = param_2 >> 2 & 0xc;
      uVar13 = *DAT_00365ed4;
      FUN_0036a1a4(uVar12,uVar13);
      iVar7 = DAT_00365ee8;
      piVar5 = DAT_00365ee4;
      piVar4 = DAT_00365edc;
      iVar10 = *DAT_00365ed8;
      *DAT_00365edc = iVar10 + extraout_r1 * 0x2000;
      uVar8 = (param_2 & 3) << 3;
      if (*DAT_00365ee0 == 0) {
        iVar7 = *piVar5;
      }
      uVar11 = *DAT_00365eec;
      FUN_0036a1a4(uVar8,uVar11);
      *DAT_00365ef0 = iVar7 + extraout_r1_00 * 0x400;
      FUN_0036a1a4(uVar12 | 3,uVar13);
      piVar4[3] = iVar10 + extraout_r1_01 * 0x2000;
      FUN_0036a1a4(uVar12 | 2,uVar13);
      piVar4[2] = iVar10 + extraout_r1_02 * 0x2000;
      FUN_0036a1a4(uVar12 | 1,uVar13);
      piVar4[1] = iVar10 + extraout_r1_03 * 0x2000;
      FUN_0036a1a4(uVar8 | 7,uVar11);
      piVar4 = DAT_00365ef0;
      DAT_00365ef0[7] = iVar7 + extraout_r1_04 * 0x400;
      FUN_0036a1a4(uVar8 | 6,uVar11);
      piVar4[6] = iVar7 + extraout_r1_05 * 0x400;
      FUN_0036a1a4(uVar8 | 5,uVar11);
      piVar4[5] = iVar7 + extraout_r1_06 * 0x400;
      FUN_0036a1a4(uVar8 | 4,uVar11);
      piVar4[4] = iVar7 + extraout_r1_07 * 0x400;
      FUN_0036a1a4(uVar8 | 3,uVar11);
      piVar4[3] = iVar7 + extraout_r1_08 * 0x400;
      FUN_0036a1a4(uVar8 | 2,uVar11);
      piVar4[2] = iVar7 + extraout_r1_09 * 0x400;
      FUN_0036a1a4(uVar8 | 1,uVar11);
      piVar4[1] = iVar7 + extraout_r1_10 * 0x400;
      return;
    }
    if (param_1 < 0x6000) {
      return;
    }
    uVar8 = 0x1fff;
    iVar7 = DAT_00363594;
  }
  *(byte *)(iVar7 + (param_1 & uVar8)) = bVar1;
  return;
}


// FUN_003636bc @ 003636bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003636bc(void)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  code *pcVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte bVar26;
  uint uVar27;
  char cVar28;
  char cVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  char cVar33;
  bool bVar34;
  uint local_4c;
  uint local_48 [9];
  
  uVar24 = 0;
  puVar31 = DAT_003646a4;
  do {
    bVar18 = *DAT_003646a8;
    bVar26 = bVar18 & 0x18;
    if (uVar24 == 0x105) {
      uVar22 = *puVar31;
      bVar15 = 1;
      *DAT_003646ac = *DAT_003646ac & 0x1f;
    }
    else {
      if (uVar24 == 0xf1) {
        bVar15 = 0;
        *DAT_003646ac = *DAT_003646ac | 0x80;
        iVar11 = (int)(char)*DAT_003646b0;
        if (iVar11 == -1 || iVar11 + 1 < 0 != SCARRY4(iVar11,1)) {
          uVar22 = *puVar31;
          *DAT_003646b4 = 1;
          goto LAB_00363b74;
        }
      }
      else if (uVar24 < 0xf0) {
        if ((bVar18 & 8) == 0) {
          FUN_00359150(DAT_003646c4,0x110);
        }
        else {
          iVar11 = 0;
          uVar10 = *DAT_003646b8;
          bVar15 = *DAT_003646b0;
          uVar22 = (uint)uVar10;
          do {
            iVar13 = *(int *)(DAT_003646bc + (uVar22 >> 8 & 0xc));
            uVar20 = (uint)*(byte *)(iVar13 + (uVar22 & 0x3ff)) << 4;
            pbVar21 = (byte *)(*(int *)(DAT_003646c0 +
                                       (((bVar15 & 0x10) << 8 | uVar20 & 0x1c00) >> 8)) +
                              (uVar20 & 0x3f7 | uVar10 >> 0xc & 7));
            bVar6 = *pbVar21;
            bVar7 = pbVar21[8];
            bVar5 = bVar7 >> 6 & 2 | bVar6 >> 7;
            uVar20 = *(byte *)(iVar13 + (uVar22 >> 4 & 0x38 | uVar22 >> 2 & 7) + 0x3c0) >>
                     (uVar22 >> 4 & 4 | uVar22 & 2) & 3;
            if (bVar5 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21 = (byte *)(DAT_003646c4 + iVar11);
            *pbVar21 = bVar5;
            iVar11 = iVar11 + 8;
            uVar25 = bVar6 & 1 | (bVar7 & 1) << 1;
            bVar5 = (byte)uVar25;
            if (uVar25 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21[7] = bVar5;
            uVar25 = bVar7 & 2 | bVar6 >> 1 & 1;
            bVar5 = (byte)uVar25;
            if (uVar25 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21[6] = bVar5;
            bVar5 = bVar7 >> 1 & 2 | bVar6 >> 2 & 1;
            if (bVar5 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21[5] = bVar5;
            bVar5 = bVar7 >> 2 & 2 | bVar6 >> 3 & 1;
            if (bVar5 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21[4] = bVar5;
            bVar5 = bVar7 >> 3 & 2 | bVar6 >> 4 & 1;
            if (bVar5 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21[3] = bVar5;
            bVar5 = bVar7 >> 4 & 2 | bVar6 >> 5 & 1;
            if (bVar5 != 0) {
              bVar5 = bVar5 | (byte)(uVar20 << 2);
            }
            pbVar21[2] = bVar5;
            bVar6 = bVar7 >> 5 & 2 | bVar6 >> 6 & 1;
            uVar25 = uVar22 + 1;
            if (bVar6 != 0) {
              bVar6 = bVar6 | (byte)(uVar20 << 2);
            }
            pbVar21[1] = bVar6;
            if ((uVar22 & 0x1f) == 0x1f) {
              uVar25 = uVar22 & 0xffffffe0 ^ 0x400;
            }
            uVar22 = uVar25;
          } while (iVar11 != 0x108);
        }
        FUN_00359150(DAT_003646c8,0x100);
        if ((bVar18 & 0x10) != 0) {
          iVar11 = 0x10;
          uVar22 = 0;
          uVar20 = 0;
          bVar15 = *DAT_003646b0;
          if ((bVar15 & 0x20) == 0) {
            iVar11 = 8;
          }
          do {
            iVar13 = uVar24 + ~(uint)*(byte *)(DAT_003646cc + uVar20 * 4);
            if ((-1 < iVar13) && (iVar13 < iVar11)) {
              if (uVar22 == 8) {
                uVar22 = 8;
                *DAT_003646ac = *DAT_003646ac | 0x20;
                goto LAB_00364408;
              }
              local_48[uVar22 + 1] = uVar20;
              uVar22 = uVar22 + 1;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != 0x40);
          puVar31 = DAT_003646e4;
          if (0 < (int)uVar22) {
LAB_00364408:
            do {
              local_48[0] = uVar22;
              pbVar21 = (byte *)(DAT_003646cc + local_48[local_48[0]] * 4);
              uVar22 = uVar24 + ~(uint)*pbVar21;
              bVar6 = pbVar21[2];
              if ((char)bVar6 < '\0') {
                uVar22 = (iVar11 - uVar24) + (uint)*pbVar21;
              }
              uVar20 = (uint)pbVar21[1];
              if ((bVar15 & 0x20) == 0) {
                uVar22 = uVar22 + (bVar15 & 8) * 0x200 + uVar20 * 0x10;
              }
              else {
                uVar25 = uVar22 & 7;
                if (7 < (int)uVar22) {
                  uVar25 = uVar25 | 0x10;
                }
                uVar22 = uVar25 | (uVar20 & 0xffffffe) << 4 | (uVar20 & 1) << 0xc;
              }
              uVar20 = (uint)pbVar21[3];
              iVar13 = 0;
              bVar7 = *(byte *)(*(int *)(DAT_003646c0 + (uVar22 >> 8 & 0xfc)) + (uVar22 & 0x3ff));
              uVar25 = bVar6 & 0x40;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 7;
              }
              uVar22 = (uVar22 & 0xffff) + 8;
              bVar5 = *(byte *)(*(int *)(DAT_003646c0 + (uVar22 >> 8 & 0xfffffffc)) +
                               (uVar22 & 0x3ff));
              bVar16 = bVar6 & 0x20;
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if (local_48[local_48[0]] == 0) {
                bVar16 = bVar16 | 0x40;
              }
              bVar16 = bVar16 | (byte)((bVar6 & 3) << 2);
              if (uVar22 != 0) {
                *(byte *)(DAT_003646c8 + uVar20) = (byte)uVar22 | bVar16 | 0x80;
              }
              iVar13 = 1;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 6;
              }
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if (uVar22 != 0 && uVar20 != 0xff) {
                *(byte *)(uVar20 + DAT_003646c8 + 1) = (byte)uVar22 | bVar16 | 0x80;
              }
              iVar13 = 2;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 5;
              }
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if ((uVar22 != 0) && (uVar20 < 0xfe)) {
                *(byte *)(uVar20 + DAT_003646c8 + 2) = (byte)uVar22 | bVar16 | 0x80;
              }
              iVar13 = 3;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 4;
              }
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if ((uVar22 != 0) && (uVar20 < 0xfd)) {
                *(byte *)(uVar20 + DAT_003646c8 + 3) = (byte)uVar22 | bVar16 | 0x80;
              }
              iVar13 = 4;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 3;
              }
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if ((uVar22 != 0) && (uVar20 < 0xfc)) {
                *(byte *)(uVar20 + DAT_003646c8 + 4) = (byte)uVar22 | bVar16 | 0x80;
              }
              iVar13 = 5;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 2;
              }
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if ((uVar22 != 0) && (uVar20 < 0xfb)) {
                *(byte *)(uVar20 + DAT_003646c8 + 5) = (byte)uVar22 | bVar16 | 0x80;
              }
              iVar13 = 6;
              if ((bVar6 & 0x40) == 0) {
                iVar13 = 1;
              }
              uVar22 = bVar7 >> iVar13 & 1 | (bVar5 >> iVar13 & 1) << 1;
              if ((uVar22 != 0) && (uVar20 < 0xfa)) {
                *(byte *)(uVar20 + DAT_003646c8 + 6) = (byte)uVar22 | bVar16 | 0x80;
              }
              if ((bVar6 & 0x40) != 0) {
                uVar25 = 7;
              }
              uVar22 = bVar7 >> uVar25 & 1 | (bVar5 >> uVar25 & 1) << 1;
              if ((uVar22 != 0) && (uVar20 < 0xf9)) {
                *(byte *)(uVar20 + DAT_003646c8 + 7) = (byte)uVar22 | bVar16 | 0x80;
              }
              uVar22 = local_48[0] - 1;
              puVar31 = DAT_003646e4;
            } while (1 < local_48[0]);
          }
        }
        bVar15 = 0x30;
        uVar20 = 0;
        uVar22 = 0xffffffff;
        if ((bVar18 & 1) == 0) {
          bVar15 = 0x3f;
        }
        iVar11 = DAT_003646c4 + (uint)*DAT_003646d0;
        do {
          if ((bVar18 & 2) == 0) {
            uVar25 = 0;
            if (7 < uVar20) {
              uVar25 = (uint)*(byte *)(iVar11 + uVar20);
            }
            if ((bVar18 & 4) != 0) goto LAB_00363a30;
LAB_00363a28:
            if (7 < uVar20) goto LAB_00363a30;
LAB_00363a98:
            pbVar21 = DAT_003646d4;
            if ((uVar25 & 3) != 0) {
              pbVar21 = DAT_003646d4 + (uVar25 & 0xf);
            }
          }
          else {
            uVar25 = (uint)*(byte *)(iVar11 + uVar20);
            if ((bVar18 & 4) == 0) goto LAB_00363a28;
LAB_00363a30:
            bVar6 = *(byte *)(DAT_003646c8 + uVar20);
            if ((uVar22 == 0xffffffff || (int)(uVar22 + 1) < 0 != SCARRY4(uVar22,1)) &&
               ((bVar6 & 0x40) != 0)) {
              uVar27 = uVar22;
              if ((uVar25 & 3) != 0) {
                uVar27 = uVar20;
              }
              if (uVar20 == 0xff) {
                uVar27 = uVar22;
              }
              if (bVar26 == 0x18) {
                uVar22 = uVar27;
              }
            }
            iVar13 = (int)(char)bVar6;
            if ((iVar13 != -1 && iVar13 + 1 < 0 == SCARRY4(iVar13,1)) ||
               ((uVar25 & 3) != 0 && (bVar6 & 0x20) != 0)) goto LAB_00363a98;
            pbVar21 = DAT_003646d4 + (bVar6 & 0xf) + 0x10;
          }
          *(byte *)(DAT_003646d8 + uVar20) = *pbVar21 & bVar15;
          uVar20 = uVar20 + 1;
        } while (uVar20 != 0x100);
        if ((bVar18 & 0x18) == 0) {
          FUN_003591f4(DAT_003646d8,0x100,*DAT_003646d4 & bVar15);
        }
        pcVar19 = (code *)*DAT_003646e0;
        puVar12 = DAT_003646e0;
        if (pcVar19 != (code *)0x0) {
          puVar12 = (undefined4 *)*DAT_003646dc;
        }
        if (pcVar19 != (code *)0x0 && puVar12 != (undefined4 *)0x0) {
          (*pcVar19)(uVar24,DAT_003646d8);
        }
        if ((-1 < (int)uVar22) && (bVar15 = *DAT_003646ac, (bVar15 & 0x40) == 0)) {
          uVar20 = *puVar31;
          if ((int)uVar20 < (int)(uVar22 + 2)) {
            do {
              iVar11 = FUN_003617d8();
              uVar20 = iVar11 * 3 + uVar20;
              *puVar31 = uVar20;
            } while ((int)uVar20 < (int)(uVar22 + 2));
            bVar15 = *DAT_003646ac;
          }
          *DAT_003646ac = bVar15 | 0x40;
        }
      }
      bVar15 = 0;
      uVar22 = *puVar31;
    }
LAB_00363b74:
    while ((int)uVar22 < 0x101) {
      iVar11 = FUN_003617d8();
      uVar22 = iVar11 * 3 + uVar22;
      *puVar31 = uVar22;
    }
    bVar6 = uVar24 < 0xf0 | bVar15;
    if ((bVar18 & 0x18) != 0 && bVar6 != 0) {
      uVar10 = *DAT_003646b8;
      if ((uVar10 & 0x7000) == 0x7000) {
        uVar20 = uVar10 >> 5 & 0x1f;
        uVar10 = uVar10 & 0x8fff;
        iVar11 = 0;
        if (uVar20 != 0x1f) {
          if (uVar20 == 0x1d) {
            uVar10 = uVar10 ^ 0x800;
          }
          else {
            iVar11 = uVar20 + 1;
          }
        }
        uVar10 = uVar10 & 0xfc1f | (ushort)(iVar11 << 5);
      }
      else {
        uVar10 = uVar10 + 0x1000;
      }
      *DAT_003646b8 = *DAT_003646e8 & 0x41f | uVar10 & 0xfbe0;
    }
    if (uVar22 >> 2 < 0x41) {
      do {
        iVar11 = FUN_003617d8();
        uVar22 = iVar11 * 3 + uVar22;
      } while ((int)uVar22 < 0x104);
    }
    bVar7 = bVar26;
    if ((bVar18 & 0x18) != 0) {
      bVar7 = 1;
    }
    if ((bVar6 & *DAT_003646ec == 4 & bVar7) == 1) {
      if ((*DAT_003646f4 == '\0') || (*DAT_003646f0 != '\0')) {
        *DAT_003646f0 = '\0';
        cVar8 = *DAT_003646f8;
      }
      else {
        cVar8 = *DAT_003646f4 + -1;
      }
      *DAT_003646f4 = cVar8;
      if ((cVar8 == '\0') && (*DAT_003646fc != '\0')) {
        *DAT_00364700 = 1;
      }
    }
    if ((bVar18 & 0x18) != 0) {
      bVar26 = 1;
    }
    if ((bVar15 & bVar26) == 1) {
      if (uVar22 >> 4 < 0x13) {
        do {
          iVar11 = FUN_003617d8();
          uVar22 = iVar11 * 3 + uVar22;
        } while ((int)uVar22 < 0x130);
      }
      *DAT_003646b8 = *DAT_003646e8 & 0x7be0 | *DAT_003646b8 & 0x841f;
    }
    if (uVar22 < 0x155) {
      do {
        iVar11 = FUN_003617d8();
        uVar22 = iVar11 * 3 + uVar22;
      } while ((int)uVar22 < 0x155);
    }
    iVar11 = DAT_00364708;
    piVar14 = DAT_00364704;
    *puVar31 = uVar22 - 0x155;
    iVar13 = *piVar14;
    iVar17 = iVar13 + 0x155;
    iVar11 = (int)((ulonglong)((longlong)iVar17 * (longlong)iVar11) >> 0x20);
    uVar22 = iVar11 - (iVar11 >> 0x1f);
    *piVar14 = uVar22 * -3 + iVar17;
    if (-0x153 < iVar13) {
      uVar20 = *DAT_0036470c;
      do {
        iVar11 = DAT_0036471c;
        piVar14 = DAT_00364714;
        uVar27 = 5;
        uVar25 = uVar20;
        if ((int)uVar22 < (int)uVar20) {
          uVar25 = uVar22;
        }
        iVar13 = *DAT_00364710 + uVar25;
        *DAT_00364710 = iVar13;
        iVar17 = *piVar14;
        if (iVar17 == 0) {
          uVar27 = 4;
          iVar11 = DAT_00364718;
        }
        uVar23 = *DAT_00364720;
        iVar32 = *(int *)(iVar11 + uVar23 * 4);
        local_48[0] = uVar20;
        if (iVar32 <= iVar13) {
          iVar30 = *DAT_00364724;
          piVar14 = DAT_00364724;
          do {
            if (iVar17 == 0) {
              piVar14 = (int *)FUN_00365740();
              if ((uVar23 & 1) != 0) {
                piVar14 = (int *)FUN_003658d8();
              }
              if ((uVar23 == 3) && (iVar30 == 0)) {
                piVar14 = (int *)0x1;
                *DAT_00364728 = 1;
              }
            }
            else if ((uVar23 != 3) && (piVar14 = (int *)FUN_00365740(), uVar23 == 4 || uVar23 == 1))
            {
              piVar14 = (int *)FUN_003658d8();
            }
            uVar23 = uVar23 + 1;
            bVar34 = uVar23 == uVar27;
            if (bVar34) {
              uVar23 = 0;
              iVar13 = iVar13 - iVar32;
              piVar14 = DAT_00364710;
            }
            iVar32 = *(int *)(iVar11 + uVar23 * 4);
            if (bVar34) {
              *piVar14 = iVar13;
            }
            puVar31 = DAT_003646e4;
          } while (iVar32 <= iVar13);
          *DAT_00364720 = uVar23;
        }
        iVar17 = DAT_00364734;
        iVar13 = DAT_00364730;
        iVar11 = DAT_0036472c;
        iVar32 = *(int *)(DAT_0036472c + 0x14) - uVar25;
        *(int *)(DAT_0036472c + 0x14) = iVar32;
        if (iVar32 < 1) {
          bVar18 = *(byte *)(iVar11 + 5);
          do {
            iVar32 = iVar32 + (uint)*(ushort *)(iVar11 + 0x10) * 2 + 2;
            bVar18 = bVar18 + 1 & 7;
          } while (iVar32 < 1);
          *(byte *)(iVar11 + 5) = bVar18;
          *(int *)(iVar11 + 0x14) = iVar32;
        }
        iVar32 = *(int *)(iVar11 + 0x2c) - uVar25;
        *(int *)(iVar11 + 0x2c) = iVar32;
        if (iVar32 < 1) {
          bVar18 = *(byte *)(iVar11 + 0x1d);
          do {
            iVar32 = iVar32 + (uint)*(ushort *)(iVar11 + 0x28) * 2 + 2;
            bVar18 = bVar18 + 1 & 7;
          } while (iVar32 < 1);
          *(byte *)(iVar11 + 0x1d) = bVar18;
          *(int *)(iVar11 + 0x2c) = iVar32;
        }
        if (1 < *(ushort *)(iVar13 + 8)) {
          iVar32 = *(int *)(iVar13 + 0xc) - uVar25;
          *(int *)(iVar13 + 0xc) = iVar32;
          if (iVar32 < 1) {
            bVar18 = *(byte *)(iVar13 + 3);
            bVar26 = *(byte *)(iVar13 + 5);
            bVar15 = *(byte *)(iVar13 + 6);
            if (bVar18 != 0) {
              bVar18 = 1;
            }
            if (bVar26 != 0) {
              bVar26 = 1;
            }
            do {
              iVar32 = iVar32 + *(ushort *)(iVar13 + 8) + 1;
              if ((bVar26 & bVar18) != 0) {
                bVar15 = bVar15 + 1 & 0x1f;
                *(byte *)(iVar13 + 6) = bVar15;
              }
            } while (iVar32 < 1);
            *(int *)(iVar13 + 0xc) = iVar32;
          }
        }
        iVar32 = *(int *)(iVar17 + 0xc) - uVar25;
        *(int *)(iVar17 + 0xc) = iVar32;
        if (iVar32 < 1) {
          uVar20 = (uint)*(ushort *)(iVar17 + 0x10);
          iVar30 = 6;
          if (*(char *)(iVar17 + 4) == '\0') {
            iVar30 = 1;
          }
          do {
            iVar32 = iVar32 + (uint)*(ushort *)(iVar17 + 10);
            uVar20 = ((uVar20 ^ uVar20 >> iVar30) & 1) << 0xe | uVar20 >> 1;
          } while (iVar32 < 1);
          *(short *)(iVar17 + 0x10) = (short)uVar20;
          *(int *)(iVar17 + 0xc) = iVar32;
        }
        iVar32 = *(int *)(DAT_00364738 + 0xc) - uVar25;
        *(int *)(DAT_00364738 + 0xc) = iVar32;
        uVar20 = local_48[0];
        if (iVar32 < 1) {
          cVar8 = *(char *)(DAT_00364738 + 1);
          local_48[0] = (uint)*(ushort *)(DAT_00364738 + 0x16);
          uVar10 = *(ushort *)(DAT_00364738 + 10);
          bVar18 = *(byte *)(DAT_00364738 + 3);
          cVar33 = *(char *)(DAT_00364738 + 4);
          cVar29 = *(char *)(DAT_00364738 + 5);
          uVar20 = (uint)*(byte *)(DAT_00364738 + 7);
          cVar28 = *(char *)(DAT_00364738 + 6);
          cVar1 = *(char *)(DAT_00364738 + 2);
          local_4c = (uint)*(ushort *)(DAT_00364738 + 0x12);
          uVar2 = *(ushort *)(DAT_00364738 + 0x14);
          uVar3 = *(ushort *)(DAT_00364738 + 0x10);
          uVar27 = (uint)*(byte *)(DAT_00364738 + 8);
          iVar11 = DAT_00364738;
          do {
            uVar23 = local_48[0];
            iVar32 = iVar32 + (uint)uVar10;
            *(int *)(iVar11 + 0xc) = iVar32;
            if (cVar29 == '\0') {
              if ((uVar20 & 1) == 0) {
                cVar9 = -2;
                if (1 < bVar18) {
LAB_00364098:
                  bVar18 = cVar9 + bVar18;
                  *(byte *)(iVar11 + 3) = bVar18;
                }
              }
              else {
                cVar9 = '\x02';
                if (bVar18 < 0x7e) goto LAB_00364098;
              }
              uVar20 = uVar20 >> 1;
              *(char *)(iVar11 + 7) = (char)uVar20;
            }
            cVar28 = cVar28 + -1;
            *(char *)(iVar11 + 6) = cVar28;
            if (cVar28 == '\0') {
              *(undefined1 *)(iVar11 + 6) = 8;
              if (cVar33 == '\0') {
                cVar29 = '\x01';
                cVar28 = '\b';
                cVar33 = '\0';
                *(undefined1 *)(iVar11 + 5) = 1;
              }
              else {
                cVar29 = '\0';
                cVar28 = '\b';
                *(char *)(iVar11 + 7) = (char)uVar27;
                *(undefined2 *)(iVar11 + 4) = 0;
                uVar20 = uVar27;
                if ((local_48[0] & 0xffff) == 0) {
                  cVar33 = '\0';
                  local_48[0] = 0;
                }
                else {
                  uVar27 = FUN_00361440(local_4c & 0xffff);
                  iVar11 = DAT_00364738;
                  local_48[0] = uVar23 - 1;
                  cVar33 = '\x01';
                  local_4c = local_4c + 1 | DAT_0036473c;
                  *(char *)(DAT_00364738 + 8) = (char)uVar27;
                  *(short *)(iVar11 + 0x16) = (short)local_48[0];
                  *(undefined1 *)(iVar11 + 4) = 1;
                  *(short *)(iVar11 + 0x12) = (short)local_4c;
                  if ((local_48[0] & 0xffff) == 0) {
                    if (cVar1 == '\0') {
                      local_48[0] = 0;
                      if (cVar8 != '\0') {
                        *(undefined1 *)(iVar11 + 9) = 1;
                      }
                    }
                    else {
                      *(ushort *)(iVar11 + 0x16) = uVar2;
                      *(ushort *)(iVar11 + 0x12) = uVar3;
                      local_4c = (uint)uVar3;
                      local_48[0] = (uint)uVar2;
                    }
                  }
                }
              }
            }
          } while (iVar32 < 1);
          uVar20 = *DAT_0036470c;
          iVar13 = DAT_00364730;
          iVar11 = DAT_0036472c;
          puVar31 = DAT_003646e4;
          iVar17 = DAT_00364734;
        }
        uVar20 = uVar20 - uVar25;
        *DAT_0036470c = uVar20;
        puVar4 = DAT_00364754;
        if (uVar20 == 0) {
          uVar20 = 0;
          if (*(char *)(iVar11 + 6) != '\0') {
            uVar10 = *(ushort *)(iVar11 + 0x10);
            if (((7 < uVar10) &&
                (*(char *)(DAT_00364740 + (uint)*(byte *)(iVar11 + 1) * 8 +
                          (uint)*(byte *)(iVar11 + 5)) != '\0')) &&
               ((*(char *)(iVar11 + 0xc) != '\0' ||
                ((uint)uVar10 + (uint)(uVar10 >> *(sbyte *)(iVar11 + 0xd)) >> 0xb == 0)))) {
              pbVar21 = (byte *)(iVar11 + 4);
              if (*(char *)(iVar11 + 3) == '\0') {
                pbVar21 = (byte *)(iVar11 + 9);
              }
              uVar20 = (uint)*pbVar21;
            }
          }
          if (*(char *)(iVar11 + 0x1e) != '\0') {
            uVar10 = *(ushort *)(iVar11 + 0x28);
            if (((7 < uVar10) &&
                (*(char *)(DAT_00364740 + (uint)*(byte *)(iVar11 + 0x19) * 8 +
                          (uint)*(byte *)(iVar11 + 0x1d)) != '\0')) &&
               ((*(char *)(iVar11 + 0x24) != '\0' ||
                ((uint)uVar10 + (uint)(uVar10 >> *(sbyte *)(iVar11 + 0x25)) >> 0xb == 0)))) {
              pbVar21 = (byte *)(iVar11 + 0x1c);
              if (*(char *)(iVar11 + 0x1b) == '\0') {
                pbVar21 = (byte *)(iVar11 + 0x21);
              }
              uVar20 = uVar20 + *pbVar21;
            }
          }
          uVar27 = 0x15;
          bVar34 = 1 < *(ushort *)(iVar13 + 8);
          if (bVar34) {
            uVar27 = (uint)*(byte *)(DAT_00364744 + (uint)*(byte *)(iVar13 + 6));
          }
          iVar11 = 0;
          if (bVar34) {
            uVar27 = uVar27 * 3;
          }
          if ((*(char *)(iVar17 + 5) != '\0') && ((*(ushort *)(iVar17 + 0x10) & 1) == 0)) {
            pbVar21 = (byte *)(iVar17 + 3);
            if (*(char *)(iVar17 + 2) == '\0') {
              pbVar21 = (byte *)(iVar17 + 8);
            }
            iVar11 = (uint)*pbVar21 << 1;
          }
          iVar11 = *(int *)(DAT_0036474c + (uVar27 + *(byte *)(DAT_00364738 + 3) + iVar11) * 4) +
                   *(int *)(DAT_00364748 + uVar20 * 4);
          iVar13 = *DAT_00364750;
          *DAT_00364750 = iVar11;
          iVar32 = *puVar4 * 0xfd;
          iVar17 = *DAT_00364758;
          uVar20 = (iVar11 - iVar13) + ((int)(iVar32 + ((uint)(iVar32 >> 0x1f) >> 0x18)) >> 8);
          *puVar4 = uVar20;
          if (iVar17 < 0x400) {
            *DAT_00364758 = iVar17 + 1;
            if (uVar20 == 0xffff8000 || (int)(uVar20 + 0x8000) < 0 != SCARRY4(uVar20,0x8000)) {
              uVar20 = DAT_0036473c;
            }
            if (0x7ffe < (int)uVar20) {
              uVar20 = 0x7fff;
            }
            *(short *)(DAT_0036475c + iVar17 * 2) = (short)uVar20;
          }
          piVar14 = DAT_00364760;
          uVar20 = 0x25;
          *DAT_0036470c = 0x25;
          iVar11 = *piVar14;
          *piVar14 = iVar11 + 0x4a;
          if (0xb5 < iVar11) {
            uVar20 = 0x26;
            *DAT_0036470c = 0x26;
            *DAT_00364760 = iVar11 + -0xb6;
          }
        }
        uVar22 = uVar22 - uVar25;
      } while (0 < (int)uVar22);
    }
    uVar24 = uVar24 + 1;
    if (uVar24 == 0x106) {
      return;
    }
  } while( true );
}


// FUN_00364764 @ 00364764

void FUN_00364764(uint param_1)

{
  *DAT_00364788 = param_1 & 0xff;
  if (*DAT_0036478c != 0) {
    *DAT_00364790 = param_1 & 0xff;
  }
  return;
}


// FUN_00364794 @ 00364794

undefined4 FUN_00364794(void)

{
  return *DAT_003647a0;
}


// FUN_003647a4 @ 003647a4

undefined4 FUN_003647a4(void)

{
  return *DAT_003647b0;
}


// FUN_003647b4 @ 003647b4

undefined4 FUN_003647b4(void)

{
  return DAT_003647bc;
}


// FUN_003647c0 @ 003647c0

undefined4 FUN_003647c0(int *param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = 0xffffffff;
  if ((0xf < param_2) && (*param_1 == DAT_00364904)) {
    bVar1 = *(byte *)((int)param_1 + 6);
    uVar8 = (uint)*(byte *)(param_1 + 1);
    uVar6 = 0x210;
    uVar5 = 0xfffffffd;
    if ((bVar1 & 4) == 0) {
      uVar6 = 0x10;
    }
    if (uVar8 != 0) {
      uVar7 = (uint)*(byte *)((int)param_1 + 5);
      if ((uVar8 * 0x4000 + uVar7 * 0x2000 | uVar6) <= param_2) {
        uVar4 = *(byte *)((int)param_1 + 7) & 0xf0 | (uint)(bVar1 >> 4);
        *DAT_00364908 = uVar4;
        if (((uVar4 < 8) && ((1 << uVar4 & 0x9fU) != 0)) || (uVar5 = 0xfffffffe, uVar4 == 0x42)) {
          *DAT_0036490c = bVar1 >> 3 & 1;
          *DAT_00364910 = bVar1 >> 1 & 1;
          *DAT_00364914 = bVar1 & 1;
          piVar2 = DAT_0036491c;
          *DAT_00364918 = (int)param_1 + uVar6;
          *piVar2 = uVar8 << 1;
          *DAT_00364920 = (int)param_1 + uVar6 + uVar8 * 0x4000;
          *DAT_00364924 = (uint)(uVar7 == 0);
          iVar3 = uVar7 << 3;
          if (uVar7 == 0) {
            iVar3 = 8;
          }
          *DAT_00364928 = iVar3;
          FUN_00359150(DAT_0036492c,0x2000);
          FUN_00364930();
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}


// FUN_00364930 @ 00364930

/* WARNING: Control flow encountered bad instruction data */

void FUN_00364930(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  ushort *puVar18;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar19;
  int iVar20;
  
  FUN_00359150(DAT_00364f28,0x800);
  iVar19 = DAT_00364f2c;
  FUN_00359150(DAT_00364f2c,0x1000);
  FUN_00359150(DAT_00364f30,0x100);
  uVar16 = DAT_00364f38;
  puVar4 = DAT_00364f34;
  *DAT_00364f34 = DAT_00364f38;
  puVar4[1] = uVar16;
  puVar4[2] = uVar16;
  puVar4[3] = uVar16;
  puVar4[4] = uVar16;
  puVar4[5] = uVar16;
  puVar4[6] = uVar16;
  puVar4[7] = uVar16;
  iVar20 = *DAT_00364f3c;
  if (iVar20 != 0) {
    FUN_00359150(DAT_00364f40,0x2000);
  }
  puVar4 = DAT_00364fa8;
  puVar7 = DAT_00364f8c;
  *DAT_00364f44 = 0;
  puVar5 = DAT_00364f48;
  *puVar7 = 0;
  puVar7 = DAT_00364f90;
  *puVar4 = 0;
  puVar4[1] = 0;
  *puVar5 = 0;
  puVar5 = DAT_00364f4c;
  *puVar7 = 0;
  puVar7 = DAT_00364f94;
  *puVar5 = 0;
  puVar5 = DAT_00364f50;
  *puVar7 = 0xc;
  puVar7 = DAT_00364f98;
  *puVar5 = 0;
  puVar5 = DAT_00364f54;
  *puVar7 = 0;
  puVar7 = DAT_00364f9c;
  *puVar5 = 0;
  puVar5 = DAT_00364f58;
  *puVar7 = 0;
  puVar7 = DAT_00364fa0;
  *puVar5 = 0;
  puVar5 = DAT_00364f5c;
  *puVar7 = 0;
  puVar7 = DAT_00364fa4;
  *puVar5 = 0;
  puVar6 = DAT_00364f60;
  *puVar7 = 0;
  puVar5 = DAT_00364fac;
  *puVar6 = 0;
  puVar6 = DAT_00364f64;
  *puVar5 = 0;
  puVar7 = DAT_00364fb0;
  *puVar6 = 0;
  puVar5 = DAT_00364f68;
  *puVar7 = 0;
  puVar7 = DAT_00364fb4;
  *puVar5 = 0;
  puVar4 = DAT_00364f6c;
  *puVar7 = 0;
  puVar5 = DAT_00364fb8;
  *puVar4 = 0;
  puVar4 = DAT_00364f70;
  *puVar5 = 0;
  puVar5 = DAT_00364fbc;
  *puVar4 = 0;
  puVar4 = DAT_00364f74;
  *puVar5 = 0;
  *puVar4 = 0;
  *DAT_00364f78 = 0;
  *DAT_00364f7c = 0;
  *DAT_00364f80 = 0;
  piVar10 = DAT_00364fcc;
  piVar8 = DAT_00364fc4;
  iVar17 = *DAT_00364f88;
  if (iVar17 != 0) {
    iVar17 = 1;
  }
  if (*DAT_00364f84 != 0) {
    iVar17 = 4;
  }
  puVar18 = (ushort *)(DAT_00364fc0 + iVar17 * 8);
  uVar1 = puVar18[3];
  uVar2 = puVar18[2];
  uVar3 = puVar18[1];
  *DAT_00364fc4 = iVar19 + (uint)*puVar18;
  piVar8[1] = iVar19 + (uint)uVar3;
  piVar8[2] = iVar19 + (uint)uVar2;
  piVar9 = DAT_00364fc8;
  iVar17 = DAT_00364f40;
  piVar8[3] = iVar19 + (uint)uVar1;
  piVar8 = DAT_00364fd0;
  if (iVar20 == 0) {
    iVar17 = *piVar9;
  }
  *piVar10 = iVar17;
  iVar19 = *piVar8;
  FUN_0036a1a4(2,iVar19);
  piVar10[2] = iVar17 + extraout_r1 * 0x400;
  FUN_0036a1a4(3,iVar19);
  piVar10[3] = iVar17 + extraout_r1_00 * 0x400;
  FUN_0036a1a4(4,iVar19);
  piVar10[4] = iVar17 + extraout_r1_01 * 0x400;
  FUN_0036a1a4(5,iVar19);
  piVar10[5] = iVar17 + extraout_r1_02 * 0x400;
  FUN_0036a1a4(6,iVar19);
  piVar10[6] = iVar17 + extraout_r1_03 * 0x400;
  FUN_0036a1a4(7,iVar19);
  puVar4 = DAT_00364fd4;
  iVar20 = iVar17 + extraout_r1_04 * 0x400;
  if (iVar19 != 1) {
    iVar17 = iVar17 + 0x400;
  }
  piVar10[7] = iVar20;
  piVar10[1] = iVar17;
  piVar8 = DAT_00364fe4;
  switch(*puVar4) {
  case 0:
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    iVar17 = *DAT_00364fe0;
    iVar20 = *DAT_00364fe8;
    *DAT_00364fe4 = iVar17;
    FUN_0036a1a4(3,iVar20);
    piVar8[3] = iVar17 + extraout_r1_05 * 0x2000;
    FUN_0036a1a4(2,iVar20);
    iVar19 = iVar17 + extraout_r1_06 * 0x2000;
    if (iVar20 != 1) {
      iVar17 = iVar17 + 0x2000;
    }
    piVar8[2] = iVar19;
    piVar8[1] = iVar17;
    FUN_00359150(DAT_00364fec,0x30);
    puVar13 = DAT_00365024;
    puVar12 = DAT_00364ff8;
    puVar11 = DAT_00364ff4;
    puVar4 = DAT_00364ff0;
    iVar19 = 1;
    DAT_00364ff0[4] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined2 *)((int)puVar4 + 10) = 4;
    *(undefined2 *)(puVar4 + 4) = 1;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    uVar16 = DAT_00365028;
    *puVar13 = 0;
    puVar11[3] = 0x1ac;
    puVar11[4] = 0;
    puVar11[5] = 0;
    *(undefined1 *)((int)puVar11 + 6) = 8;
    puVar5 = DAT_00364ffc;
    *(undefined2 *)((int)puVar11 + 10) = 0x1ac;
    *(undefined1 *)((int)puVar11 + 5) = 1;
    *puVar5 = 0;
    *DAT_00365000 = 0;
    *DAT_00365004 = 0;
    *DAT_00365008 = 0;
    *DAT_0036500c = 0;
    *DAT_00365010 = 0x25;
    *DAT_00365014 = 0;
    *DAT_00365018 = 0;
    *DAT_0036501c = 0;
    *DAT_00365020 = 0;
    do {
      uVar15 = FUN_00369b04(iVar19);
      uVar15 = FUN_00369898(0x45fe0000,uVar15);
      uVar15 = FUN_00369600(uVar15,0x42c80000);
      uVar15 = FUN_00369898(uVar16,uVar15);
      FUN_00369b90(uVar15,0x46fa0000);
      uVar15 = FUN_00369a90();
      puVar13[iVar19] = uVar15;
      uVar14 = DAT_00365034;
      uVar15 = DAT_00365030;
      puVar4 = DAT_0036502c;
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0x1f);
    iVar19 = 1;
    *DAT_0036502c = 0;
    do {
      uVar16 = FUN_00369b04(iVar19);
      uVar16 = FUN_00369898(uVar15,uVar16);
      uVar16 = FUN_00369600(uVar16,0x42c80000);
      uVar16 = FUN_00369898(uVar14,uVar16);
      FUN_00369b90(uVar16,0x46fa0000);
      uVar16 = FUN_00369a90();
      puVar4[iVar19] = uVar16;
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0xcb);
    *DAT_00365038 = 0;
    *DAT_0036503c = 0;
    *DAT_00365040 = 0;
    *DAT_00365044 = 0xfd;
    *DAT_00365048 = 0;
    *DAT_0036504c = 0;
    *DAT_00365050 = 1;
    *DAT_00365054 = 0;
    *DAT_00365058 = 0;
    *DAT_0036505c = 0;
    *DAT_00365060 = *(undefined2 *)(DAT_00364fe4[3] + 0x1ffc);
    return;
  }
}


// FUN_00365064 @ 00365064

void FUN_00365064(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  
  piVar5 = DAT_003650b8;
  iVar4 = DAT_003650b4;
  puVar6 = (ushort *)(DAT_003650b0 + param_1 * 8);
  uVar1 = puVar6[3];
  *DAT_003650b8 = DAT_003650b4 + (uint)*puVar6;
  uVar2 = puVar6[2];
  uVar3 = puVar6[1];
  piVar5[3] = iVar4 + (uint)uVar1;
  piVar5[1] = iVar4 + (uint)uVar3;
  piVar5[2] = iVar4 + (uint)uVar2;
  return;
}


// FUN_003650bc @ 003650bc

void FUN_003650bc(void)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int extraout_r1_11;
  int extraout_r1_12;
  int extraout_r1_13;
  int extraout_r1_14;
  int extraout_r1_15;
  int extraout_r1_16;
  int extraout_r1_17;
  int extraout_r1_18;
  int extraout_r1_19;
  int extraout_r1_20;
  int extraout_r1_21;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = DAT_00365464;
  bVar1 = *DAT_00365458;
  bVar3 = bVar1 >> 2 & 3;
  if (bVar3 < 2) {
    uVar5 = (*DAT_00365468 & 0xe) << 1;
    iVar6 = *DAT_0036545c;
    FUN_0036a1a4(uVar5,iVar6);
    piVar2 = DAT_00365464;
    iVar8 = *DAT_00365460;
    *DAT_00365464 = iVar8 + extraout_r1 * 0x2000;
    FUN_0036a1a4(uVar5 | 2,iVar6);
    piVar2[2] = iVar8 + extraout_r1_00 * 0x2000;
    FUN_0036a1a4(uVar5 | 1,iVar6);
    piVar2[1] = iVar8 + extraout_r1_01 * 0x2000;
    uVar5 = uVar5 | 3;
  }
  else if (bVar3 == 2) {
    iVar8 = *DAT_00365460;
    iVar6 = *DAT_0036545c;
    *DAT_00365464 = iVar8;
    iVar9 = iVar8;
    if (iVar6 != 1) {
      iVar9 = iVar8 + 0x2000;
    }
    piVar2[1] = iVar9;
    uVar5 = (*DAT_00365468 & 0xf) << 1;
    FUN_0036a1a4(uVar5,iVar6);
    piVar2[2] = iVar8 + extraout_r1_02 * 0x2000;
    uVar5 = uVar5 | 1;
  }
  else {
    iVar6 = *DAT_0036545c;
    FUN_0036a1a4(iVar6 + -2,iVar6);
    piVar2 = DAT_00365464;
    iVar8 = *DAT_00365460;
    DAT_00365464[2] = iVar8 + extraout_r1_03 * 0x2000;
    uVar5 = (*DAT_00365468 & 0xf) << 1;
    FUN_0036a1a4(uVar5,iVar6);
    *piVar2 = iVar8 + extraout_r1_04 * 0x2000;
    FUN_0036a1a4(uVar5 | 1,iVar6);
    piVar2[1] = iVar8 + extraout_r1_05 * 0x2000;
    uVar5 = iVar6 - 1;
  }
  FUN_0036a1a4(uVar5,iVar6);
  DAT_00365464[3] = iVar8 + extraout_r1_06 * 0x2000;
  uVar5 = (uint)*DAT_0036546c;
  iVar6 = DAT_00365478;
  if ((bVar1 & 0x10) == 0) {
    uVar5 = (uVar5 & 0x1e) << 2;
    if (*DAT_00365470 == 0) {
      iVar6 = *DAT_00365474;
    }
    uVar7 = *DAT_0036547c;
    FUN_0036a1a4(uVar5,uVar7);
    piVar2 = DAT_00365480;
    *DAT_00365480 = iVar6 + extraout_r1_07 * 0x400;
    FUN_0036a1a4(uVar5 | 6,uVar7);
    piVar2[6] = iVar6 + extraout_r1_08 * 0x400;
    FUN_0036a1a4(uVar5 | 5,uVar7);
    piVar2[5] = iVar6 + extraout_r1_09 * 0x400;
    FUN_0036a1a4(uVar5 | 4,uVar7);
    piVar2[4] = iVar6 + extraout_r1_10 * 0x400;
    FUN_0036a1a4(uVar5 | 3,uVar7);
    piVar2[3] = iVar6 + extraout_r1_11 * 0x400;
    FUN_0036a1a4(uVar5 | 2,uVar7);
    piVar2[2] = iVar6 + extraout_r1_12 * 0x400;
    FUN_0036a1a4(uVar5 | 1,uVar7);
    piVar2[1] = iVar6 + extraout_r1_13 * 0x400;
    uVar5 = uVar5 | 7;
  }
  else {
    if (*DAT_00365470 == 0) {
      iVar6 = *DAT_00365474;
    }
    uVar7 = *DAT_0036547c;
    FUN_0036a1a4(uVar5 << 2,uVar7);
    piVar2 = DAT_00365480;
    *DAT_00365480 = iVar6 + extraout_r1_14 * 0x400;
    FUN_0036a1a4(uVar5 << 2 | 1,uVar7);
    piVar2[1] = iVar6 + extraout_r1_15 * 0x400;
    FUN_0036a1a4(uVar5 << 2 | 2,uVar7);
    piVar2[2] = iVar6 + extraout_r1_16 * 0x400;
    FUN_0036a1a4(uVar5 << 2 | 3,uVar7);
    piVar2[3] = iVar6 + extraout_r1_17 * 0x400;
    uVar5 = (uint)*DAT_00365484;
    FUN_0036a1a4(uVar5 << 2,uVar7);
    piVar2[4] = iVar6 + extraout_r1_18 * 0x400;
    FUN_0036a1a4(uVar5 << 2 | 1,uVar7);
    piVar2[5] = iVar6 + extraout_r1_19 * 0x400;
    FUN_0036a1a4(uVar5 << 2 | 2,uVar7);
    piVar2[6] = iVar6 + extraout_r1_20 * 0x400;
    uVar5 = uVar5 << 2 | 3;
  }
  FUN_0036a1a4(uVar5,uVar7);
  DAT_00365480[7] = iVar6 + extraout_r1_21 * 0x400;
  piVar2 = DAT_00365494;
  if (*DAT_00365488 == 0) {
    if ((bVar1 & 3) == 0) {
      uVar5 = 2;
    }
    else if ((bVar1 & 3) == 1) {
      uVar5 = 3;
    }
    else {
      uVar5 = (uint)((bVar1 & 3) == 2);
    }
    puVar4 = (ushort *)(DAT_0036548c + uVar5 * 8);
    iVar9 = DAT_00365490 + (uint)puVar4[3];
    iVar8 = DAT_00365490 + (uint)puVar4[2];
    iVar6 = DAT_00365490 + (uint)puVar4[1];
    *DAT_00365494 = DAT_00365490 + (uint)*puVar4;
    piVar2[1] = iVar6;
    piVar2[2] = iVar8;
    piVar2[3] = iVar9;
    return;
  }
  return;
}


// FUN_00365498 @ 00365498

void FUN_00365498(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int *piVar8;
  byte bVar9;
  uint uVar10;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int extraout_r1_11;
  int extraout_r1_12;
  int extraout_r1_13;
  int extraout_r1_14;
  int extraout_r1_15;
  int iVar11;
  int extraout_r1_16;
  int extraout_r1_17;
  int extraout_r1_18;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int local_38;
  int local_34;
  
  bVar1 = DAT_00365718[7];
  bVar9 = DAT_00365718[5];
  bVar2 = DAT_00365718[4];
  bVar3 = *DAT_00365718;
  bVar4 = DAT_00365718[1];
  bVar5 = DAT_00365718[2];
  uVar10 = (uint)DAT_00365718[6];
  bVar6 = DAT_00365718[3];
  bVar7 = *DAT_0036571c;
  iVar11 = DAT_00365728;
  if ((char)bVar7 < '\0') {
    if (*DAT_00365720 == 0) {
      iVar11 = *DAT_00365724;
    }
    uVar16 = *DAT_0036572c;
    FUN_0036a1a4(bVar5,uVar16);
    *DAT_00365730 = iVar11 + extraout_r1_06 * 0x400;
    FUN_0036a1a4(bVar4 & 0xfe,uVar16);
    local_34 = iVar11 + extraout_r1_07 * 0x400;
    FUN_0036a1a4(bVar3 | 1,uVar16);
    local_38 = iVar11 + extraout_r1_08 * 0x400;
    FUN_0036a1a4(bVar3 & 0xfe,uVar16);
    iVar14 = iVar11 + extraout_r1_09 * 0x400;
    FUN_0036a1a4(bVar9,uVar16);
    iVar17 = iVar11 + extraout_r1_10 * 0x400;
    FUN_0036a1a4(bVar2,uVar16);
    iVar13 = iVar11 + extraout_r1_11 * 0x400;
    FUN_0036a1a4(bVar6,uVar16);
    iVar15 = iVar11 + extraout_r1_12 * 0x400;
    bVar9 = bVar4 | 1;
  }
  else {
    if (*DAT_00365720 == 0) {
      iVar11 = *DAT_00365724;
    }
    uVar16 = *DAT_0036572c;
    FUN_0036a1a4(bVar3 & 0xfe,uVar16);
    *DAT_00365730 = iVar11 + extraout_r1 * 0x400;
    FUN_0036a1a4(bVar2,uVar16);
    local_34 = iVar11 + extraout_r1_00 * 0x400;
    FUN_0036a1a4(bVar6,uVar16);
    local_38 = iVar11 + extraout_r1_01 * 0x400;
    FUN_0036a1a4(bVar5,uVar16);
    iVar14 = iVar11 + extraout_r1_02 * 0x400;
    FUN_0036a1a4(bVar4 | 1,uVar16);
    iVar17 = iVar11 + extraout_r1_03 * 0x400;
    FUN_0036a1a4(bVar4 & 0xfe,uVar16);
    iVar13 = iVar11 + extraout_r1_04 * 0x400;
    FUN_0036a1a4(bVar3 | 1,uVar16);
    iVar15 = iVar11 + extraout_r1_05 * 0x400;
  }
  FUN_0036a1a4(bVar9,uVar16);
  piVar8 = DAT_00365730;
  piVar12 = DAT_00365730 + 2;
  DAT_00365730[1] = iVar15;
  piVar8[7] = iVar11 + extraout_r1_13 * 0x400;
  *piVar12 = iVar13;
  piVar8[3] = iVar17;
  piVar8[4] = iVar14;
  piVar8[5] = local_38;
  piVar8[6] = local_34;
  if ((bVar7 & 0x40) == 0) {
    iVar13 = *DAT_00365734;
    FUN_0036a1a4(uVar10,iVar13);
    iVar14 = *DAT_00365738;
    uVar10 = iVar13 - 2;
    iVar11 = extraout_r1_14;
  }
  else {
    iVar13 = *DAT_00365734;
    FUN_0036a1a4(iVar13 + -2,iVar13);
    iVar14 = *DAT_00365738;
    iVar11 = extraout_r1_15;
  }
  FUN_0036a1a4(uVar10,iVar13);
  piVar8 = DAT_0036573c;
  DAT_0036573c[2] = iVar14 + extraout_r1_16 * 0x2000;
  *piVar8 = iVar14 + iVar11 * 0x2000;
  FUN_0036a1a4(bVar1,iVar13);
  piVar8[1] = iVar14 + extraout_r1_17 * 0x2000;
  FUN_0036a1a4(iVar13 + -1,iVar13);
  piVar8[3] = iVar14 + extraout_r1_18 * 0x2000;
  return;
}


// FUN_00365740 @ 00365740

void FUN_00365740(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = DAT_003658cc;
  if (*(char *)(DAT_003658cc + 7) == '\0') {
    if (*(char *)(DAT_003658cc + 8) != '\0') {
      cVar3 = *(char *)(DAT_003658cc + 8) + -1;
      goto LAB_00365778;
    }
    pcVar1 = (char *)(DAT_003658cc + 9);
    *(undefined1 *)(DAT_003658cc + 8) = *(undefined1 *)(DAT_003658cc + 4);
    if (*pcVar1 == '\0') {
      if (*(char *)(iVar2 + 2) != '\0') {
        *(undefined1 *)(iVar2 + 9) = 0xf;
      }
    }
    else {
      *(char *)(iVar2 + 9) = *pcVar1 + -1;
    }
  }
  else {
    *(undefined1 *)(DAT_003658cc + 9) = 0xf;
    *(undefined1 *)(iVar2 + 7) = 0;
    cVar3 = *(char *)(iVar2 + 4);
LAB_00365778:
    *(char *)(iVar2 + 8) = cVar3;
  }
  if (*(char *)(iVar2 + 0x1f) == '\0') {
    if (*(char *)(iVar2 + 0x20) != '\0') {
      cVar3 = *(char *)(iVar2 + 0x20) + -1;
      goto LAB_003657b0;
    }
    *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar2 + 0x1c);
    if (*(char *)(iVar2 + 0x21) == '\0') {
      if (*(char *)(iVar2 + 0x1a) != '\0') {
        *(undefined1 *)(iVar2 + 0x21) = 0xf;
      }
    }
    else {
      *(char *)(iVar2 + 0x21) = *(char *)(iVar2 + 0x21) + -1;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x21) = 0xf;
    *(undefined1 *)(iVar2 + 0x1f) = 0;
    cVar3 = *(char *)(iVar2 + 0x1c);
LAB_003657b0:
    *(char *)(iVar2 + 0x20) = cVar3;
  }
  iVar2 = DAT_003658d0;
  if (*(char *)(DAT_003658d0 + 6) == '\0') {
    if (*(char *)(DAT_003658d0 + 7) != '\0') {
      cVar3 = *(char *)(DAT_003658d0 + 7) + -1;
      goto LAB_003657ec;
    }
    pcVar1 = (char *)(DAT_003658d0 + 8);
    *(undefined1 *)(DAT_003658d0 + 7) = *(undefined1 *)(DAT_003658d0 + 3);
    if (*pcVar1 == '\0') {
      if (*(char *)(iVar2 + 1) != '\0') {
        *(undefined1 *)(iVar2 + 8) = 0xf;
      }
    }
    else {
      *(char *)(iVar2 + 8) = *pcVar1 + -1;
    }
  }
  else {
    *(undefined1 *)(DAT_003658d0 + 8) = 0xf;
    *(undefined1 *)(iVar2 + 6) = 0;
    cVar3 = *(char *)(iVar2 + 3);
LAB_003657ec:
    *(char *)(iVar2 + 7) = cVar3;
  }
  iVar2 = DAT_003658d4;
  if (*(char *)(DAT_003658d4 + 4) == '\0') {
    if (*(char *)(DAT_003658d4 + 3) == '\0') goto LAB_0036581c;
    cVar3 = *(char *)(DAT_003658d4 + 3) + -1;
  }
  else {
    cVar3 = *(char *)(DAT_003658d4 + 2);
  }
  *(char *)(DAT_003658d4 + 3) = cVar3;
LAB_0036581c:
  if (*(char *)(iVar2 + 1) == '\0') {
    *(undefined1 *)(iVar2 + 4) = 0;
  }
  return;
}


// FUN_003658d8 @ 003658d8

void FUN_003658d8(void)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_00365a40;
  if ((*(char *)(DAT_00365a40 + 6) != '\0') && (*(char *)(DAT_00365a40 + 2) == '\0')) {
    *(char *)(DAT_00365a40 + 6) = *(char *)(DAT_00365a40 + 6) + -1;
  }
  uVar5 = (uint)*(byte *)(iVar2 + 0xd);
  uVar1 = *(ushort *)(iVar2 + 0x10);
  uVar6 = (uint)(uVar1 >> uVar5);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    uVar6 = ~(uint)(uVar1 >> uVar5);
  }
  if (*(char *)(iVar2 + 0xf) == '\0') {
    if (((*(char *)(iVar2 + 10) != '\0' && uVar5 != 0) && (7 < uVar1)) &&
       (iVar4 = uVar6 + uVar1, iVar4 < 0x800)) {
      *(short *)(iVar2 + 0x10) = (short)iVar4;
    }
LAB_0036595c:
    *(undefined1 *)(iVar2 + 0xe) = 0;
    cVar3 = *(char *)(iVar2 + 0xb);
  }
  else {
    if (*(char *)(iVar2 + 0xe) != '\0') goto LAB_0036595c;
    cVar3 = *(char *)(iVar2 + 0xf) + -1;
  }
  *(char *)(iVar2 + 0xf) = cVar3;
  if ((*(char *)(iVar2 + 0x1e) != '\0') && (*(char *)(iVar2 + 0x1a) == '\0')) {
    *(char *)(iVar2 + 0x1e) = *(char *)(iVar2 + 0x1e) + -1;
  }
  uVar5 = (uint)*(byte *)(iVar2 + 0x25);
  uVar1 = *(ushort *)(iVar2 + 0x28);
  uVar6 = -(uint)(uVar1 >> uVar5);
  if (*(char *)(iVar2 + 0x24) == '\0') {
    uVar6 = (uint)(uVar1 >> uVar5);
  }
  if (*(char *)(iVar2 + 0x27) == '\0') {
    if (((*(char *)(iVar2 + 0x22) != '\0' && uVar5 != 0) && (7 < uVar1)) &&
       (iVar4 = uVar6 + uVar1, iVar4 < 0x800)) {
      *(short *)(iVar2 + 0x28) = (short)iVar4;
    }
  }
  else if (*(char *)(iVar2 + 0x26) == '\0') {
    cVar3 = *(char *)(iVar2 + 0x27) + -1;
    goto LAB_003659f4;
  }
  *(undefined1 *)(iVar2 + 0x26) = 0;
  cVar3 = *(char *)(iVar2 + 0x23);
LAB_003659f4:
  *(char *)(iVar2 + 0x27) = cVar3;
  if ((*(char *)(DAT_00365a44 + 5) != '\0') && (*(char *)(DAT_00365a44 + 1) == '\0')) {
    *(char *)(DAT_00365a44 + 5) = *(char *)(DAT_00365a44 + 5) + -1;
  }
  if (*(char *)(DAT_00365a48 + 5) != '\0') {
    if (*(char *)(DAT_00365a48 + 1) == '\0') {
      *(char *)(DAT_00365a48 + 5) = *(char *)(DAT_00365a48 + 5) + -1;
    }
    return;
  }
  return;
}


// FUN_00365fa8 @ 00365fa8

int FUN_00365fa8(void)

{
  int iVar1;
  
  iVar1 = FUN_00365fc0();
  if (iVar1 != 0) {
    iVar1 = -1;
  }
  return iVar1;
}


// FUN_00365fc0 @ 00365fc0

int FUN_00365fc0(byte *param_1,int *param_2,ushort *param_3,int param_4)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  ushort *local_650;
  ushort *local_64c;
  uint local_648;
  uint local_644;
  int local_640;
  byte *local_63c;
  byte *local_638;
  byte *local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined2 uStack_622;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined2 auStack_5e0 [144];
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  short asStack_4b0 [112];
  int local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_16c;
  byte local_168 [256];
  char local_68;
  byte abStack_67 [67];
  
  local_64c = (ushort *)((int)param_3 + param_4);
  local_640 = 0;
  local_644 = 0;
  local_648 = 0;
  local_634 = param_1 + *param_2;
  iVar5 = DAT_003669bc;
  local_650 = param_3;
  local_63c = param_1;
  local_638 = param_1;
  do {
    uVar10 = local_648;
    puVar14 = local_650;
    if ((int)local_644 < 1) {
      do {
        if (puVar14 == local_64c) {
          local_640 = 1;
          puVar14 = local_64c;
        }
        else {
          local_650 = (ushort *)((int)puVar14 + 1);
          uVar10 = uVar10 | (uint)(byte)*puVar14 << (local_644 & 0xff);
          puVar14 = local_650;
          local_648 = uVar10;
        }
        uVar6 = local_644 + 8;
        bVar17 = SCARRY4(local_644,7);
        iVar3 = local_644 + 7;
        local_644 = uVar6;
      } while (iVar3 < 0 != bVar17);
    }
    uVar10 = local_648;
    if (0x20 < local_644) {
LAB_0036699c:
                    /* WARNING: Subroutine does not return */
      FUN_00367254(DAT_003669b0,0xc1,DAT_003669b4,DAT_003669b8);
    }
    uVar9 = local_644 - 1;
    uVar6 = local_648 >> 1;
    if (uVar9 < 2) {
      uVar11 = local_644 - 9;
      puVar14 = local_650;
      local_648 = uVar6;
      do {
        uVar9 = uVar11;
        uVar11 = uVar9 + 8;
        if (puVar14 == local_64c) {
          local_640 = 1;
          puVar14 = local_64c;
        }
        else {
          local_650 = (ushort *)((int)puVar14 + 1);
          uVar6 = uVar6 | (uint)(byte)*puVar14 << (uVar11 & 0xff);
          puVar14 = local_650;
          local_648 = uVar6;
        }
        local_644 = uVar9 + 0x10;
      } while ((int)(uVar9 + 0xe) < 0 != SCARRY4(uVar11,6));
      if (0x18 < uVar11) goto LAB_0036699c;
      uVar9 = uVar9 + 0x10;
    }
    uVar11 = uVar6 >> 2;
    uVar6 = uVar6 & 3;
    local_644 = uVar9 - 2;
    local_648 = uVar11;
    if (uVar6 == 2) {
      if (local_644 < 5) {
        uVar6 = uVar9 - 10;
        puVar14 = local_650;
        do {
          uVar9 = uVar6;
          uVar6 = uVar9 + 8;
          if (puVar14 == local_64c) {
            local_640 = 1;
            puVar14 = local_64c;
          }
          else {
            local_650 = (ushort *)((int)puVar14 + 1);
            uVar11 = uVar11 | (uint)(byte)*puVar14 << (uVar6 & 0xff);
            puVar14 = local_650;
            local_648 = uVar11;
          }
          local_644 = uVar9 + 0x10;
        } while ((int)(uVar9 + 0xb) < 0 != SCARRY4(uVar6,3));
        if (0x18 < uVar6) goto LAB_0036699c;
        local_644 = uVar9 + 0x10;
      }
      uVar9 = local_644 - 5;
      uVar6 = uVar11 >> 5;
      if (uVar9 < 5) {
        uVar15 = local_644 - 0xd;
        puVar14 = local_650;
        local_648 = uVar6;
        do {
          uVar9 = uVar15;
          uVar15 = uVar9 + 8;
          if (puVar14 == local_64c) {
            local_640 = 1;
            puVar14 = local_64c;
          }
          else {
            local_650 = (ushort *)((int)puVar14 + 1);
            uVar6 = uVar6 | (uint)(byte)*puVar14 << (uVar15 & 0xff);
            puVar14 = local_650;
            local_648 = uVar6;
          }
          local_644 = uVar9 + 0x10;
        } while ((int)(uVar9 + 0xb) < 0 != SCARRY4(uVar15,3));
        if (0x18 < uVar15) goto LAB_0036699c;
        uVar9 = uVar9 + 0x10;
      }
      uVar12 = uVar9 - 5;
      uVar15 = uVar6 >> 5;
      if (uVar12 < 4) {
        puVar14 = local_650;
        uVar9 = uVar9 - 0xd;
        local_648 = uVar15;
        do {
          uVar12 = uVar9;
          uVar9 = uVar12 + 8;
          if (puVar14 == local_64c) {
            local_640 = 1;
            puVar4 = local_64c;
          }
          else {
            puVar4 = (ushort *)((int)puVar14 + 1);
            uVar15 = uVar15 | (uint)(byte)*puVar14 << (uVar9 & 0xff);
            local_650 = puVar4;
            local_648 = uVar15;
          }
          local_644 = uVar12 + 0x10;
          puVar14 = puVar4;
        } while ((int)(uVar12 + 0xc) < 0 != SCARRY4(uVar9,4));
        if (0x18 < uVar9) goto LAB_0036699c;
        uVar12 = uVar12 + 0x10;
      }
      local_644 = uVar12 - 4;
      uVar9 = uVar15 >> 4;
      if (0x1d < (uVar11 & 0x1f)) {
        return -3;
      }
      if (0x1d < (uVar6 & 0x1f)) {
        return -3;
      }
      iVar16 = (uVar6 & 0x1f) + 1;
      iVar3 = 0;
      local_168[0x12] = 0;
      local_168[0xc] = 0;
      local_168[0xd] = 0;
      local_168[0xe] = 0;
      local_168[0xf] = 0;
      local_168[8] = 0;
      local_168[9] = 0;
      local_168[10] = 0;
      local_168[0xb] = 0;
      local_168[4] = 0;
      local_168[5] = 0;
      local_168[6] = 0;
      local_168[7] = 0;
      local_168[0] = 0;
      local_168[1] = 0;
      local_168[2] = 0;
      local_168[3] = 0;
      iVar13 = (uVar11 & 0x1f) + 0x101;
      local_168[0x10] = 0;
      local_168[0x11] = 0;
      puVar14 = local_650;
      do {
        puVar4 = puVar14;
        local_648 = uVar9;
        if (local_644 < 3) {
          do {
            uVar6 = local_644;
            if (puVar4 == local_64c) {
              local_640 = 1;
              puVar4 = local_64c;
            }
            else {
              puVar14 = (ushort *)((int)puVar4 + 1);
              uVar9 = uVar9 | (uint)(byte)*puVar4 << (uVar6 & 0xff);
              puVar4 = puVar14;
              local_650 = puVar14;
              local_648 = uVar9;
            }
            local_644 = uVar6 + 8;
          } while ((int)(uVar6 + 5) < 0 != SCARRY4(uVar6,5));
          if (0x18 < uVar6) goto LAB_0036699c;
        }
        bVar2 = (byte)uVar9;
        uVar9 = uVar9 >> 3;
        bVar17 = iVar3 != (uVar15 & 0xf) + 3;
        local_168[*(byte *)(iVar5 + iVar3)] = bVar2 & 7;
        local_644 = local_644 - 3;
        iVar3 = iVar3 + 1;
      } while (bVar17);
      local_648 = uVar9;
      iVar5 = FUN_00366dd0(&local_630,local_168,0x13);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (local_3d0 == -1) {
        return -3;
      }
      uVar6 = iVar16 + iVar13;
      uVar9 = 0;
      do {
        uVar11 = FUN_00366c98(&local_650,&local_630);
        if (local_3d0 < (int)uVar11) {
          return -3;
        }
        uVar15 = uVar11 & 0xffff;
        if (uVar15 == 0x12) {
          uVar11 = local_648;
          puVar14 = local_650;
          if ((int)local_644 < 7) {
            do {
              if (puVar14 == local_64c) {
                local_640 = 1;
                puVar4 = local_64c;
              }
              else {
                puVar4 = (ushort *)((int)puVar14 + 1);
                uVar11 = uVar11 | (uint)(byte)*puVar14 << (local_644 & 0xff);
                local_650 = puVar4;
                local_648 = uVar11;
              }
              uVar15 = local_644 + 8;
              bVar17 = SCARRY4(local_644,1);
              iVar5 = local_644 + 1;
              puVar14 = puVar4;
              local_644 = uVar15;
            } while (iVar5 < 0 != bVar17);
          }
          if (0x20 < local_644) goto LAB_0036699c;
          local_644 = local_644 - 7;
          uVar15 = (local_648 & 0x7f) + 0xb;
          local_648 = local_648 >> 7;
LAB_0036687c:
          uVar11 = 0;
        }
        else {
          if (uVar15 == 0x11) {
            uVar11 = local_648;
            puVar14 = local_650;
            if ((int)local_644 < 3) {
              do {
                if (puVar14 == local_64c) {
                  local_640 = 1;
                  puVar14 = local_64c;
                }
                else {
                  local_650 = (ushort *)((int)puVar14 + 1);
                  uVar11 = uVar11 | (uint)(byte)*puVar14 << (local_644 & 0xff);
                  puVar14 = local_650;
                  local_648 = uVar11;
                }
                uVar15 = local_644 + 8;
                bVar17 = SCARRY4(local_644,5);
                iVar5 = local_644 + 5;
                local_644 = uVar15;
              } while (iVar5 < 0 != bVar17);
            }
            if (local_644 < 0x21) {
              local_644 = local_644 - 3;
              uVar15 = (local_648 & 7) + 3;
              local_648 = local_648 >> 3;
              goto LAB_0036687c;
            }
            goto LAB_0036699c;
          }
          if (uVar15 == 0x10) {
            if (uVar9 == 0) {
              return -3;
            }
            uVar11 = (uint)*(byte *)((int)&local_16c + uVar9 + 3);
            puVar14 = local_650;
            uVar15 = local_648;
            if ((int)local_644 < 2) {
              do {
                if (puVar14 == local_64c) {
                  local_640 = 1;
                  puVar14 = local_64c;
                }
                else {
                  local_650 = (ushort *)((int)puVar14 + 1);
                  uVar15 = uVar15 | (uint)(byte)*puVar14 << (local_644 & 0xff);
                  puVar14 = local_650;
                  local_648 = uVar15;
                }
                uVar12 = local_644 + 8;
                bVar17 = SCARRY4(local_644,6);
                iVar5 = local_644 + 6;
                local_644 = uVar12;
              } while (iVar5 < 0 != bVar17);
            }
            if (0x20 < local_644) goto LAB_0036699c;
            local_644 = local_644 - 2;
            uVar15 = (local_648 & 3) + 3;
            local_648 = local_648 >> 2;
          }
          else {
            uVar15 = 1;
          }
        }
        if (uVar6 - uVar9 < uVar15) {
          return -3;
        }
        FUN_003591f4(local_168 + uVar9,uVar15,uVar11 & 0xff);
        uVar9 = uVar15 + uVar9;
      } while (uVar9 < uVar6);
      if (local_68 == '\0') {
        return -3;
      }
      iVar5 = FUN_00366dd0(&local_630,local_168,iVar13);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_00366dd0(&local_3cc,local_168 + iVar13,iVar16);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar3 = FUN_00366ae8(&local_650,&local_630,&local_3cc);
LAB_00366400:
      iVar5 = DAT_003669bc;
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (uVar6 == 1) {
        iVar5 = 0;
        local_61c = 0;
        local_618 = 0;
        local_614 = 0;
        local_630 = 0;
        local_62c = 0;
        local_628 = 0;
        local_5e4 = DAT_003669c0;
        local_5e8 = DAT_003669c4;
        local_5ec = DAT_003669c8;
        local_5f0 = DAT_003669cc;
        local_5f4 = DAT_003669d0;
        local_5f8 = DAT_003669d4;
        local_5fc = DAT_003669d8;
        local_600 = DAT_003669dc;
        local_604 = DAT_003669e0;
        local_608 = DAT_003669e4;
        local_60c = DAT_003669e8;
        local_610 = DAT_003669ec;
        local_620 = 0x700098;
        uStack_622 = 0x18;
        puVar7 = auStack_5e0;
        do {
          *puVar7 = (short)iVar5;
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar5 != 0x90);
        local_4c0 = DAT_003669fc;
        local_4bc = DAT_003669f8;
        local_4b8 = DAT_003669f4;
        local_4b4 = DAT_003669f0;
        iVar5 = 0;
        psVar8 = asStack_4b0;
        do {
          sVar1 = (short)iVar5;
          iVar5 = iVar5 + 1;
          *psVar8 = sVar1 + 0x90;
          psVar8 = psVar8 + 1;
        } while (iVar5 != 0x70);
        local_38c = 0x110010;
        local_3c0 = 0;
        local_3bc = 0;
        local_3b8 = 0;
        local_3b4 = 0;
        local_3b0 = 0;
        local_3cc = 0;
        local_3c8 = 0;
        local_388 = 0x130012;
        local_384 = 0x150014;
        local_380 = 0x170016;
        local_37c = 0x190018;
        local_378 = 0x1b001a;
        local_374 = 0x1d001c;
        local_370 = 0x1f001e;
        local_3ac = 0x10000;
        local_3a8 = 0x30002;
        local_3a4 = 0x50004;
        local_3a0 = 0x70006;
        local_39c = 0x90008;
        local_398 = 0xb000a;
        local_394 = 0xd000c;
        local_390 = 0xf000e;
        local_3c4 = 0x200000;
        local_3d0 = 0x11d;
        local_16c = 0x1d;
        iVar3 = FUN_00366ae8(&local_650,&local_630);
        goto LAB_00366400;
      }
      if (uVar6 != 0) {
        return -3;
      }
      if ((int)local_64c - (int)local_650 < 4) {
        return -3;
      }
      uVar6 = (uint)*local_650;
      if ((local_650[1] ^ *local_650) != 0xffff) {
        return -3;
      }
      local_650 = local_650 + 2;
      if ((uint)((int)local_64c - (int)local_650) < uVar6) {
        return -3;
      }
      if ((uint)((int)local_634 - (int)local_638) < uVar6) {
        return -5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_638 = (byte)*local_650;
        local_650 = (ushort *)((int)local_650 + 1);
        local_638 = local_638 + 1;
      }
      local_644 = 0;
      local_648 = 0;
    }
    if ((uVar10 & 1) != 0) {
      iVar5 = -3;
      if (local_640 == 0) {
        *param_2 = (int)local_638 - (int)local_63c;
        iVar5 = 0;
      }
      return iVar5;
    }
  } while( true );
}


// FUN_00366a00 @ 00366a00

uint FUN_00366a00(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (0x20 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00367254(DAT_00366ad0,0xb4,DAT_00366ad4,DAT_00366ad8);
  }
  uVar1 = param_1[3];
  if ((int)uVar1 < (int)param_2) {
    pbVar2 = (byte *)*param_1;
    do {
      if (pbVar2 == (byte *)param_1[1]) {
        param_1[4] = 1;
        pbVar2 = (byte *)param_1[1];
      }
      else {
        *param_1 = pbVar2 + 1;
        param_1[2] = param_1[2] | (uint)*pbVar2 << (uVar1 & 0xff);
        pbVar2 = pbVar2 + 1;
      }
      uVar1 = uVar1 + 8;
      param_1[3] = uVar1;
    } while ((int)uVar1 < (int)param_2);
  }
  if (0x20 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00367254(DAT_00366ad0,0xc1,DAT_00366ad4,DAT_00366adc);
  }
  if ((int)uVar1 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00367254(DAT_00366ad0,200,DAT_00366ae0,DAT_00366ae4);
  }
  param_1[3] = uVar1 - param_2;
  uVar1 = param_1[2];
  param_1[2] = uVar1 >> (param_2 & 0xff);
  return uVar1 & ~(-1 << (param_2 & 0xff));
}


// FUN_00366ae8 @ 00366ae8

undefined4 FUN_00366ae8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_00366c98();
  iVar4 = *(int *)(param_1 + 0x10);
  do {
    if (iVar4 != 0) {
      return 0xfffffffd;
    }
    if (uVar3 < 0x100) {
      puVar5 = *(undefined1 **)(param_1 + 0x18);
      if (puVar5 == *(undefined1 **)(param_1 + 0x1c)) {
        return 0xfffffffb;
      }
      *(undefined1 **)(param_1 + 0x18) = puVar5 + 1;
      *puVar5 = (char)uVar3;
    }
    else {
      if (uVar3 == 0x100) {
        return 0;
      }
      if (*(int *)(param_2 + 0x260) < (int)uVar3) {
        return 0xfffffffd;
      }
      if (0x8e < uVar3 >> 1) {
        return 0xfffffffd;
      }
      if (*(int *)(param_3 + 0x260) == -1) {
        return 0xfffffffd;
      }
      iVar4 = 0;
      uVar3 = uVar3 - 0x101;
      uVar1 = *(ushort *)(DAT_00366c88 + uVar3 * 2);
      if ((0x100000ffU >> (uVar3 & 0xff) & 1) == 0) {
        iVar4 = FUN_00366a00(param_1,*(undefined1 *)(DAT_00366c8c + uVar3));
      }
      uVar3 = FUN_00366c98(param_1,param_3);
      if (0x1d < uVar3) {
        return 0xfffffffd;
      }
      if (*(int *)(param_3 + 0x260) < (int)uVar3) {
        return 0xfffffffd;
      }
      uVar2 = *(ushort *)(DAT_00366c90 + uVar3 * 2);
      iVar6 = 0;
      if (3 < uVar3) {
        iVar6 = FUN_00366a00(param_1,*(undefined1 *)(DAT_00366c94 + uVar3));
      }
      iVar6 = iVar6 + (uint)uVar2;
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar7 - *(int *)(param_1 + 0x14) < iVar6) {
        return 0xfffffffd;
      }
      iVar4 = iVar4 + (uint)uVar1;
      if (*(int *)(param_1 + 0x1c) - iVar7 < iVar4) {
        return 0xfffffffb;
      }
      if (0 < iVar4) {
        iVar7 = 0;
        do {
          *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar7) =
               *(undefined1 *)((*(int *)(param_1 + 0x18) + iVar7) - iVar6);
          iVar7 = iVar7 + 1;
        } while (iVar4 != iVar7);
        iVar7 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar7 + iVar4;
    }
    uVar3 = FUN_00366c98(param_1,param_2);
    iVar4 = *(int *)(param_1 + 0x10);
  } while( true );
}


// FUN_00366c98 @ 00366c98

undefined2 FUN_00366c98(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = param_1[3];
  iVar8 = 0;
  iVar7 = 0;
  iVar2 = 1;
  while( true ) {
    if ((int)uVar3 < 1) {
      pbVar6 = (byte *)*param_1;
      uVar4 = uVar3;
      do {
        if (pbVar6 == (byte *)param_1[1]) {
          param_1[4] = 1;
          pbVar6 = (byte *)param_1[1];
        }
        else {
          *param_1 = pbVar6 + 1;
          param_1[2] = param_1[2] | (uint)*pbVar6 << (uVar4 & 0xff);
          pbVar6 = pbVar6 + 1;
        }
        uVar3 = uVar4 + 8;
        bVar9 = SCARRY4(uVar4,7);
        iVar1 = uVar4 + 7;
        param_1[3] = uVar3;
        uVar4 = uVar3;
      } while (iVar1 < 0 != bVar9);
    }
    if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00367254(DAT_00366db8,0xc1,DAT_00366dbc,DAT_00366dc0);
    }
    uVar4 = param_1[2];
    uVar3 = uVar3 - 1;
    param_1[3] = uVar3;
    param_1[2] = uVar4 >> 1;
    if (iVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_00367254(DAT_00366db8,0xf7,DAT_00366dc4,DAT_00366dcc);
    }
    uVar4 = uVar4 & 1 | iVar7 << 1;
    uVar5 = (uint)*(ushort *)(param_2 + iVar2 * 2);
    if ((int)uVar4 < (int)uVar5) break;
    iVar7 = uVar4 - uVar5;
    iVar8 = iVar8 + uVar5;
    iVar2 = iVar2 + 1;
  }
  if (0x11f < uVar4 + iVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00367254(DAT_00366db8,0x101,DAT_00366dc4,DAT_00366dc8);
  }
  return *(undefined2 *)(param_2 + (uVar4 + iVar8) * 2 + 0x20);
}


// FUN_00366dd0 @ 00366dd0

undefined4 FUN_00366dd0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  short sVar11;
  ushort local_40 [16];
  
  FUN_00359150(param_1,0x20);
  iVar3 = -1;
  iVar7 = 0;
  sVar11 = 0;
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  if (param_3 != 0) {
    iVar5 = 0;
    do {
      if (0xf < *(byte *)(param_2 + iVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00367254(DAT_00366f34,0x7e,DAT_00366f38,DAT_00366f3c);
      }
      if (*(byte *)(param_2 + iVar5) != 0) {
        *(int *)(param_1 + 0x260) = iVar5;
        psVar4 = (short *)(param_1 + (uint)*(byte *)(param_2 + iVar5) * 2);
        *psVar4 = *psVar4 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (param_3 != iVar5);
    sVar11 = (short)iVar3 + 1;
  }
  uVar8 = 1;
  uVar6 = 0;
  do {
    uVar10 = (uint)*(ushort *)(param_1 + iVar7);
    if (uVar8 < uVar10) {
      return 0xfffffffd;
    }
    puVar9 = (undefined2 *)((int)local_40 + iVar7);
    iVar7 = iVar7 + 2;
    *puVar9 = (short)uVar6;
    uVar6 = uVar6 + uVar10;
    uVar8 = (uVar8 - uVar10) * 2;
  } while (iVar7 != 0x20);
  if (((uVar6 < 2) || (uVar8 == 0)) && ((uVar6 != 1 || (*(short *)(param_1 + 2) == 1)))) {
    if (param_3 != 0) {
      iVar3 = 0;
      do {
        bVar1 = *(byte *)(param_2 + iVar3);
        if (bVar1 != 0) {
          uVar2 = local_40[bVar1];
          *(short *)(param_1 + (uint)uVar2 * 2 + 0x20) = (short)iVar3;
          local_40[bVar1] = uVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (param_3 != iVar3);
    }
    if (uVar6 == 1) {
      *(short *)(param_1 + 0x22) = sVar11;
      *(undefined2 *)(param_1 + 2) = 2;
    }
    return 0;
  }
  return 0xfffffffd;
}


// FUN_00366f40 @ 00366f40

undefined4 FUN_00366f40(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  
  *param_1 = unaff_r4;
  param_1[1] = unaff_r5;
  param_1[2] = unaff_r6;
  param_1[3] = unaff_r7;
  param_1[4] = unaff_r8;
  param_1[5] = unaff_r9;
  param_1[6] = unaff_r10;
  param_1[7] = unaff_r11;
  param_1[8] = register0x00000054;
  param_1[9] = in_lr;
  if ((in_lr & 1) == 0) {
    return 0;
  }
  return 0;
}


// FUN_00366f54 @ 00366f54

int FUN_00366f54(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    return param_2;
  }
  return param_2;
}


// FUN_00366f6c @ 00366f6c

int FUN_00366f6c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


// FUN_00366f88 @ 00366f88

void FUN_00366f88(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *param_1 = 0;
  FUN_00357e40(DAT_00367040);
  puVar2 = DAT_00367044;
  do {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00366ff8:
      *param_1 = puVar1;
      *puVar2 = param_1;
      iVar3 = param_1[-1];
      puVar2 = puVar1;
      goto LAB_00367004;
    }
    if (param_1 <= puVar1) {
      if (puVar1 != param_1) goto LAB_00366ff8;
      *DAT_00367048 = 0xc;
      goto LAB_00367034;
    }
    puVar2 = puVar1;
    if ((undefined4 *)((int)puVar1 + puVar1[-1]) == param_1) {
      iVar3 = param_1[-1] + puVar1[-1];
      puVar1[-1] = iVar3;
      puVar2 = (undefined4 *)*puVar1;
      param_1 = puVar1;
LAB_00367004:
      if ((undefined4 *)((int)param_1 + iVar3) == puVar2) {
        iVar4 = puVar2[-1];
        *param_1 = *puVar2;
        param_1[-1] = iVar4 + iVar3;
      }
LAB_00367034:
      FUN_00357e54(DAT_00367040);
      return;
    }
  } while( true );
}


// FUN_0036704c @ 0036704c

undefined4 FUN_0036704c(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar2 = 0;
  piVar3 = (int *)(param_1 + -4);
  puVar5 = (uint *)((int)piVar3 + *piVar3);
  if (puVar5 == (uint *)*DAT_003670c0) {
    uVar4 = param_2 - *piVar3;
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    puVar1 = (uint *)FUN_003670c4(uVar4);
    if (puVar1 == puVar5) {
      uVar2 = 1;
      *piVar3 = *piVar3 + uVar4;
    }
    else if (puVar1 != (uint *)0xffffffff) {
      *puVar1 = uVar4;
      FUN_00366f88(puVar1 + 1);
    }
  }
  return uVar2;
}


// FUN_003670c4 @ 003670c4

int FUN_003670c4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if ((-1 < param_1) && (iVar2 = FUN_00356c84(), piVar1 = DAT_0036713c, iVar2 != -1)) {
    param_1 = iVar2 + param_1;
    iVar4 = (iVar2 + 0xbU & 0xfffffff8) - 4;
    *DAT_0036713c = param_1;
    if (iVar4 != iVar2) {
      iVar3 = FUN_00356c84(iVar4 - iVar2);
      if (iVar3 != param_1) {
        return -1;
      }
      *piVar1 = param_1 + (iVar4 - iVar2);
    }
    if (piVar1[1] == 0) {
      piVar1[1] = iVar4;
    }
  }
  return iVar4;
}


// FUN_00367140 @ 00367140

uint * FUN_00367140(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 < 0xffffffec) {
    FUN_00357e40(DAT_00367248);
    uVar7 = param_1 + 7 & 0xfffffff8;
    uVar6 = uVar7 + 8;
    puVar5 = DAT_0036724c;
    do {
      puVar2 = puVar5;
      puVar5 = (uint *)*puVar2;
      if (puVar5 == (uint *)0x0) {
        puVar2 = (uint *)FUN_003670c4(uVar6);
        if (puVar2 == (uint *)0xffffffff) {
          *DAT_00367250 = 0xc;
          FUN_00357e54(DAT_00367248);
          return (uint *)0x0;
        }
        puVar5 = puVar2 + 1;
        *puVar2 = uVar6;
        goto LAB_0036720c;
      }
      if (uVar6 <= puVar5[-1]) {
        uVar3 = puVar5[-1] - uVar6;
        if (7 < uVar3) {
          puVar4 = (uint *)((int)puVar5 + uVar6);
          *puVar4 = *puVar5;
          puVar4[-1] = uVar3;
          *puVar2 = (uint)puVar4;
          puVar5[-1] = uVar6;
          goto LAB_0036720c;
        }
        break;
      }
    } while ((*puVar5 != 0) || (iVar1 = FUN_0036704c(puVar5,uVar6), iVar1 == 0));
    *puVar2 = *puVar5;
LAB_0036720c:
    FUN_00357e54(DAT_00367248);
    FUN_003590fc(puVar5,0,uVar7 | 4);
  }
  else {
    puVar5 = (uint *)0x0;
    *DAT_00367250 = 0xc;
  }
  return puVar5;
}


// FUN_00367254 @ 00367254

undefined4 FUN_00367254(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  uint unaff_r5;
  char *pcVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  int aiStack_58 [3];
  
  uVar12 = param_3 == 0;
  FUN_003681a4(*puRam003672ac,uRam003672b0);
  uVar13 = FUN_003672b4();
  uVar3 = (uint)uVar13;
  if ((bool)uVar12) {
    uVar3 = unaff_r5 ^ unaff_r5 >> (param_4 & 0xff);
    uVar12 = uVar3 == 0;
  }
  if ((bool)uVar12) {
    unaff_r5 = uVar3 * (int)((ulonglong)uVar13 >> 0x20) + uVar3;
  }
  FUN_003672cc(6);
  uVar3 = FUN_00355948(1);
  if (0x1f < uVar3) {
    *puRam00367328 = 0x16;
    return 0xffffffff;
  }
  pcVar9 = *(code **)(iRam00367324 + uVar3 * 4);
  if (pcVar9 == (code *)0x1) {
    return 0;
  }
  if (pcVar9 != (code *)0x0) {
    *(undefined4 *)(iRam00367324 + uVar3 * 4) = 0;
    (*pcVar9)();
    return 0;
  }
  iVar7 = iRam00367324;
  uVar13 = FUN_00355948(uVar3 | 0x80);
  iVar10 = (int)((ulonglong)uVar13 >> 0x20);
  pcVar11 = (char *)uVar13;
  aiStack_58[1] = 0;
  if (((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) ||
     (aiStack_58[0] = param_1, aiStack_58[2] = unaff_r5, iVar4 = FUN_00367790(pcVar11,0x3d),
     iVar4 != 0)) {
    *DAT_00367510 = 0x16;
    return 0xffffffff;
  }
  FUN_00357e40(DAT_00367504);
  uVar3 = FUN_00366f6c(iVar10);
  iVar4 = FUN_00367514(pcVar11,aiStack_58);
  piVar2 = DAT_00367508;
  if (iVar4 == 0) {
    iVar7 = 1;
    for (iVar4 = 0; *(int *)(*DAT_00367508 + iVar4) != 0; iVar4 = iVar4 + 4) {
      iVar7 = iVar7 + 1;
    }
    if (*DAT_0036750c == '\x01') {
      iVar6 = FUN_003675f4(*DAT_00367508,iVar4 + 8);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_003674ac;
    }
    else {
      *DAT_0036750c = '\x01';
      iVar6 = FUN_00367140(iVar4 + 8);
      if (iVar6 == 0) goto LAB_003674ac;
      FUN_00359188(iVar6,*piVar2,iVar4);
      *piVar2 = iVar6;
    }
    aiStack_58[0] = iVar7 + -1;
    *(undefined4 *)(iVar6 + iVar4 + 4) = 0;
  }
  else {
    if (iVar7 == 0) goto LAB_003674f4;
    uVar5 = FUN_00366f6c();
    if (uVar3 <= uVar5) {
      FUN_003675dc(iVar4,iVar10);
      goto LAB_003674f4;
    }
  }
  iVar7 = uVar3 + 2;
  for (pcVar8 = pcVar11; *pcVar8 != '\0' && *pcVar8 != '='; pcVar8 = pcVar8 + 1) {
    iVar7 = iVar7 + 1;
  }
  pcVar8 = (char *)FUN_00367140(iVar7);
  if (pcVar8 == (char *)0x0) {
LAB_003674ac:
    FUN_00357e54(DAT_00367504);
    return 0xffffffff;
  }
  *(char **)(*DAT_00367508 + aiStack_58[0] * 4) = pcVar8;
  while( true ) {
    cVar1 = *pcVar11;
    *pcVar8 = cVar1;
    if (cVar1 == '\0' || cVar1 == '=') break;
    pcVar11 = pcVar11 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *pcVar8 = '=';
  iVar7 = 0;
  do {
    cVar1 = *(char *)(iVar10 + iVar7);
    (pcVar8 + 1)[iVar7] = cVar1;
    iVar7 = iVar7 + 1;
  } while (cVar1 != '\0');
LAB_003674f4:
  FUN_00357e54(DAT_00367504);
  return 0;
}


// FUN_003672b4 @ 003672b4

undefined4 FUN_003672b4(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  int in_r3;
  char *pcVar11;
  undefined8 uVar12;
  int aiStack_40 [2];
  
  FUN_003672cc(6);
  uVar3 = FUN_00355948(1);
  if (0x1f < uVar3) {
    *puRam00367328 = 0x16;
    return 0xffffffff;
  }
  pcVar9 = *(code **)(iRam00367324 + uVar3 * 4);
  if (pcVar9 == (code *)0x1) {
    return 0;
  }
  if (pcVar9 != (code *)0x0) {
    *(undefined4 *)(iRam00367324 + uVar3 * 4) = 0;
    (*pcVar9)();
    return 0;
  }
  iVar7 = iRam00367324;
  uVar12 = FUN_00355948(uVar3 | 0x80);
  iVar10 = (int)((ulonglong)uVar12 >> 0x20);
  pcVar11 = (char *)uVar12;
  aiStack_40[1] = 0;
  if (((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) ||
     (aiStack_40[0] = in_r3, iVar4 = FUN_00367790(pcVar11,0x3d), iVar4 != 0)) {
    *DAT_00367510 = 0x16;
    return 0xffffffff;
  }
  FUN_00357e40(DAT_00367504);
  uVar3 = FUN_00366f6c(iVar10);
  iVar4 = FUN_00367514(pcVar11,aiStack_40);
  piVar2 = DAT_00367508;
  if (iVar4 == 0) {
    iVar7 = 1;
    for (iVar4 = 0; *(int *)(*DAT_00367508 + iVar4) != 0; iVar4 = iVar4 + 4) {
      iVar7 = iVar7 + 1;
    }
    if (*DAT_0036750c == '\x01') {
      iVar6 = FUN_003675f4(*DAT_00367508,iVar4 + 8);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_003674ac;
    }
    else {
      *DAT_0036750c = '\x01';
      iVar6 = FUN_00367140(iVar4 + 8);
      if (iVar6 == 0) goto LAB_003674ac;
      FUN_00359188(iVar6,*piVar2,iVar4);
      *piVar2 = iVar6;
    }
    aiStack_40[0] = iVar7 + -1;
    *(undefined4 *)(iVar6 + iVar4 + 4) = 0;
  }
  else {
    if (iVar7 == 0) goto LAB_003674f4;
    uVar5 = FUN_00366f6c();
    if (uVar3 <= uVar5) {
      FUN_003675dc(iVar4,iVar10);
      goto LAB_003674f4;
    }
  }
  iVar7 = uVar3 + 2;
  for (pcVar8 = pcVar11; *pcVar8 != '\0' && *pcVar8 != '='; pcVar8 = pcVar8 + 1) {
    iVar7 = iVar7 + 1;
  }
  pcVar8 = (char *)FUN_00367140(iVar7);
  if (pcVar8 == (char *)0x0) {
LAB_003674ac:
    FUN_00357e54(DAT_00367504);
    return 0xffffffff;
  }
  *(char **)(*DAT_00367508 + aiStack_40[0] * 4) = pcVar8;
  while( true ) {
    cVar1 = *pcVar11;
    *pcVar8 = cVar1;
    if (cVar1 == '\0' || cVar1 == '=') break;
    pcVar11 = pcVar11 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *pcVar8 = '=';
  iVar7 = 0;
  do {
    cVar1 = *(char *)(iVar10 + iVar7);
    (pcVar8 + 1)[iVar7] = cVar1;
    iVar7 = iVar7 + 1;
  } while (cVar1 != '\0');
LAB_003674f4:
  FUN_00357e54(DAT_00367504);
  return 0;
}


// FUN_003672cc @ 003672cc

undefined4 FUN_003672cc(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  int aiStack_38 [2];
  
  if (0x1f < param_1) {
    *puRam00367328 = 0x16;
    return 0xffffffff;
  }
  pcVar9 = *(code **)(iRam00367324 + param_1 * 4);
  if (pcVar9 == (code *)0x1) {
    return 0;
  }
  if (pcVar9 != (code *)0x0) {
    *(undefined4 *)(iRam00367324 + param_1 * 4) = 0;
    (*pcVar9)();
    return 0;
  }
  iVar7 = iRam00367324;
  uVar12 = FUN_00355948(param_1 | 0x80);
  iVar10 = (int)((ulonglong)uVar12 >> 0x20);
  pcVar11 = (char *)uVar12;
  aiStack_38[1] = 0;
  if (((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) ||
     (aiStack_38[0] = param_4, iVar3 = FUN_00367790(pcVar11,0x3d), iVar3 != 0)) {
    *DAT_00367510 = 0x16;
    return 0xffffffff;
  }
  FUN_00357e40(DAT_00367504);
  uVar4 = FUN_00366f6c(iVar10);
  iVar3 = FUN_00367514(pcVar11,aiStack_38);
  piVar2 = DAT_00367508;
  if (iVar3 == 0) {
    iVar7 = 1;
    for (iVar3 = 0; *(int *)(*DAT_00367508 + iVar3) != 0; iVar3 = iVar3 + 4) {
      iVar7 = iVar7 + 1;
    }
    if (*DAT_0036750c == '\x01') {
      iVar6 = FUN_003675f4(*DAT_00367508,iVar3 + 8);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_003674ac;
    }
    else {
      *DAT_0036750c = '\x01';
      iVar6 = FUN_00367140(iVar3 + 8);
      if (iVar6 == 0) goto LAB_003674ac;
      FUN_00359188(iVar6,*piVar2,iVar3);
      *piVar2 = iVar6;
    }
    aiStack_38[0] = iVar7 + -1;
    *(undefined4 *)(iVar6 + iVar3 + 4) = 0;
  }
  else {
    if (iVar7 == 0) goto LAB_003674f4;
    uVar5 = FUN_00366f6c();
    if (uVar4 <= uVar5) {
      FUN_003675dc(iVar3,iVar10);
      goto LAB_003674f4;
    }
  }
  iVar7 = uVar4 + 2;
  for (pcVar8 = pcVar11; *pcVar8 != '\0' && *pcVar8 != '='; pcVar8 = pcVar8 + 1) {
    iVar7 = iVar7 + 1;
  }
  pcVar8 = (char *)FUN_00367140(iVar7);
  if (pcVar8 == (char *)0x0) {
LAB_003674ac:
    FUN_00357e54(DAT_00367504);
    return 0xffffffff;
  }
  *(char **)(*DAT_00367508 + aiStack_38[0] * 4) = pcVar8;
  while( true ) {
    cVar1 = *pcVar11;
    *pcVar8 = cVar1;
    if (cVar1 == '\0' || cVar1 == '=') break;
    pcVar11 = pcVar11 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *pcVar8 = '=';
  iVar7 = 0;
  do {
    cVar1 = *(char *)(iVar10 + iVar7);
    (pcVar8 + 1)[iVar7] = cVar1;
    iVar7 = iVar7 + 1;
  } while (cVar1 != '\0');
LAB_003674f4:
  FUN_00357e54(DAT_00367504);
  return 0;
}


// FUN_0036732c @ 0036732c

undefined4 FUN_0036732c(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_28;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (local_28 = param_4, iVar3 = FUN_00367790(param_1,0x3d), iVar3 != 0)) {
    *DAT_00367510 = 0x16;
    return 0xffffffff;
  }
  FUN_00357e40(DAT_00367504);
  uVar4 = FUN_00366f6c(param_2);
  iVar3 = FUN_00367514(param_1,&local_28);
  piVar2 = DAT_00367508;
  if (iVar3 == 0) {
    iVar3 = 1;
    for (iVar8 = 0; *(int *)(*DAT_00367508 + iVar8) != 0; iVar8 = iVar8 + 4) {
      iVar3 = iVar3 + 1;
    }
    if (*DAT_0036750c == '\x01') {
      iVar6 = FUN_003675f4(*DAT_00367508,iVar8 + 8);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_003674ac;
    }
    else {
      *DAT_0036750c = '\x01';
      iVar6 = FUN_00367140(iVar8 + 8);
      if (iVar6 == 0) goto LAB_003674ac;
      FUN_00359188(iVar6,*piVar2,iVar8);
      *piVar2 = iVar6;
    }
    local_28 = iVar3 + -1;
    *(undefined4 *)(iVar6 + iVar8 + 4) = 0;
  }
  else {
    if (param_3 == 0) goto LAB_003674f4;
    uVar5 = FUN_00366f6c();
    if (uVar4 <= uVar5) {
      FUN_003675dc(iVar3,param_2);
      goto LAB_003674f4;
    }
  }
  iVar3 = uVar4 + 2;
  for (pcVar7 = param_1; *pcVar7 != '\0' && *pcVar7 != '='; pcVar7 = pcVar7 + 1) {
    iVar3 = iVar3 + 1;
  }
  pcVar7 = (char *)FUN_00367140(iVar3);
  if (pcVar7 == (char *)0x0) {
LAB_003674ac:
    FUN_00357e54(DAT_00367504);
    return 0xffffffff;
  }
  *(char **)(*DAT_00367508 + local_28 * 4) = pcVar7;
  while( true ) {
    cVar1 = *param_1;
    *pcVar7 = cVar1;
    if (cVar1 == '\0' || cVar1 == '=') break;
    param_1 = param_1 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *pcVar7 = '=';
  iVar3 = 0;
  do {
    cVar1 = *(char *)(param_2 + iVar3);
    (pcVar7 + 1)[iVar3] = cVar1;
    iVar3 = iVar3 + 1;
  } while (cVar1 != '\0');
LAB_003674f4:
  FUN_00357e54(DAT_00367504);
  return 0;
}


// FUN_00367514 @ 00367514

int FUN_00367514(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_00357e40(DAT_003675d4);
  piVar1 = DAT_003675d8;
  piVar4 = (int *)*DAT_003675d8;
  if (piVar4 != (int *)0x0) {
    for (iVar3 = 0; piVar5 = piVar4, *(char *)(param_1 + iVar3) != '\0'; iVar3 = iVar3 + 1) {
      if (*(char *)(param_1 + iVar3) == '=') goto LAB_0036759c;
    }
    for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
      iVar2 = FUN_003677fc(*piVar4,param_1,iVar3);
      if ((iVar2 == 0) && (iVar2 = *piVar4, *(char *)(iVar2 + iVar3) == '=')) {
        *param_2 = (int)piVar5 - *piVar1 >> 2;
        FUN_00357e54(DAT_003675d4);
        return iVar2 + iVar3 + 1;
      }
      piVar5 = piVar5 + 1;
    }
  }
LAB_0036759c:
  FUN_00357e54(DAT_003675d4);
  return 0;
}


// FUN_003675dc @ 003675dc

void FUN_003675dc(char *param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}


// FUN_003675f4 @ 003675f4

uint FUN_003675f4(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    uVar7 = FUN_00367140(param_2);
    return uVar7;
  }
  if (param_2 == 0) {
    FUN_00366f88(param_1);
  }
  else if (param_2 < 0xffffffec) {
    puVar4 = (uint *)(param_1 - 4);
    uVar7 = *puVar4;
    uVar6 = (param_2 + 7 & 0xfffffff8) + 8;
    if (uVar7 < uVar6) {
      FUN_00357e40(DAT_00367754);
      uVar5 = (int)puVar4 + uVar7;
      iVar1 = FUN_0036704c(param_1,uVar6);
      puVar2 = DAT_00367758;
      if (iVar1 == 0) {
        do {
          puVar3 = (uint *)*puVar2;
          if (puVar3 == (uint *)0x0) break;
          if (puVar3 == (uint *)uVar5) {
            iVar1 = *(int *)(uVar5 - 4);
            *puVar2 = *(uint *)((int)puVar4 + uVar7);
            FUN_003590fc(uVar5,0,iVar1);
            uVar7 = iVar1 + uVar7;
            *puVar4 = uVar7;
            break;
          }
          puVar2 = puVar3;
        } while (puVar3 <= param_1);
      }
      else {
        FUN_003590fc(uVar5,0,uVar6 - uVar7);
        uVar7 = uVar6;
      }
      FUN_00357e54(DAT_00367754);
    }
    if (uVar6 <= uVar7) {
      if (uVar7 - uVar6 < 8) {
        return param_1;
      }
      *(uint *)(param_1 - 4) = uVar6;
      *(uint *)(param_1 + uVar6 + -4) = uVar7 - uVar6;
      FUN_00366f88();
      return param_1;
    }
    uVar6 = FUN_00367140(param_2);
    if (uVar6 != 0) {
      FUN_00359188(uVar6,param_1,uVar7 - 4);
      FUN_00366f88(param_1);
      return uVar6;
    }
  }
  else {
    *DAT_0036775c = 0xc;
  }
  return 0;
}


// FUN_00367760 @ 00367760

void FUN_00367760(char *param_1,char *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (*param_1 != *param_2) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// FUN_00367790 @ 00367790

char * FUN_00367790(int param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  } while (cVar1 != '\0' && cVar1 != param_2);
  if (cVar1 != param_2) {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


// FUN_003677b4 @ 003677b4

int FUN_003677b4(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  for (pcVar3 = param_1; pcVar2 = param_2, *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    while (cVar1 = *pcVar2, cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      if (*pcVar3 == cVar1) goto LAB_003677f4;
    }
  }
LAB_003677f4:
  return (int)pcVar3 - (int)param_1;
}


// FUN_003677fc @ 003677fc

int FUN_003677fc(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    while( true ) {
      uVar1 = (uint)*param_1;
      if (((uVar1 == 0) || (uVar1 != *param_2)) || (param_3 == 0)) break;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    return uVar1 - *param_2;
  }
  return 0;
}


// FUN_00367844 @ 00367844

void FUN_00367844(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar2 = 0;
  if (param_3 != 0) {
    do {
      cVar1 = *param_2;
      iVar2 = param_3 + -1;
      pcVar3 = param_1 + 1;
      *param_1 = cVar1;
      param_1 = pcVar3;
      if (cVar1 == '\0') break;
      bVar4 = param_3 != 1;
      param_2 = param_2 + 1;
      param_3 = iVar2;
    } while (bVar4);
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = '\0';
    param_1 = param_1 + 1;
  }
  return;
}


// FUN_00367898 @ 00367898

int FUN_00367898(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != '\0') {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = FUN_00367790(param_1,param_2);
      param_1 = iVar1 + 1;
    } while (iVar1 != 0);
    return iVar2;
  }
  iVar1 = FUN_00367790(param_1,0);
  return iVar1;
}


// FUN_003678dc @ 003678dc

int FUN_003678dc(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  for (pcVar3 = param_1; pcVar2 = param_2, *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    do {
      cVar1 = *pcVar2;
      if (cVar1 == '\0') goto LAB_00367918;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar3 != cVar1);
  }
LAB_00367918:
  return (int)pcVar3 - (int)param_1;
}


// FUN_00367920 @ 00367920

void FUN_00367920(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  ushort *puVar19;
  int *piVar20;
  int *piVar21;
  char *local_38;
  int local_34;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  
  iVar3 = FUN_00367f0c();
  pcVar4 = (char *)FUN_00367f18(DAT_00367eb0);
  piVar21 = DAT_00367eb8;
  piVar1 = DAT_00367eb4;
  iVar15 = iVar3 + 0x30;
  iVar16 = iVar3 + 8;
  *DAT_00367eb4 = 0;
  *piVar21 = 0;
  iVar5 = DAT_00367ee0;
  uVar2 = DAT_00367ec4;
  iVar13 = DAT_00367ec0;
  piVar21 = DAT_00367ebc;
  if (pcVar4 == (char *)0x0) {
    *DAT_00367ebc = DAT_00367ee0;
    piVar21[1] = iVar5;
    FUN_00359188(iVar16,uVar2,0x28);
    FUN_00359188(iVar15,uVar2,0x28);
    return;
  }
  *DAT_00367ebc = DAT_00367ec0;
  piVar21[1] = iVar13;
  FUN_00359188(iVar16,uVar2,0x28);
  FUN_00359188(iVar15,uVar2,0x28);
  pcVar12 = pcVar4 + 1;
  if (*pcVar4 != ':') {
    pcVar12 = pcVar4;
  }
  if (*pcVar12 == '<') {
    iVar5 = FUN_003682c4(pcVar12 + 1,DAT_00367ed0,DAT_00367ecc,&local_34);
    bVar18 = SBORROW4(iVar5,1);
    iVar13 = iVar5 + -1;
    if (0 < iVar5) {
      bVar18 = SBORROW4(local_34,3);
      iVar13 = local_34 + -3;
      iVar5 = local_34;
    }
    if (iVar13 < 0 != bVar18) {
      return;
    }
    if (10 < iVar5) {
      return;
    }
    if ((pcVar12 + 1)[iVar5] != '>') {
      return;
    }
    pcVar12 = pcVar12 + 2;
  }
  else {
    iVar5 = FUN_003682c4(pcVar12,DAT_00367ec8,DAT_00367ecc,&local_34);
    bVar18 = SBORROW4(iVar5,1);
    iVar13 = iVar5 + -1;
    if (0 < iVar5) {
      bVar18 = SBORROW4(local_34,3);
      iVar13 = local_34 + -3;
      iVar5 = local_34;
    }
    if (iVar13 < 0 != bVar18) {
      return;
    }
    if (10 < iVar5) {
      return;
    }
  }
  pcVar12 = pcVar12 + iVar5;
  iVar13 = 1;
  pcVar4 = pcVar12 + 1;
  if ((*pcVar12 != '+') && (pcVar4 = pcVar12, *pcVar12 == '-')) {
    iVar13 = -1;
    pcVar4 = pcVar12 + 1;
  }
  puVar19 = &local_28;
  piVar20 = &local_34;
  local_2a = 0;
  local_28 = 0;
  puVar10 = &local_2a;
  piVar21 = piVar20;
  iVar6 = FUN_003682c4(pcVar4,DAT_00367ed4,&local_26,piVar20,puVar19,piVar20,puVar10,piVar20);
  iVar5 = DAT_00367ecc;
  if (iVar6 < 1) {
    return;
  }
  pcVar4 = pcVar4 + local_34;
  iVar13 = ((uint)local_26 * 0xe10 + (uint)local_2a + (uint)local_28 * 0x3c) * iVar13;
  if (*pcVar4 == '<') {
    pcVar12 = pcVar4 + 1;
    iVar6 = FUN_003682c4(pcVar12,DAT_00367ed0,DAT_00367ecc + 0xc,&local_34,puVar19,piVar20,puVar10,
                         piVar21);
    piVar21 = DAT_00367ebc;
    if ((0 < iVar6) || (*pcVar12 != '>')) {
      if (local_34 - 0xbU < 0xfffffff8) {
        return;
      }
      if (pcVar12[local_34] != '>') {
        return;
      }
      pcVar4 = pcVar4 + 2;
LAB_00367b9c:
      pcVar4 = pcVar4 + local_34;
      iVar5 = 1;
      if (*pcVar4 == '+') {
        pcVar4 = pcVar4 + 1;
      }
      else if (*pcVar4 == '-') {
        pcVar4 = pcVar4 + 1;
        iVar5 = -1;
      }
      local_28 = 0;
      local_26 = 0;
      local_2a = 0;
      local_34 = 0;
      iVar6 = FUN_003682c4(pcVar4,DAT_00367ed4,&local_26,&local_34,&local_28,&local_34,&local_2a,
                           &local_34);
      if (iVar6 < 1) {
        iVar5 = iVar13 + -0xe10;
      }
      else {
        iVar5 = ((uint)local_26 * 0xe10 + (uint)local_2a + (uint)local_28 * 0x3c) * iVar5;
      }
      pcVar4 = pcVar4 + local_34;
      iVar6 = 0;
      do {
        piVar1 = DAT_00367ebc;
        if (iVar6 == 0x50) {
          *(int *)(iVar3 + 0x50) = iVar5;
          *(int *)(iVar3 + 0x28) = iVar13;
          iVar13 = DAT_00367ecc + 0xc;
          *piVar1 = DAT_00367ecc;
          piVar1[1] = iVar13;
          FUN_00367f30(*(undefined4 *)(iVar3 + 4),iVar13,piVar1 + 2);
          iVar13 = *(int *)(iVar3 + 0x28);
          iVar5 = *(int *)(iVar3 + 0x50);
          *DAT_00367eb4 = iVar13;
          iVar13 = iVar13 - iVar5;
          if (iVar13 != 0) {
            iVar13 = 1;
          }
          *DAT_00367eb8 = iVar13;
          return;
        }
        pcVar12 = pcVar4 + 1;
        if (*pcVar4 != ',') {
          pcVar12 = pcVar4;
        }
        cVar14 = *pcVar12;
        if (cVar14 == 'M') {
          puVar10 = &local_2c;
          iVar7 = FUN_003682c4(pcVar12,DAT_00367ed8,puVar10,&local_34,&local_2e,&local_34,&local_30,
                               &local_34);
          if (iVar7 != 3) {
            return;
          }
          uVar8 = (uint)local_2c;
          if (uVar8 == 0) {
            return;
          }
          if (0xc < uVar8) {
            return;
          }
          uVar9 = (uint)local_2e;
          if (uVar9 == 0) {
            return;
          }
          bVar17 = 4 < uVar9;
          bVar18 = uVar9 == 5;
          if (uVar9 < 6) {
            puVar10 = (ushort *)(uint)local_30;
            bVar17 = (ushort *)0x5 < puVar10;
            bVar18 = puVar10 == (ushort *)0x6;
          }
          if (bVar17 && !bVar18) {
            return;
          }
          iVar7 = iVar3 + iVar6;
          *(uint *)(iVar7 + 0xc) = uVar8;
          *(uint *)(iVar7 + 0x10) = uVar9;
          *(ushort **)(iVar7 + 0x14) = puVar10;
          *(undefined1 *)(iVar7 + 8) = 0x4d;
          pcVar4 = pcVar12 + local_34;
        }
        else {
          if (cVar14 == 'J') {
            pcVar12 = pcVar12 + 1;
          }
          local_30 = FUN_0036834c(pcVar12,&local_38,10);
          pcVar4 = local_38;
          if (local_38 == pcVar12) {
            if (iVar6 == 0) {
              *(undefined4 *)(iVar3 + 0xc) = 3;
              *(undefined4 *)(iVar3 + 0x10) = 2;
              *(undefined4 *)(iVar3 + 0x14) = 0;
              *(undefined1 *)(iVar3 + 8) = 0x4d;
            }
            else {
              *(undefined4 *)(iVar3 + 0x34) = 0xb;
              *(undefined4 *)(iVar3 + 0x38) = 1;
              *(undefined4 *)(iVar3 + 0x3c) = 0;
              *(undefined1 *)(iVar3 + 0x30) = 0x4d;
            }
          }
          else {
            if (cVar14 != 'J') {
              cVar14 = 'D';
            }
            *(char *)(iVar3 + iVar6 + 8) = cVar14;
            *(uint *)(iVar3 + iVar6 + 0x14) = (uint)local_30;
          }
        }
        uVar8 = 2;
        uVar11 = 0;
        local_28 = 0;
        local_26 = 2;
        local_2a = 0;
        local_34 = 0;
        uVar9 = 0;
        if (*pcVar4 == '/') {
          iVar7 = FUN_003682c4(pcVar4,DAT_00367edc,&local_26,&local_34,&local_28,&local_34,&local_2a
                               ,&local_34);
          uVar2 = DAT_00367ec4;
          if (iVar7 < 1) {
            FUN_00359188(iVar16,DAT_00367ec4,0x28);
            FUN_00359188(iVar15,uVar2,0x28);
            return;
          }
          uVar8 = (uint)local_26;
          uVar9 = (uint)local_28;
          uVar11 = (uint)local_2a;
        }
        pcVar4 = pcVar4 + local_34;
        iVar7 = iVar3 + iVar6;
        iVar6 = iVar6 + 0x28;
        *(uint *)(iVar7 + 0x18) = uVar8 * 0xe10 + uVar11 + uVar9 * 0x3c;
      } while( true );
    }
    *DAT_00367ebc = iVar5;
    piVar21[1] = iVar5;
  }
  else {
    iVar6 = FUN_003682c4(pcVar4,DAT_00367ec8,DAT_00367ecc + 0xc,&local_34,puVar19,piVar20,puVar10,
                         piVar21);
    piVar21 = DAT_00367ebc;
    if (0 < iVar6) {
      if (local_34 - 0xbU < 0xfffffff8) {
        return;
      }
      goto LAB_00367b9c;
    }
    *DAT_00367ebc = iVar5;
    piVar21[1] = iVar5;
  }
  *(int *)(iVar3 + 0x28) = iVar13;
  *piVar1 = iVar13;
  return;
}


// FUN_00367ee4 @ 00367ee4

void FUN_00367ee4(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00367f08;
  FUN_00357e40(DAT_00367f08);
  FUN_00367920();
  FUN_00357e54(uVar1);
  return;
}


// FUN_00367f0c @ 00367f0c

undefined4 FUN_00367f0c(void)

{
  return DAT_00367f14;
}


// FUN_00367f18 @ 00367f18

void FUN_00367f18(undefined4 param_1)

{
  FUN_00367514(param_1,&stack0xfffffff4);
  return;
}


// FUN_00367f30 @ 00367f30

undefined4 FUN_00367f30(uint param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar2 = (uint *)FUN_00367f0c();
  uVar3 = 0;
  if (0x7b1 < (int)param_1) {
    puVar2[1] = param_1;
    iVar4 = FUN_00369d30(param_1 - 0x76d,100);
    iVar5 = FUN_00369d30(param_1 - 0x641,400);
    iVar5 = ((param_1 * 0x16d + (param_1 - 0x7b1 >> 2)) - iVar4) + iVar5;
    iVar4 = iVar5 + DAT_0036814c;
    iVar5 = iVar5 + DAT_00368150;
    for (iVar11 = 0; iVar11 != 2; iVar11 = iVar11 + 1) {
      if ((char)puVar2[iVar11 * 10 + 2] == 'D') {
        iVar8 = puVar2[iVar11 * 10 + 5] + iVar5;
      }
      else if ((char)puVar2[iVar11 * 10 + 2] == 'J') {
        uVar6 = puVar2[iVar11 * 10 + 5];
        uVar7 = FUN_00368158(param_1);
        if (uVar7 != 0) {
          uVar7 = 1;
        }
        iVar8 = iVar4 + uVar6 + (uVar7 & 0x3b < (int)uVar6);
      }
      else {
        iVar8 = FUN_00368158(param_1);
        uVar6 = puVar2[iVar11 * 10 + 3];
        iVar9 = DAT_00368154 + iVar8 * 0xc;
        iVar8 = 0;
        iVar10 = iVar5;
        while (iVar8 + 1 < (int)uVar6) {
          iVar10 = iVar10 + (uint)*(byte *)(iVar9 + iVar8);
          iVar8 = iVar8 + 1;
        }
        FUN_00369db0(iVar10 + 4,7);
        iVar8 = puVar2[iVar11 * 10 + 5] - extraout_r1;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 7;
        }
        if ((int)uVar6 < 2) {
          uVar6 = 1;
        }
        iVar8 = iVar8 + puVar2[iVar11 * 10 + 4] * 7;
        uVar6 = *(byte *)(iVar9 + uVar6 + -1) - 1;
        if ((int)(iVar8 - 7U) < (int)uVar6) {
          uVar6 = iVar8 - 7U;
        }
        FUN_0036a1a4(~uVar6 + iVar8,7);
        iVar8 = iVar8 + (extraout_r1_00 - (~uVar6 + iVar8)) + iVar10 + -7;
      }
      uVar7 = puVar2[iVar11 * 10 + 10];
      lVar1 = (longlong)iVar8 * 0x15180 + (longlong)(int)puVar2[iVar11 * 10 + 6];
      uVar6 = (uint)lVar1;
      puVar2[iVar11 * 10 + 8] = uVar6 + uVar7;
      puVar2[iVar11 * 10 + 9] =
           (int)((ulonglong)lVar1 >> 0x20) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar6,uVar7);
    }
    uVar6 = puVar2[0x13];
    uVar7 = puVar2[9];
    uVar3 = 1;
    *puVar2 = (uint)((int)(uVar7 - (uVar6 + (puVar2[8] < puVar2[0x12]))) < 0 !=
                    (SBORROW4(uVar7,uVar6) !=
                    SBORROW4(uVar7 - uVar6,(uint)(puVar2[8] < puVar2[0x12]))));
  }
  return uVar3;
}


// FUN_00368158 @ 00368158

uint FUN_00368158(uint param_1)

{
  uint extraout_r1;
  int extraout_r1_00;
  uint uVar1;
  
  if ((param_1 & 3) != 0) {
    return 0;
  }
  FUN_0036a1a4(param_1,100);
  uVar1 = extraout_r1;
  if (extraout_r1 != 0) {
    uVar1 = 1;
  }
  FUN_0036a1a4(param_1,400);
  return uVar1 | extraout_r1_00 == 0;
}


// FUN_003681a4 @ 003681a4

void FUN_003681a4(void)

{
  FUN_00368498();
  return;
}


// FUN_003681d4 @ 003681d4

void FUN_003681d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00368498(*DAT_00368214,param_1,&local_c,param_4,&local_c);
  return;
}


// FUN_00368218 @ 00368218

void FUN_00368218(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 *local_18;
  undefined4 local_4;
  
  local_18 = &local_4;
  local_1c = 0;
  local_20 = 0;
  local_2c = 0;
  local_30 = 0;
  local_38 = 0;
  local_34 = DAT_003682a4;
  local_36 = 2;
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = param_1 + param_2 + -1;
  }
  if (param_2 < 0) {
    local_24 = (undefined1 *)0x0;
  }
  local_28 = param_1;
  local_4 = param_4;
  FUN_00368498(&local_38,param_3);
  if (param_2 != 0) {
    *local_28 = 0;
  }
  return;
}


// FUN_003682c4 @ 003682c4

void FUN_003682c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined3 local_34;
  undefined1 uStack_31;
  undefined4 local_30;
  
  local_30 = 0;
  _local_34 = CONCAT13((char)((uint)param_3 >> 0x18),0x10000);
  FUN_00368dfc(&local_34);
  return;
}


// FUN_0036834c @ 0036834c

uint FUN_0036834c(byte *param_1,undefined4 *param_2,uint param_3)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar8;
  bool bVar9;
  byte *pbVar7;
  
  puVar4 = DAT_00368494;
  if ((0x24 < param_3) || (pbVar6 = param_1, param_3 == 1)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    *puVar4 = 0x16;
    return 0;
  }
  do {
    do {
      pbVar7 = pbVar6;
      pbVar6 = pbVar7 + 1;
      uVar5 = (uint)*pbVar7;
    } while (uVar5 == 0x20);
  } while (0xfffffffa < uVar5 - 0xe);
  if (uVar5 == 0x2b) {
    bVar2 = false;
  }
  else {
    if (uVar5 != 0x2d) {
      bVar2 = false;
      goto LAB_003683c4;
    }
    bVar2 = true;
  }
  uVar5 = (uint)*pbVar6;
  pbVar6 = pbVar7 + 2;
LAB_003683c4:
  bVar3 = false;
  if (uVar5 == 0x30) {
    uVar5 = 0xffffffef;
    bVar9 = (param_3 & 0xffffffef) == 0;
    if (bVar9) {
      uVar5 = *pbVar6 & 0xdf;
    }
    if (bVar9 && uVar5 == 0x58) {
      uVar5 = (uint)pbVar6[1];
      param_3 = 0x10;
      param_1 = pbVar6;
      pbVar6 = pbVar6 + 2;
    }
    else {
      uVar5 = 0x30;
      if (param_3 == 0) {
        param_3 = 8;
      }
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar8 = 0;
  while( true ) {
    if (0x39 < uVar5) {
      uVar5 = (uVar5 - 1 | 0x20) - 0x26;
    }
    uVar5 = uVar5 - 0x30;
    if (param_3 <= uVar5) break;
    uVar1 = (ulonglong)uVar8;
    uVar8 = (uint)(param_3 * uVar1);
    if ((int)(param_3 * uVar1 >> 0x20) == 0) {
      bVar9 = CARRY4(uVar8,uVar5);
      uVar8 = uVar8 + uVar5;
      if (bVar9) {
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
    uVar5 = (uint)*pbVar6;
    param_1 = pbVar6;
    pbVar6 = pbVar6 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (bVar2) {
    uVar8 = -uVar8;
  }
  if (bVar3) {
    uVar8 = 0xffffffff;
    *DAT_00368494 = 0x22;
  }
  return uVar8;
}


// FUN_00368498 @ 00368498

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00368ac4) */
/* WARNING: Removing unreachable block (ram,0x00368acc) */
/* WARNING: Removing unreachable block (ram,0x00368ad0) */

byte * FUN_00368498(int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 *puVar16;
  code *pcVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  bool bVar22;
  byte *local_54;
  uint local_50;
  uint *local_44;
  undefined1 auStack_3b [23];
  
  if ((*(byte *)(param_1 + 2) & 2) == 0) {
    return (byte *)0xffffffff;
  }
  pcVar17 = *(code **)(param_1 + 4);
  pbVar19 = (byte *)0x0;
  local_44 = param_3;
LAB_003684d4:
  pbVar9 = param_2 + 1;
  bVar2 = *param_2;
  if (bVar2 == 0x25) {
    uVar15 = (uint)param_2[1];
    param_2 = param_2 + 2;
    if (uVar15 != 0x25) {
      uVar18 = 0;
      pbVar21 = (byte *)0x0;
      pbVar10 = (byte *)0x0;
LAB_00368530:
      pbVar11 = pbVar10;
      if (uVar18 < 0x20) {
        pbVar9 = (byte *)(uVar15 - 0x27);
        switch(pbVar9) {
        case (byte *)0x0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x1:
        case (byte *)0x2:
        case (byte *)0x3:
        case (byte *)0x5:
        case (byte *)0x7:
        case (byte *)0x8:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x9:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar15 == 0x20) {
          uVar18 = uVar18 | 4;
        }
        else {
          if (uVar15 != 0x23) goto LAB_00368588;
          uVar18 = uVar18 | 0x10;
        }
        goto LAB_003686b8;
      }
      if (uVar18 < 0x80) {
LAB_00368588:
        pbVar9 = (byte *)(uVar15 - 0x30);
        if (pbVar9 < (byte *)0xa) {
          if (uVar18 < 0x40) {
            uVar18 = uVar18 | 0x20;
            pbVar21 = pbVar9 + (int)pbVar21 * 10;
          }
          else {
            pbVar11 = pbVar9 + (int)pbVar10 * 10;
          }
          goto LAB_003686b8;
        }
        if (uVar15 == 0x7a) goto LAB_003686b8;
        if (uVar15 == 0x2e) {
          if (0x3f < uVar18) {
            return pbVar19;
          }
          uVar18 = uVar18 | 0x40;
          goto LAB_003686b8;
        }
        if (uVar15 != 0x4c) {
          if (uVar15 == 0x68) goto LAB_00368684;
          if (uVar15 == 0x6a) goto LAB_0036866c;
          if (uVar15 == 0x6c) goto LAB_00368694;
          if (uVar15 != 0x74) {
            if (uVar15 == 0x2a) {
              puVar6 = local_44 + 1;
              pbVar9 = (byte *)*local_44;
              pbVar11 = pbVar9;
              local_44 = puVar6;
              if (uVar18 < 0x40) {
                if (pbVar9 == (byte *)0xffffffff || (int)(pbVar9 + 1) < 0 != SCARRY4((int)pbVar9,1))
                {
                  uVar18 = uVar18 | 0x28;
                  pbVar11 = pbVar10;
                  pbVar21 = (byte *)-(int)pbVar9;
                }
                else {
                  uVar18 = uVar18 | 0x20;
                  pbVar11 = pbVar10;
                  pbVar21 = pbVar9;
                }
              }
              goto LAB_003686b8;
            }
            goto LAB_003686c8;
          }
          goto LAB_003686b8;
        }
      }
      else if (uVar15 != 0x4c) {
        if (uVar15 == 0x68) {
LAB_00368684:
          uVar18 = uVar18 | (uVar18 & 0x100) << 1 | 0x100;
        }
        else {
          if (uVar15 == 0x6a) goto LAB_0036866c;
          if (uVar15 == 0x7a || uVar15 == 0x74) goto LAB_003686b8;
          if (uVar15 != 0x6c) goto LAB_003686c8;
LAB_00368694:
          uVar18 = uVar18 | (uVar18 & 0x80) << 2 | 0x80;
        }
        goto LAB_003686b8;
      }
LAB_0036866c:
      uVar18 = uVar18 | 0x280;
LAB_003686b8:
      pbVar14 = param_2 + 1;
      uVar15 = (uint)*param_2;
      pbVar10 = pbVar11;
      param_2 = pbVar14;
      if (uVar15 == 0) goto code_r0x003686c4;
      goto LAB_00368530;
    }
  }
  else {
    param_2 = pbVar9;
    if (bVar2 == 0) {
      return pbVar19;
    }
  }
  iVar3 = (*pcVar17)(bVar2,param_1);
  pbVar19 = pbVar19 + 1;
  goto LAB_00368510;
code_r0x003686c4:
  uVar15 = 0;
LAB_003686c8:
  uVar4 = uVar15 | 0x20;
  bVar22 = 0x60 < uVar4;
  if (uVar4 != 0x61) {
    pbVar9 = (byte *)(uVar4 - 0x65);
    bVar22 = (byte *)0x1 < pbVar9;
  }
  if (!bVar22 || (uVar4 == 0x61 || pbVar9 == (byte *)0x2)) {
    pbVar9 = (byte *)0x7;
    if ((int)pbVar10 < 0) {
      uVar18 = uVar18 & 0xffffffbf;
    }
    puVar16 = DAT_00368cc0;
    local_44 = (uint *)(((int)local_44 + 7U & 0xfffffff8) + 8);
LAB_00368704:
    pbVar10 = pbVar21;
    if ((uVar18 & 8) == 0) {
      iVar3 = 0;
      pbVar10 = pbVar9;
      if (pbVar21 < pbVar9) {
        pbVar10 = pbVar21;
      }
      for (; pbVar9 < pbVar21 + iVar3; iVar3 = iVar3 + -1) {
        iVar5 = (*pcVar17)(0x20,param_1);
        if (iVar5 < 0) goto LAB_00368ca0;
      }
      pbVar19 = pbVar19 + -iVar3;
    }
    pbVar19 = pbVar9 + (int)pbVar19;
    iVar3 = (int)pbVar10 - (int)pbVar9;
    while (pbVar9 != (byte *)0x0) {
      iVar5 = (*pcVar17)(*puVar16,param_1);
      pbVar9 = pbVar9 + -1;
      puVar16 = puVar16 + 1;
      if (iVar5 < 0) goto LAB_00368ca0;
    }
    goto LAB_00368c38;
  }
  switch(uVar15) {
  case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x71:
  case 0x72:
  case 0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar15 == 0x69 || uVar15 == 100) {
    if ((int)pbVar10 < 0) {
      uVar18 = uVar18 & 0xffffffbf;
    }
    if ((uVar18 & 0x80) == 0) {
      uVar20 = *local_44;
      if ((uVar18 & 0x100) == 0) {
LAB_00368874:
        local_44 = local_44 + 1;
        uVar13 = (int)uVar20 >> 0x1f;
      }
      else {
        if ((uVar18 & 0x200) == 0) {
          iVar3 = uVar20 << 0x10;
          uVar20 = iVar3 >> 0x10;
        }
        else {
          iVar3 = uVar20 << 0x18;
          uVar20 = iVar3 >> 0x18;
        }
        uVar13 = iVar3 >> 0x1f;
        local_44 = local_44 + 1;
      }
    }
    else {
      if ((uVar18 & 0x200) == 0) {
        uVar20 = *local_44;
        goto LAB_00368874;
      }
      puVar6 = (uint *)((int)local_44 + 7U & 0xfffffff8);
      uVar13 = puVar6[1];
      local_44 = puVar6 + 2;
      uVar20 = *puVar6;
    }
    uVar1 = (int)uVar13 >> 0x1f;
    uVar4 = uVar18;
    if ((int)uVar13 < 0) {
      uVar4 = uVar18 | 0x400;
    }
    uVar4 = uVar4 & 0xffffffef;
    if (((uVar20 != 0 || uVar13 != 0) || (0 < (int)pbVar10)) || (uVar12 = 0, (uVar18 & 0x40) == 0))
    {
      iVar3 = FUN_00368cc4((uVar20 ^ uVar1) - uVar1,
                           (uVar13 ^ uVar1) - (uVar1 + ((uVar20 ^ uVar1) < uVar1)),auStack_3b + 1,10
                          );
      uVar12 = iVar3 - (int)(auStack_3b + 1);
    }
  }
  else {
    if (uVar15 == 99) {
      pbVar9 = (byte *)0x1;
      puVar16 = auStack_3b + 1;
      if ((int)pbVar10 < 0) {
        uVar18 = uVar18 & 0xffffffbf;
      }
      auStack_3b[1] = (char)*local_44;
      local_44 = local_44 + 1;
      goto LAB_00368704;
    }
    if (uVar4 != 0x78) {
      iVar3 = (*pcVar17)(0x25,param_1);
      if (iVar3 < 0) goto LAB_00368ca0;
      iVar3 = (*pcVar17)(uVar15,param_1);
      pbVar19 = pbVar19 + 2;
LAB_00368510:
      if (iVar3 < 0) {
LAB_00368ca0:
        *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
        return (byte *)0xffffffff;
      }
      goto LAB_003684d4;
    }
    if ((int)pbVar10 < 0) {
      uVar18 = uVar18 & 0xffffffbf;
    }
    uVar4 = uVar18 & 0xfff9;
    if ((uVar18 & 0x80) == 0) {
      puVar6 = local_44 + 1;
      uVar12 = *local_44;
      uVar20 = 0;
      local_44 = puVar6;
      if ((uVar18 & 0x100) != 0) {
        if ((uVar18 & 0x200) == 0) {
          uVar12 = uVar12 & 0xffff;
        }
        else {
          uVar12 = uVar12 & 0xff;
        }
      }
    }
    else if ((uVar18 & 0x200) == 0) {
      uVar12 = *local_44;
      uVar20 = 0;
      local_44 = local_44 + 1;
    }
    else {
      puVar6 = (uint *)((int)local_44 + 7U & 0xfffffff8);
      uVar20 = puVar6[1];
      uVar12 = *puVar6;
      local_44 = puVar6 + 2;
    }
    if (((uVar12 == 0 && uVar20 == 0) && (uVar4 = uVar18 & 0xffffffe9, (int)pbVar10 < 1)) &&
       ((uVar18 & 0x40) != 0)) {
      uVar12 = 0;
      uVar4 = uVar18 & 0xffe9;
    }
    else {
      iVar3 = FUN_00368cc4(uVar12,uVar20,auStack_3b + 1,0x88 - uVar15);
      uVar12 = iVar3 - (int)(auStack_3b + 1);
    }
  }
  local_50 = (uint)pbVar10 & ~((int)pbVar10 >> 0x1f);
  uVar18 = uVar12;
  if ((((uVar4 & 0x40) != 0) && ((int)uVar12 < (int)local_50)) && (uVar18 = local_50, uVar15 == 0))
  {
    uVar4 = uVar4 & 0xffffffee;
  }
  if ((uVar4 & 0x10) == 0) {
    uVar20 = uVar4 & 0x406;
    if (uVar20 != 0) {
      uVar20 = 1;
    }
  }
  else {
    uVar20 = 2;
    if (uVar15 == 0) {
      uVar20 = 1;
    }
  }
  local_54 = (byte *)(uVar20 + uVar18);
  if ((uVar4 & 8) == 0) {
    iVar3 = 0;
    pbVar9 = local_54;
    if ((int)local_54 < (int)pbVar21) {
      pbVar9 = pbVar21;
    }
    for (; (int)(local_54 + iVar3) < (int)pbVar21; iVar3 = iVar3 + 1) {
      iVar5 = (*pcVar17)(0x20,param_1);
      if (iVar5 < 0) goto LAB_00368ca0;
    }
    pbVar19 = pbVar19 + iVar3;
    local_54 = pbVar9;
  }
  if ((uVar4 & 0x10) == 0) {
    if ((uVar4 & 0x406) != 0) {
      uVar7 = 0x20;
      if ((uVar4 & 0x400) != 0) {
        uVar7 = 0x2d;
      }
      iVar3 = (*pcVar17)(uVar7,param_1);
      if (iVar3 < 0) goto LAB_00368ca0;
LAB_00368bac:
      pbVar19 = pbVar19 + 1;
    }
  }
  else {
    iVar3 = (*pcVar17)(0x30,param_1);
    if (iVar3 < 0) goto LAB_00368ca0;
    if (uVar15 == 0) goto LAB_00368bac;
    iVar3 = (*pcVar17)(uVar15,param_1);
    if (iVar3 < 0) goto LAB_00368ca0;
    pbVar19 = pbVar19 + 2;
  }
  iVar3 = (int)pbVar21 - (int)local_54;
  for (; (int)uVar12 < (int)local_50; local_50 = local_50 - 1) {
    iVar5 = (*pcVar17)(0x30,param_1);
    if (iVar5 < 0) goto LAB_00368ca0;
    pbVar19 = pbVar19 + 1;
  }
  iVar5 = 0;
  while (-iVar5 != uVar12) {
    iVar8 = (*pcVar17)(auStack_3b[iVar5 + uVar12],param_1);
    iVar5 = iVar5 + -1;
    if (iVar8 < 0) goto LAB_00368ca0;
  }
  pbVar19 = pbVar19 + -iVar5;
LAB_00368c38:
  while (0 < iVar3) {
    iVar5 = (*pcVar17)(0x20,param_1);
    pbVar19 = pbVar19 + 1;
    iVar3 = iVar3 + -1;
    if (iVar5 == -1 || iVar5 + 1 < 0 != SCARRY4(iVar5,1)) goto LAB_00368ca0;
  }
  goto LAB_003684d4;
}


// FUN_00368cc4 @ 00368cc4

void FUN_00368cc4(uint param_1,uint param_2,char *param_3,byte param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  do {
    if ((param_4 & 0x1f) == 0x10) {
      uVar3 = param_1 & 0xf;
      uVar1 = param_1 >> 4 | param_2 << 0x1c;
      param_2 = param_2 >> 4;
LAB_00368da0:
      bVar2 = (byte)uVar3;
      param_1 = uVar1;
      if (9 < (uVar3 & 0xff)) {
        bVar2 = (bVar2 - param_4) + 0x37;
      }
    }
    else {
      if ((param_4 & 0x1f) != 8) {
        uVar1 = (uint)((byte)param_2 & 1) << 0x1f | param_1 >> 1;
        uVar3 = param_1 >> 2 | param_2 << 0x1e;
        uVar4 = uVar1 + uVar3;
        uVar1 = (param_2 >> 1) + (param_2 >> 2) + (uint)CARRY4(uVar1,uVar3);
        uVar5 = uVar4 >> 4 | uVar1 * 0x10000000;
        uVar3 = uVar5 + uVar4;
        uVar1 = (uVar1 >> 4) + uVar1 + (uint)CARRY4(uVar5,uVar4);
        uVar5 = uVar3 >> 8 | uVar1 * 0x1000000;
        uVar4 = uVar5 + uVar3;
        uVar1 = (uVar1 >> 8) + uVar1 + (uint)CARRY4(uVar5,uVar3);
        uVar5 = uVar4 >> 0x10 | uVar1 * 0x10000;
        uVar3 = uVar5 + uVar4;
        uVar1 = (uVar1 >> 0x10) + uVar1 + (uint)CARRY4(uVar5,uVar4);
        param_2 = uVar1 + CARRY4(uVar1,uVar3);
        uVar1 = uVar1 + uVar3 >> 3 | param_2 * 0x20000000;
        param_2 = param_2 >> 3;
        uVar3 = uVar1 * 0xf6 + param_1;
        bVar6 = 0xfffffffe < uVar1;
        if (9 < (uVar3 & 0xfe)) {
          uVar3 = uVar3 - 10;
          uVar1 = uVar1 + 1;
          param_2 = param_2 + bVar6;
        }
        goto LAB_00368da0;
      }
      uVar1 = param_2 << 0x1d;
      bVar2 = (byte)param_1 & 7;
      param_2 = param_2 >> 3;
      param_1 = param_1 >> 3 | uVar1;
    }
    *param_3 = bVar2 + 0x30;
    param_3 = param_3 + 1;
    if (param_1 == 0 && param_2 == 0) {
      return;
    }
  } while( true );
}


// FUN_00368dfc @ 00368dfc

uint FUN_00368dfc(int param_1,byte *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r1;
  byte *pbVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  byte bVar21;
  bool bVar22;
  undefined8 uVar23;
  uint local_34;
  undefined4 *local_2c;
  undefined4 local_28;
  
  local_28 = 0;
  local_34 = 0;
  uVar13 = 0;
  local_2c = param_3;
  do {
    while( true ) {
      while( true ) {
        pbVar16 = param_2 + 1;
        uVar15 = (uint)*param_2;
        if (uVar15 == 0) goto LAB_00369424;
        if ((uVar15 != 0x20) && (uVar15 - 0xe < 0xfffffffb)) break;
        FUN_00369438(param_1,&local_28);
        uVar13 = local_28;
        param_2 = pbVar16;
      }
      if (uVar15 != 0x25) break;
      bVar5 = param_2[1];
      if (bVar5 == 0x2a) {
        bVar5 = param_2[2];
        pbVar16 = param_2 + 3;
        uVar15 = 1;
      }
      else {
        pbVar16 = param_2 + 2;
        if (bVar5 == 0x25) break;
        uVar15 = 0;
      }
      iVar20 = 0;
      uVar14 = uVar15;
      while ((byte)(bVar5 - 0x30) < 10) {
        iVar20 = (uint)(byte)(bVar5 - 0x30) + iVar20 * 10;
        bVar5 = *pbVar16;
        uVar14 = uVar15 | 2;
        pbVar16 = pbVar16 + 1;
      }
      iVar7 = 1;
      uVar15 = uVar14 | 0xc;
      pbVar12 = pbVar16;
      if (bVar5 == 0x4c) {
LAB_00368f44:
        bVar5 = *pbVar12;
        pbVar16 = pbVar16 + iVar7;
      }
      else {
        if (bVar5 == 0x68) {
          bVar5 = *pbVar16;
          if (bVar5 != 0x68) {
            pbVar16 = pbVar16 + 1;
            uVar15 = uVar14 | 0x20;
            goto LAB_00368f4c;
          }
          uVar15 = uVar14 | 0x30;
LAB_00368f3c:
          iVar7 = 2;
          pbVar12 = pbVar16 + 1;
          goto LAB_00368f44;
        }
        if (bVar5 == 0x6a) {
          uVar15 = uVar14 | 8;
          goto LAB_00368f44;
        }
        if (bVar5 == 0x6c) {
          bVar5 = *pbVar16;
          if (bVar5 == 0x6c) goto LAB_00368f3c;
          pbVar16 = pbVar16 + 1;
          uVar15 = uVar14 | 4;
        }
        else {
          uVar15 = uVar14;
          if ((bVar5 == 0x74) || (bVar5 == 0x7a)) goto LAB_00368f44;
        }
      }
LAB_00368f4c:
      if ((bVar5 == 0) || (iVar7 = FUN_00367790(DAT_00369434,bVar5), iVar7 == 0)) goto LAB_00369424;
      uVar8 = uVar15 & 1;
      puVar17 = (undefined1 *)0x0;
      if (uVar8 == 0) {
        puVar17 = (undefined1 *)*local_2c;
        local_2c = local_2c + 1;
      }
      if (bVar5 == 0x6e) {
        FUN_003694d0(puVar17,uVar8,uVar13,0,uVar15);
        param_2 = pbVar16;
      }
      else {
        if (bVar5 == 0x5b) {
          bVar22 = false;
          bVar5 = *pbVar16;
          if ((uVar14 & 2) == 0) {
            iVar20 = -1;
          }
          pbVar12 = pbVar16 + 1;
          if (bVar5 != 0x5e) {
            pbVar12 = pbVar16;
          }
LAB_00369068:
          iVar7 = FUN_00369498(param_1,&local_28);
          bVar21 = 0;
          uVar15 = 0;
          pbVar16 = pbVar12;
          do {
            pbVar9 = pbVar16 + 2;
            bVar3 = false;
            do {
              uVar14 = (uint)*pbVar16;
              if (uVar14 == 0) goto LAB_003693f8;
              if (pbVar16 == pbVar12) {
LAB_003690c8:
                pbVar9 = pbVar16 + 1;
                if (!bVar3) {
                  uVar15 = uVar14;
                }
                break;
              }
              if (uVar14 != 0x2d) {
                if (uVar14 != 0x5d) goto LAB_003690c8;
                if (iVar7 < 0) {
LAB_003693dc:
                  puVar18 = puVar17;
                  if (!bVar22) goto LAB_003693f8;
                }
                else {
                  if (!(bool)(bVar5 == 0x5e ^ bVar21)) {
                    FUN_003694bc(iVar7,param_1,&local_28);
                    goto LAB_003693dc;
                  }
                  bVar22 = true;
                  if (puVar17 == (undefined1 *)0x0) {
                    puVar18 = (undefined1 *)0x0;
                  }
                  else {
                    puVar18 = puVar17 + 1;
                    *puVar17 = (char)iVar7;
                  }
                  iVar20 = iVar20 + -1;
                  puVar17 = puVar18;
                  if (iVar20 != 0) goto LAB_00369068;
                }
                pbVar16 = pbVar16 + 1;
                if (puVar18 != (undefined1 *)0x0) {
                  *puVar18 = 0;
                }
                goto LAB_003693bc;
              }
              bVar2 = !bVar3;
              bVar3 = true;
              pbVar16 = pbVar16 + 1;
            } while (bVar2);
            bVar21 = (iVar7 <= (int)uVar14 && (int)uVar15 <= iVar7) | bVar21;
            uVar15 = uVar14;
            pbVar16 = pbVar9;
          } while( true );
        }
        if (bVar5 == 99) {
          if ((uVar14 & 2) == 0) {
            iVar20 = -1;
          }
          if ((uVar15 & 2) == 0) {
            iVar20 = 1;
          }
          do {
            iVar7 = FUN_00369498(param_1,&local_28);
            if (iVar7 < 0) goto LAB_00369408;
            if (puVar17 == (undefined1 *)0x0) {
              puVar18 = (undefined1 *)0x0;
            }
            else {
              puVar18 = puVar17 + 1;
              *puVar17 = (char)iVar7;
            }
            iVar20 = iVar20 + -1;
            puVar17 = puVar18;
          } while (iVar20 != 0);
        }
        else {
          if ((uVar14 & 2) == 0) {
            iVar20 = -1;
          }
          iVar7 = FUN_00369438(param_1,&local_28);
          if (iVar7 < 0) goto LAB_00369408;
          if (bVar5 == 100) {
LAB_003691d8:
            uVar14 = 10;
            uVar19 = 10;
          }
          else if (bVar5 == 0x69) {
            uVar19 = 0;
            uVar14 = 10;
          }
          else if (bVar5 == 0x6f) {
            uVar14 = 8;
            uVar19 = 8;
          }
          else {
            if (bVar5 == 0x75) goto LAB_003691d8;
            if (bVar5 == 0x73) {
              do {
                iVar7 = FUN_00369498(param_1,&local_28);
                puVar18 = puVar17;
                if (iVar7 < 0) break;
                if ((iVar7 - 9U < 0x18) && ((1 << (iVar7 - 9U & 0xff) & 0x80001fU) != 0)) {
                  FUN_003694bc(iVar7,param_1,&local_28);
                  break;
                }
                if (puVar17 == (undefined1 *)0x0) {
                  puVar18 = (undefined1 *)0x0;
                }
                else {
                  puVar18 = puVar17 + 1;
                  *puVar17 = (char)iVar7;
                }
                iVar20 = iVar20 + -1;
                puVar17 = puVar18;
              } while (iVar20 != 0);
              if (puVar18 != (undefined1 *)0x0) {
                *puVar18 = 0;
              }
              goto LAB_003693bc;
            }
            uVar14 = 0x10;
            uVar19 = 0x10;
          }
          uVar23 = FUN_00369498(param_1,&local_28);
          if ((int)uVar23 == 0x2b) {
LAB_00369224:
            iVar20 = iVar20 + -1;
            if ((iVar20 != 0) && (uVar23 = FUN_00369498(param_1,&local_28), -1 < (int)uVar23))
            goto LAB_00369240;
LAB_003693f8:
            if ((*(byte *)(param_1 + 2) & 0xc) != 0) {
LAB_00369408:
              if ((local_34 & 0xff) != 0) {
                return local_34 & 0xff;
              }
              return 0xffffffff;
            }
            goto LAB_00369424;
          }
          if ((int)uVar23 == 0x2d) {
            uVar15 = uVar15 | 0x40;
            goto LAB_00369224;
          }
LAB_00369240:
          uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
          uVar6 = (uint)uVar23;
          iVar7 = iVar20;
          if (uVar6 != 0x30) goto LAB_00369298;
          iVar7 = iVar20 + -1;
          uVar11 = uVar15;
          if (iVar7 == 0) {
LAB_00369380:
            uVar1 = 0;
          }
          else {
            uVar23 = FUN_00369498(param_1,&local_28);
            uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
            uVar6 = (uint)uVar23;
            if ((int)uVar6 < 0) goto LAB_00369380;
            bVar22 = (uVar19 & 10) == 0;
            uVar15 = uVar15 | 0x80;
            if (bVar22) {
              uVar10 = uVar6 & 0x7fffffdf;
            }
            if (bVar22 && uVar10 == 0x58) {
              uVar11 = uVar15;
              if (iVar20 + -2 != 0) {
                uVar23 = FUN_00369498(param_1,&local_28);
                uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
                uVar6 = (uint)uVar23;
                if (-1 < (int)uVar6) {
                  uVar14 = 0x10;
                  iVar7 = iVar20 + -2;
                  goto LAB_00369298;
                }
              }
              goto LAB_00369380;
            }
            uVar14 = uVar19;
            if ((uVar19 & 0x12) == 0) {
              uVar14 = 8;
            }
LAB_00369298:
            uVar11 = uVar15 | 0x80;
            uVar1 = 0;
            do {
              uVar10 = uVar6 - 1 | 0x20;
              uVar19 = uVar6;
              if (0x39 < uVar6) {
                uVar19 = uVar10 - 0x26;
              }
              if (uVar14 <= uVar19 - 0x30) {
                FUN_003694bc(uVar6,param_1,&local_28);
                uVar10 = extraout_r1;
                uVar11 = uVar15;
                break;
              }
              iVar7 = iVar7 + -1;
              uVar1 = (ulonglong)uVar14 * (uVar1 & 0xffffffff) +
                      CONCAT44((int)(uVar1 >> 0x20) * uVar14,uVar19 - 0x30);
              if (iVar7 == 0) goto LAB_00369388;
              uVar23 = FUN_00369498(param_1,&local_28);
              uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
              uVar6 = (uint)uVar23;
              uVar15 = uVar11;
            } while (uVar6 != 0xffffffff && (int)(uVar6 + 1) < 0 == SCARRY4(uVar6,1));
            if ((uVar11 & 0x80) == 0) goto LAB_003693f8;
          }
LAB_00369388:
          uVar4 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
          if ((uVar11 & 0x40) == 0) {
            uVar4 = uVar1;
          }
          FUN_003694d0(puVar17,uVar10,(int)uVar4,(int)(uVar4 >> 0x20),uVar11);
        }
LAB_003693bc:
        local_34 = (uVar8 ^ 1) + local_34;
        uVar13 = local_28;
        param_2 = pbVar16;
      }
    }
    uVar14 = FUN_00369498(param_1,&local_28);
    if ((int)uVar14 < 0) goto LAB_00369408;
    uVar13 = local_28;
    param_2 = pbVar16;
  } while (uVar15 == (uVar14 & 0xff));
  FUN_003694bc(uVar14,param_1,&local_28);
LAB_00369424:
  return local_34 & 0xff;
}


// FUN_00369438 @ 00369438

int FUN_00369438(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    iVar1 = FUN_00369498(param_1,param_2);
    if (iVar1 < 0) {
      return iVar1;
    }
  } while ((iVar1 - 9U < 0x18) && ((1 << (iVar1 - 9U & 0xff) & 0x80001fU) != 0));
  FUN_003694bc(iVar1,param_1,param_2);
  return iVar1;
}


// FUN_00369498 @ 00369498

void FUN_00369498(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00369510();
  if (-1 < iVar1) {
    *param_2 = *param_2 + 1;
  }
  return;
}


// FUN_003694bc @ 003694bc

uint FUN_003694bc(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  
  if (-1 < (int)param_1) {
    *param_3 = *param_3 + -1;
  }
  uVar2 = param_2;
  if (param_1 != 0xffffffff) {
    uVar2 = (uint)*(byte *)(param_2 + 2);
    unaff_r5 = param_2;
  }
  uVar3 = 0xffffffff;
  if (param_1 != 0xffffffff && (uVar2 & 1) != 0) {
    iVar1 = FUN_003695e4(unaff_r5,0,(param_1 & 0xff) + 1);
    if (iVar1 != 0) {
      *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) & 0xf7;
      uVar3 = param_1 & 0xff;
    }
  }
  return uVar3;
}


// FUN_003694d0 @ 003694d0

void FUN_003694d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((param_5 & 0x10) != 0) {
    *(char *)param_1 = (char)param_3;
    return;
  }
  if ((param_5 & 8) != 0) {
    *param_1 = param_3;
    param_1[1] = param_4;
    return;
  }
  if (((param_5 & 4) == 0) && ((param_5 & 0x20) != 0)) {
    *(short *)param_1 = (short)param_3;
    return;
  }
  *param_1 = param_3;
  return;
}


// FUN_00369510 @ 00369510

uint FUN_00369510(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 2) | 4;
LAB_0036952c:
    *(byte *)(param_1 + 2) = bVar1;
    return 0xffffffff;
  }
  iVar2 = FUN_00369584(param_1,0);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(param_1 + 8))(param_1);
    if (uVar3 == 0xffffffff || (int)(uVar3 + 1) < 0 != SCARRY4(uVar3,1)) {
      bVar1 = 8;
      if (uVar3 == 0xffffffff) {
        bVar1 = 4;
      }
      bVar1 = *(byte *)(param_1 + 2) | bVar1;
      goto LAB_0036952c;
    }
  }
  else {
    uVar3 = iVar2 - 1;
  }
  return uVar3 & 0xff;
}


// FUN_00369584 @ 00369584

undefined2 FUN_00369584(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}


// FUN_003695e4 @ 003695e4

bool FUN_003695e4(ushort *param_1,uint param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == param_2) {
    *param_1 = param_3;
  }
  return uVar1 == param_2;
}


// FUN_00369600 @ 00369600

uint FUN_00369600(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar4 = param_1 & 0x7fffffff;
  uVar3 = param_2 & 0x7fffffff;
  uVar1 = 0x80800000;
  bVar10 = DAT_00369890 <= uVar4 + 0x80800000;
  if (bVar10) {
    uVar1 = uVar3 + 0x80800000;
  }
  if (!bVar10 || uVar1 < DAT_00369890) {
    if (0x7f800000 < uVar4) {
      return param_1 | 0x400000;
    }
    if (0x7f800000 < uVar3) {
      return param_2 | 0x400000;
    }
    if (uVar4 == 0x7f800000) {
      if ((param_2 ^ param_1) == 0x80000000) {
        return 0x7fc00000;
      }
      return param_1;
    }
    if (uVar3 == 0x7f800000) {
      return param_2;
    }
    if (uVar4 == 0) {
      if (uVar3 != 0) {
        return param_2;
      }
      return param_2 & param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  iVar8 = 0x20;
  iVar7 = 0x20;
  uVar5 = 0;
  uVar6 = param_1;
  uVar1 = param_2;
  if (uVar4 < uVar3) {
    uVar6 = param_2;
    uVar1 = param_1;
  }
  param_2 = param_2 ^ param_1;
  uVar3 = uVar6 & DAT_00369894;
  uVar9 = uVar1 & DAT_00369894;
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar3 != 0) {
    iVar8 = LZCOUNT(uVar3);
  }
  uVar2 = uVar1 >> 0x17 & 0xff;
  uVar1 = 0;
  if (uVar4 == 0) {
    uVar1 = iVar8 - 8;
    uVar4 = 9 - iVar8;
  }
  if (uVar9 != 0) {
    iVar7 = LZCOUNT(uVar9);
  }
  if (uVar2 == 0) {
    uVar5 = iVar7 - 8;
    uVar2 = 9 - iVar7;
  }
  uVar9 = (uVar9 << (uVar5 & 0xff)) << 3 | 0x4000000;
  uVar2 = uVar4 - uVar2;
  uVar5 = uVar9;
  if (((uVar2 != 0) && (uVar5 = 1, uVar2 < 0x20)) &&
     (uVar5 = uVar9 >> (uVar2 & 0xff), uVar9 << (0x20 - uVar2 & 0xff) != 0)) {
    uVar5 = uVar9 >> (uVar2 & 0xff) | 1;
  }
  uVar1 = (uVar3 << (uVar1 & 0xff)) << 3 | 0x4000000;
  uVar6 = uVar6 & 0x80000000;
  if (param_2 == 0xffffffff || (int)(param_2 + 1) < 0 != SCARRY4(param_2,1)) {
    if (uVar1 == uVar5) {
      return 0;
    }
    uVar1 = uVar1 - uVar5;
    if (0x3ffffff < uVar1) goto LAB_00369760;
    if (uVar1 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = LZCOUNT(uVar1);
    }
    uVar4 = uVar4 - (iVar7 - 5U);
    uVar1 = uVar1 << (iVar7 - 5U & 0xff);
  }
  else {
    uVar1 = uVar5 + uVar1;
    if ((uVar1 & 0x8000000) != 0) {
      uVar4 = uVar4 + 1;
      uVar1 = uVar5 & 1 | uVar1 >> 1;
    }
LAB_00369760:
    if (0xfe < (int)uVar4) {
      return uVar6 | 0x7f800000;
    }
  }
  uVar3 = uVar1;
  if ((int)uVar4 < 1) {
    uVar9 = uVar4 + 0x1f;
    uVar5 = 1 - uVar4;
    uVar4 = 0;
    uVar3 = uVar1 >> (uVar5 & 0xff);
    if (uVar1 << (uVar9 & 0xff) != 0) {
      uVar3 = uVar1 >> (uVar5 & 0xff) | 1;
    }
  }
  uVar1 = uVar3 & 7;
  uVar4 = DAT_00369894 & uVar3 >> 3 | uVar4 << 0x17 | uVar6;
  iVar7 = FUN_00369b80();
  if (iVar7 == 2) {
    uVar3 = uVar1;
    if (uVar1 != 0) {
      uVar3 = 1;
    }
    uVar6 = uVar6 == 0 & uVar3;
LAB_00369850:
    uVar5 = uVar4 + uVar6;
  }
  else {
    if (iVar7 == 1) {
      uVar3 = uVar1;
      if (uVar1 != 0) {
        uVar3 = 1;
      }
      if (uVar6 != 0) {
        uVar6 = 1;
      }
      uVar6 = uVar6 & uVar3;
      goto LAB_00369850;
    }
    uVar5 = uVar4;
    if (iVar7 == 0) {
      if (4 < uVar1) {
        uVar5 = uVar4 + 1;
      }
      if (uVar1 == 4) {
        uVar5 = uVar4 + (uVar3 >> 3 & 1);
        goto LAB_0036986c;
      }
    }
  }
  if (uVar1 == 0) {
    return uVar5;
  }
LAB_0036986c:
  FUN_00369b88();
  return uVar5;
}


// FUN_00369898 @ 00369898

uint FUN_00369898(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_r7;
  uint uVar10;
  int unaff_r8;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar11 = param_2 >> 0x17 & 0xff;
  uVar5 = param_1 >> 0x17 & 0xff;
  uVar7 = uVar5 - 0xff;
  bVar13 = 0xffffff01 < uVar7;
  bVar12 = uVar7 == 0xffffff02;
  uVar7 = param_1 & DAT_00369a88;
  if (bVar13) {
    unaff_r7 = uVar11 - 0xff;
    unaff_r8 = 0;
  }
  uVar6 = param_2 & DAT_00369a88;
  uVar2 = (param_2 ^ param_1) & 0x80000000;
  if (bVar13) {
    bVar12 = unaff_r7 == 0xffffff01;
  }
  if ((!bVar13 || unaff_r7 < 0xffffff01) || bVar12) {
    uVar8 = param_1 & 0x7fffffff;
    if (0x7f800000 < uVar8) {
      return param_1 | 0x400000;
    }
    uVar4 = param_2 & 0x7fffffff;
    if (0x7f800000 < uVar4) {
      return param_2 | 0x400000;
    }
    if (uVar8 == 0x7f800000) {
      if (uVar4 == 0x7f800000) {
        uVar2 = 0x7fc00000;
      }
      else {
        uVar2 = uVar2 | 0x7f800000;
      }
      return uVar2;
    }
    if (uVar4 == 0x7f800000) {
      return uVar2;
    }
    if (uVar8 == 0) {
      if (uVar4 == 0) {
        uVar2 = 0x7fc00000;
      }
      return uVar2;
    }
    if (uVar4 == 0) {
      return uVar2 | 0x7f800000;
    }
    uVar10 = 0;
    unaff_r8 = 0;
    if (uVar7 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = LZCOUNT(uVar7);
    }
    if (uVar8 < 0x800000) {
      uVar10 = iVar3 - 8;
      unaff_r8 = 9 - iVar3;
    }
    uVar7 = uVar7 << (uVar10 & 0xff);
    if (uVar4 >> 0x17 == 0) {
      if (uVar6 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = LZCOUNT(uVar6);
      }
      uVar6 = uVar6 << (iVar3 - 8U & 0xff);
      unaff_r8 = iVar3 + unaff_r8 + -9;
    }
  }
  uVar6 = uVar6 | 0x800000;
  uVar8 = uVar6 << 8;
  uVar4 = DAT_00369a8c + uVar6 * -0x100;
  lVar1 = (ulonglong)uVar4 * (ulonglong)(uint)-(int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20);
  uVar4 = (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
  lVar1 = (ulonglong)(uint)-(int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20) * (ulonglong)uVar4;
  uVar4 = (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
  lVar1 = (ulonglong)(uint)-(int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20) * (ulonglong)uVar4;
  uVar4 = uVar7 | 0x800000;
  uVar8 = (uint)((ulonglong)(uVar4 << 1) *
                 (ulonglong)(((uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1) - 0xc) >>
                0x20);
  iVar3 = unaff_r8 + (uVar5 - uVar11);
  if (uVar8 >> 0x18 == 0) {
    iVar3 = iVar3 + 0x7e;
    iVar9 = uVar7 * 0x1000000 - uVar6 * uVar8;
    uVar4 = uVar4 << 1;
  }
  else {
    uVar8 = uVar8 >> 1;
    iVar3 = iVar3 + 0x7f;
    iVar9 = uVar7 * 0x800000 - uVar8 * uVar6;
  }
  if (iVar3 < 0xff) {
    if (iVar3 < 1) {
      if (iVar3 == -0x18 || iVar3 + 0x18 < 0 != SCARRY4(iVar3,0x18)) {
        return uVar2;
      }
      uVar8 = uVar8 >> (1U - iVar3 & 0xff);
      iVar9 = (uVar4 << (iVar3 + 0x17U & 0xff)) + uVar6 * uVar8 * -2;
    }
    else {
      uVar8 = uVar8 & DAT_00369a88 | iVar3 << 0x17;
      iVar9 = iVar9 << 1;
    }
    if (uVar6 < (uVar8 & 1) + iVar9) {
      uVar8 = uVar8 + 1;
    }
    return uVar8 | uVar2;
  }
  return uVar2 | 0x7f800000;
}


// FUN_00369a90 @ 00369a90

uint FUN_00369a90(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = -1;
  uVar3 = param_1 >> 0x17 & 0xff;
  if (param_1 != 0xffffffff && (int)(param_1 + 1) < 0 == SCARRY4(param_1,1)) {
    iVar2 = 1;
  }
  uVar1 = 0;
  if (0x7e < uVar3) {
    if (0xffffffdf < uVar3 - 0x9f) {
      uVar1 = param_1 & DAT_00369b00 | 0x800000;
      if (uVar3 < 0x96) {
        uVar1 = uVar1 >> (0x96 - uVar3 & 0xff);
      }
      else {
        uVar1 = uVar1 << (uVar3 - 0x96 & 0xff);
      }
      return uVar1 * iVar2;
    }
    uVar1 = (int)param_1 >> 0x1f ^ 0x7fffffff;
  }
  return uVar1;
}


// FUN_00369b04 @ 00369b04

uint FUN_00369b04(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = param_1 & 0x80000000;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  iVar1 = LZCOUNT(param_1);
  if (param_1 >> 0x18 == 0) {
    uVar2 = param_1 << (iVar1 - 8U & 0xff) ^ 0x800000;
  }
  else {
    uVar2 = param_1 >> (8U - iVar1 & 0xff) ^ 0x800000;
    if (0x80000000 < param_1 << iVar1 + 0x18) {
      uVar2 = uVar2 + 1;
    }
    if (param_1 << iVar1 + 0x18 == -0x80000000) {
      uVar2 = uVar2 + (uVar2 & 1);
    }
  }
  return uVar2 + iVar1 * -0x800000 + 0x4f000000 | uVar3;
}


// FUN_00369b80 @ 00369b80

undefined4 FUN_00369b80(void)

{
  return 0;
}


// FUN_00369b88 @ 00369b88

undefined4 FUN_00369b88(void)

{
  return 0;
}


// FUN_00369b90 @ 00369b90

uint FUN_00369b90(uint param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r7;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  uVar5 = param_2 >> 0x17 & 0xff;
  uVar8 = param_1 >> 0x17 & 0xff;
  uVar9 = uVar8 - 0xff;
  bVar14 = 0xffffff01 < uVar9;
  bVar13 = uVar9 == 0xffffff02;
  uVar12 = param_1 & DAT_00369d2c;
  if (bVar14) {
    unaff_r7 = uVar5 - 0xff;
    uVar9 = 0;
  }
  uVar7 = param_2 & DAT_00369d2c;
  uVar2 = (param_2 ^ param_1) & 0x80000000;
  if (bVar14) {
    bVar13 = unaff_r7 == 0xffffff01;
  }
  if ((bVar14 && 0xffffff00 < unaff_r7) && !bVar13) {
LAB_00369c8c:
    iVar3 = uVar8 + uVar5 + uVar9;
    uVar1 = (ulonglong)(uVar12 | 0x800000) * (ulonglong)(uVar7 << 8 | 0x80000000);
    iVar6 = iVar3 + -0x7f;
    if ((uVar1 & 0x80000000000000) == 0) {
      uVar1 = uVar1 * 2;
    }
    else {
      iVar6 = iVar3 + -0x7e;
    }
    uVar5 = (uint)(uVar1 >> 0x20);
    uVar12 = (uint)uVar1;
    if (0xfe < iVar6) {
      return uVar2 | 0x7f800000;
    }
    if (iVar6 < 1) {
      uVar8 = 1 - iVar6;
      if (0x1f < uVar8) {
        return uVar2;
      }
      iVar3 = uVar12 << (iVar6 + 0x1fU & 0xff);
      uVar9 = uVar5 >> (uVar8 & 0xff);
      uVar12 = uVar5 << (iVar6 + 0x1fU & 0xff) | uVar12 >> (uVar8 & 0xff);
      if (iVar3 != 0) {
        uVar12 = uVar12 | 1;
      }
    }
    else {
      uVar9 = uVar5 & DAT_00369d2c | iVar6 << 0x17;
    }
    uVar2 = uVar9 | uVar2;
    if (uVar12 < 0x80000001) {
      if (uVar12 == 0x80000000) {
        uVar2 = uVar2 + (uVar9 & 1);
      }
      return uVar2;
    }
    return uVar2 + 1;
  }
  uVar10 = param_1 & 0x7fffffff;
  if (0x7f800000 < uVar10) {
    return param_1 | 0x400000;
  }
  uVar4 = param_2 & 0x7fffffff;
  if (0x7f800000 < uVar4) {
    return param_2 | 0x400000;
  }
  if (uVar10 == 0x7f800000) {
    if (uVar4 != 0) {
      return uVar2 | 0x7f800000;
    }
  }
  else {
    if (uVar4 != 0x7f800000) {
      if (uVar10 == 0 || uVar4 == 0) {
        return uVar2;
      }
      uVar11 = 0;
      if (uVar12 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = LZCOUNT(uVar12);
      }
      uVar9 = 0;
      if (uVar10 < 0x800000) {
        uVar11 = iVar3 - 8;
        uVar9 = 9 - iVar3;
      }
      uVar12 = uVar12 << (uVar11 & 0xff);
      if (uVar4 >> 0x17 == 0) {
        if (uVar7 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = LZCOUNT(uVar7);
        }
        uVar7 = uVar7 << (iVar3 - 8U & 0xff);
        uVar9 = (uVar9 - iVar3) + 9;
      }
      goto LAB_00369c8c;
    }
    if (uVar10 != 0) {
      return uVar2 | 0x7f800000;
    }
  }
  return 0x7fc00000;
}


// FUN_00369d30 @ 00369d30

uint FUN_00369d30(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0x20;
  iVar3 = 0x20;
  if (param_2 != 0) {
    uVar2 = LZCOUNT(param_2);
  }
  if (param_1 != 0) {
    iVar3 = LZCOUNT(param_1);
  }
  uVar4 = uVar2 - iVar3;
  uVar1 = 0;
  if (uVar4 < 0x20) {
    if (uVar4 == 0x1f) {
      return param_1;
    }
    iVar3 = ~uVar2 + iVar3;
    uVar2 = param_1 << ((uVar4 ^ 0x1f) & 0xff);
    uVar1 = 0;
    param_1 = param_1 >> (uVar4 + 1 & 0xff);
    do {
      param_1 = param_1 << 1 | uVar2 >> 0x1f;
      uVar2 = uVar1 | uVar2 << 1;
      uVar1 = ~param_1;
      if ((int)(uVar1 + param_2) < 0) {
        param_1 = param_1 - param_2;
      }
      uVar1 = uVar1 + param_2 >> 0x1f;
      bVar5 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar5);
    uVar1 = uVar1 | uVar2 << 1;
  }
  return uVar1;
}


// FUN_00369db0 @ 00369db0

void FUN_00369db0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00369dcc(param_1,param_2,local_8);
  return;
}


// FUN_00369dcc @ 00369dcc

int FUN_00369dcc(uint param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_1c;
  
  uVar2 = (int)param_1 >> 0x1f;
  uVar1 = FUN_00369e24((param_1 ^ uVar2) - uVar2,
                       (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f),&local_1c);
  *param_3 = (local_1c ^ uVar2) - uVar2;
  uVar2 = (int)(param_2 ^ param_1) >> 0x1f;
  return (uVar1 ^ uVar2) - uVar2;
}


// FUN_00369e24 @ 00369e24

void FUN_00369e24(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00369d30();
  *param_3 = param_1 - iVar1 * param_2;
  return;
}


// FUN_00369e4c @ 00369e4c

void FUN_00369e4c(void)

{
  FUN_00369e70();
  return;
}


// FUN_00369e70 @ 00369e70

undefined8 FUN_00369e70(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_18;
  uint local_14;
  
  uVar1 = (int)param_4 >> 0x1f;
  uVar2 = (int)param_2 >> 0x1f;
  uVar3 = FUN_00369ef0((param_1 ^ uVar2) - uVar2,
                       (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),
                       (param_3 ^ uVar1) - uVar1,
                       (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1)),&local_18);
  *param_5 = (local_18 ^ uVar2) - uVar2;
  param_5[1] = (local_14 ^ uVar2) - (uVar2 + ((local_18 ^ uVar2) < uVar2));
  uVar2 = (int)(param_4 ^ param_2) >> 0x1f;
  uVar1 = (uint)uVar3 ^ uVar2;
  return CONCAT44(((uint)((ulonglong)uVar3 >> 0x20) ^ uVar2) - (uVar2 + (uVar1 < uVar2)),
                  uVar1 - uVar2);
}


// FUN_00369ef0 @ 00369ef0

undefined8 FUN_00369ef0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r7;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      uVar11 = FUN_00369d30(param_1,param_3);
      uVar10 = (uint)uVar11;
      if (param_5 != (uint *)0x0) {
        uVar11 = (ulonglong)(uVar10 * param_3);
      }
      param_2 = 0;
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1 - (int)uVar11;
        param_5[1] = (uint)(uVar11 >> 0x20);
      }
      goto LAB_0036a174;
    }
    if (param_5 != (uint *)0x0) {
      param_2 = 0;
      *param_5 = param_1;
      param_5[1] = 0;
      uVar10 = 0;
      goto LAB_0036a174;
    }
LAB_00369fa8:
    param_2 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = param_1;
    if (param_3 == 0) {
      if (param_4 == 0) goto LAB_0036a174;
      if (param_1 == 0) {
        lVar12 = FUN_00369d30(param_2,param_4);
        uVar10 = (uint)lVar12;
        if (param_5 != (uint *)0x0) {
          lVar12 = (ulonglong)(param_2 - uVar10 * param_4) << 0x20;
        }
        param_2 = 0;
        if (param_5 != (uint *)0x0) {
          *(longlong *)param_5 = lVar12;
        }
        goto LAB_0036a174;
      }
      uVar10 = param_4 - 1;
      if ((param_4 & uVar10) == 0) {
        if (param_5 != (uint *)0x0) {
          unaff_r7 = uVar10 & param_2;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = param_1;
          param_5[1] = unaff_r7;
        }
        uVar10 = param_2 >> (0x20U - LZCOUNT(uVar10 & ~param_4) & 0xff);
        param_2 = 0;
        goto LAB_0036a174;
      }
      uVar6 = LZCOUNT(param_4) - LZCOUNT(param_2);
      if (0x1e < uVar6) goto LAB_00369f34;
      uVar10 = uVar6 + 1;
      uVar9 = 0;
      uVar8 = param_2 >> (uVar10 & 0xff);
      uVar4 = param_1 << ((uVar6 ^ 0x1f) & 0xff);
      param_2 = param_2 << ((uVar6 ^ 0x1f) & 0xff) | param_1 >> (uVar10 & 0xff);
    }
    else {
      if (param_4 == 0) {
        uVar4 = param_3 - 1;
        if ((param_3 & uVar4) == 0) {
          if (param_5 != (uint *)0x0) {
            *param_5 = uVar4 & param_1;
            param_5[1] = 0;
          }
          if (param_3 != 1) {
            iVar1 = param_2 << 1;
            uVar10 = 0x20 - LZCOUNT(uVar4 & ~param_3);
            param_2 = param_2 >> (uVar10 & 0xff);
            uVar10 = iVar1 << (~uVar10 & 0x1f) | param_1 >> (uVar10 & 0x1f);
          }
          goto LAB_0036a174;
        }
        uVar10 = (LZCOUNT(param_3) - LZCOUNT(param_2)) + 0x21;
        if (uVar10 == 0x20) goto LAB_0036a070;
        if (0x1f < uVar10) {
          uVar6 = (LZCOUNT(param_3) - LZCOUNT(param_2)) + 1;
          uVar8 = 0;
          uVar4 = param_2 << (0x40 - uVar10 & 0xff);
          param_2 = param_2 >> (uVar6 & 0xff);
          uVar9 = param_1 << (0x40 - uVar10 & 0xff);
          uVar4 = uVar4 | param_1 >> (uVar6 & 0xff);
          goto LAB_0036a104;
        }
        uVar4 = 0x20 - uVar10;
      }
      else {
        uVar4 = LZCOUNT(param_4) - LZCOUNT(param_2);
        if (0x1f < uVar4) {
LAB_00369f34:
          if (param_5 != (uint *)0x0) {
            *param_5 = param_1;
            param_5[1] = param_2;
          }
          goto LAB_00369fa8;
        }
        uVar10 = uVar4 + 1;
        if (uVar10 == 0x20) {
LAB_0036a070:
          uVar9 = 0;
          uVar10 = 0x20;
          uVar8 = 0;
          uVar4 = param_1;
          goto LAB_0036a104;
        }
        uVar4 = uVar4 ^ 0x1f;
      }
      uVar9 = 0;
      uVar8 = param_2 >> (uVar10 & 0xff);
      param_2 = param_2 << (uVar4 & 0xff) | param_1 >> (uVar10 & 0xff);
      uVar4 = param_1 << (uVar4 & 0xff);
    }
LAB_0036a104:
    uVar6 = 0;
    uVar7 = param_2;
    do {
      uVar5 = uVar7 << 1 | uVar4 >> 0x1f;
      uVar2 = uVar8 << 1 | uVar7 >> 0x1f;
      uVar3 = ~uVar2 + param_4 + (uint)CARRY4(~uVar5,param_3);
      uVar7 = uVar5 - param_3;
      uVar8 = uVar2 - (param_4 + (uVar5 < param_3));
      if (-1 < (int)uVar3) {
        uVar7 = uVar5;
        uVar8 = uVar2;
      }
      uVar3 = uVar3 >> 0x1f;
      uVar2 = uVar9 << 1;
      uVar5 = uVar6 | uVar2;
      uVar10 = uVar10 - 1;
      uVar4 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar6 = uVar3;
      uVar9 = uVar5;
    } while (uVar10 != 0);
    param_2 = uVar2 >> 0x1f | uVar4 << 1;
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar7;
      param_5[1] = uVar8;
    }
    uVar10 = uVar3 | uVar5 << 1;
  }
LAB_0036a174:
  return CONCAT44(param_2,uVar10);
}


// FUN_0036a1a4 @ 0036a1a4

void FUN_0036a1a4(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00369e24(param_1,param_2,local_8);
  return;
}


// FUN_0036a1c0 @ 0036a1c0

void FUN_0036a1c0(void)

{
  FUN_00369ef0();
  return;
}


