/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180237edc */

uint FUN_180237edc(uint param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  uVar5 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar5 = uVar5 + *param_2;
    uVar2 = uVar5 - 0xfff1;
    if (uVar5 < 0xfff1) {
      uVar2 = uVar5;
    }
    uVar3 = (param_1 + uVar2) * 0x10000;
    uVar5 = uVar3 + 0xf0000;
    if (param_1 + uVar2 < 0xfff1) {
      uVar5 = uVar3;
    }
    return uVar5 | uVar2;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        uVar5 = uVar5 + param_2[uVar1];
        param_1 = param_1 + uVar5;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
    }
    uVar2 = uVar5 - 0xfff1;
    if (uVar5 < 0xfff1) {
      uVar2 = uVar5;
    }
    return (param_1 % 0xfff1) * 0x10000 | uVar2;
  }
  if (param_3 < 0x15b0) {
LAB_1802380b2:
    do {
      param_3 = param_3 - 0x10;
      iVar6 = *param_2 + uVar5;
      iVar14 = (uint)param_2[1] + iVar6;
      iVar7 = (uint)param_2[2] + iVar14;
      iVar15 = (uint)param_2[3] + iVar7;
      iVar8 = (uint)param_2[4] + iVar15;
      iVar16 = (uint)param_2[5] + iVar8;
      iVar9 = (uint)param_2[6] + iVar16;
      iVar17 = (uint)param_2[7] + iVar9;
      iVar10 = (uint)param_2[8] + iVar17;
      iVar18 = (uint)param_2[9] + iVar10;
      iVar11 = (uint)param_2[10] + iVar18;
      iVar19 = (uint)param_2[0xb] + iVar11;
      iVar12 = (uint)param_2[0xc] + iVar19;
      iVar20 = (uint)param_2[0xd] + iVar12;
      iVar13 = (uint)param_2[0xe] + iVar20;
      uVar5 = (uint)param_2[0xf] + iVar13;
      param_1 = param_1 + iVar6 + iVar14 + iVar7 + iVar15 + iVar8 + iVar16 + iVar9 + iVar17 + iVar10
                + iVar18 + iVar11 + iVar19 + iVar12 + iVar20 + iVar13 + uVar5;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_180238168;
  }
  else {
    do {
      uVar1 = param_3;
      lVar4 = 0;
      do {
        iVar13 = param_2[lVar4] + uVar5;
        iVar6 = (uint)param_2[lVar4 + 1] + iVar13;
        iVar14 = (uint)param_2[lVar4 + 2] + iVar6;
        iVar7 = (uint)param_2[lVar4 + 3] + iVar14;
        iVar15 = (uint)param_2[lVar4 + 4] + iVar7;
        iVar8 = (uint)param_2[lVar4 + 5] + iVar15;
        iVar16 = (uint)param_2[lVar4 + 6] + iVar8;
        iVar9 = (uint)param_2[lVar4 + 7] + iVar16;
        iVar17 = (uint)param_2[lVar4 + 8] + iVar9;
        iVar10 = (uint)param_2[lVar4 + 9] + iVar17;
        iVar18 = (uint)param_2[lVar4 + 10] + iVar10;
        iVar11 = (uint)param_2[lVar4 + 0xb] + iVar18;
        iVar19 = (uint)param_2[lVar4 + 0xc] + iVar11;
        iVar12 = (uint)param_2[lVar4 + 0xd] + iVar19;
        iVar20 = (uint)param_2[lVar4 + 0xe] + iVar12;
        uVar5 = (uint)param_2[lVar4 + 0xf] + iVar20;
        param_1 = param_1 + iVar13 + iVar6 + iVar14 + iVar7 + iVar15 + iVar8 + iVar16 + iVar9 +
                  iVar17 + iVar10 + iVar18 + iVar11 + iVar19 + iVar12 + iVar20 + uVar5;
        lVar4 = lVar4 + 0x10;
      } while ((int)lVar4 != 0x15b0);
      param_3 = uVar1 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      uVar5 = uVar5 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_1802381a8;
    if (0x15bf < (longlong)uVar1) goto LAB_1802380b2;
LAB_180238168:
    uVar1 = 0;
    do {
      uVar5 = uVar5 + param_2[uVar1];
      param_1 = param_1 + uVar5;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  uVar5 = uVar5 % 0xfff1;
  param_1 = param_1 % 0xfff1;
LAB_1802381a8:
  return param_1 << 0x10 | uVar5;
}

