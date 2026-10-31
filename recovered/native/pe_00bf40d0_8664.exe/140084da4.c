/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140084da4 */

uint FUN_140084da4(uint param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
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
  int iVar21;
  
  uVar6 = param_1 & 0xffff;
  uVar1 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar5 = (param_1 & 0xffff) + (uint)*param_2;
    uVar6 = uVar5 - 0xfff1;
    if (uVar5 < 0xfff1) {
      uVar6 = uVar5;
    }
    uVar3 = (uVar1 + uVar6) * 0x10000;
    uVar5 = uVar3 + 0xf0000;
    if (uVar1 + uVar6 < 0xfff1) {
      uVar5 = uVar3;
    }
    return uVar5 | uVar6;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        uVar6 = uVar6 + param_2[uVar2];
        uVar1 = uVar1 + uVar6;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
    uVar5 = uVar6 - 0xfff1;
    if (uVar6 < 0xfff1) {
      uVar5 = uVar6;
    }
    return (uVar1 % 0xfff1) * 0x10000 | uVar5;
  }
  if (param_3 < 0x15b0) {
LAB_140084f7a:
    do {
      param_3 = param_3 - 0x10;
      iVar7 = *param_2 + uVar6;
      iVar15 = (uint)param_2[1] + iVar7;
      iVar8 = (uint)param_2[2] + iVar15;
      iVar16 = (uint)param_2[3] + iVar8;
      iVar9 = (uint)param_2[4] + iVar16;
      iVar17 = (uint)param_2[5] + iVar9;
      iVar10 = (uint)param_2[6] + iVar17;
      iVar18 = (uint)param_2[7] + iVar10;
      iVar11 = (uint)param_2[8] + iVar18;
      iVar19 = (uint)param_2[9] + iVar11;
      iVar12 = (uint)param_2[10] + iVar19;
      iVar20 = (uint)param_2[0xb] + iVar12;
      iVar13 = (uint)param_2[0xc] + iVar20;
      iVar21 = (uint)param_2[0xd] + iVar13;
      iVar14 = (uint)param_2[0xe] + iVar21;
      uVar6 = (uint)param_2[0xf] + iVar14;
      uVar1 = uVar1 + iVar7 + iVar15 + iVar8 + iVar16 + iVar9 + iVar17 + iVar10 + iVar18 + iVar11 +
              iVar19 + iVar12 + iVar20 + iVar13 + iVar21 + iVar14 + uVar6;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_140085030;
  }
  else {
    do {
      uVar2 = param_3;
      lVar4 = 0;
      do {
        iVar14 = param_2[lVar4] + uVar6;
        iVar7 = (uint)param_2[lVar4 + 1] + iVar14;
        iVar15 = (uint)param_2[lVar4 + 2] + iVar7;
        iVar8 = (uint)param_2[lVar4 + 3] + iVar15;
        iVar16 = (uint)param_2[lVar4 + 4] + iVar8;
        iVar9 = (uint)param_2[lVar4 + 5] + iVar16;
        iVar17 = (uint)param_2[lVar4 + 6] + iVar9;
        iVar10 = (uint)param_2[lVar4 + 7] + iVar17;
        iVar18 = (uint)param_2[lVar4 + 8] + iVar10;
        iVar11 = (uint)param_2[lVar4 + 9] + iVar18;
        iVar19 = (uint)param_2[lVar4 + 10] + iVar11;
        iVar12 = (uint)param_2[lVar4 + 0xb] + iVar19;
        iVar20 = (uint)param_2[lVar4 + 0xc] + iVar12;
        iVar13 = (uint)param_2[lVar4 + 0xd] + iVar20;
        iVar21 = (uint)param_2[lVar4 + 0xe] + iVar13;
        uVar6 = (uint)param_2[lVar4 + 0xf] + iVar21;
        uVar1 = uVar1 + iVar14 + iVar7 + iVar15 + iVar8 + iVar16 + iVar9 + iVar17 + iVar10 + iVar18
                + iVar11 + iVar19 + iVar12 + iVar20 + iVar13 + iVar21 + uVar6;
        lVar4 = lVar4 + 0x10;
      } while ((int)lVar4 != 0x15b0);
      param_3 = uVar2 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      uVar6 = uVar6 % 0xfff1;
      uVar1 = uVar1 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_140085070;
    if (0x15bf < (longlong)uVar2) goto LAB_140084f7a;
LAB_140085030:
    uVar2 = 0;
    do {
      uVar6 = uVar6 + param_2[uVar2];
      uVar1 = uVar1 + uVar6;
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  uVar6 = uVar6 % 0xfff1;
  uVar1 = uVar1 % 0xfff1;
LAB_140085070:
  return uVar1 << 0x10 | uVar6;
}

