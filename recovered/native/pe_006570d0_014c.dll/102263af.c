/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102263af */

uint __fastcall thunk_FUN_10226ed9(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  uVar12 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar12 = uVar12 + *param_2;
    uVar1 = uVar12 - 0xfff1;
    if (uVar12 < 0xfff1) {
      uVar1 = uVar12;
    }
    uVar11 = (param_1 + uVar1) * 0x10000;
    uVar12 = uVar11 + 0xf0000;
    if (param_1 + uVar1 < 0xfff1) {
      uVar12 = uVar11;
    }
    return uVar12 | uVar1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        uVar12 = uVar12 + param_2[uVar1];
        param_1 = param_1 + uVar12;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
    }
    uVar1 = uVar12 - 0xfff1;
    if (uVar12 < 0xfff1) {
      uVar1 = uVar12;
    }
    return (param_1 % 0xfff1) * 0x10000 | uVar1;
  }
  if (param_3 < 0x15b0) {
LAB_1022708b:
    do {
      param_3 = param_3 - 0x10;
      iVar2 = *param_2 + uVar12;
      iVar10 = (uint)param_2[1] + iVar2;
      iVar3 = (uint)param_2[2] + iVar10;
      iVar13 = (uint)param_2[3] + iVar3;
      iVar4 = (uint)param_2[4] + iVar13;
      iVar14 = (uint)param_2[5] + iVar4;
      iVar5 = (uint)param_2[6] + iVar14;
      iVar15 = (uint)param_2[7] + iVar5;
      iVar6 = (uint)param_2[8] + iVar15;
      iVar16 = (uint)param_2[9] + iVar6;
      iVar7 = (uint)param_2[10] + iVar16;
      iVar17 = (uint)param_2[0xb] + iVar7;
      iVar8 = (uint)param_2[0xc] + iVar17;
      iVar18 = (uint)param_2[0xd] + iVar8;
      iVar9 = (uint)param_2[0xe] + iVar18;
      uVar12 = (uint)param_2[0xf] + iVar9;
      param_1 = param_1 + iVar2 + iVar10 + iVar3 + iVar13 + iVar4 + iVar14 + iVar5 + iVar15 + iVar6
                + iVar16 + iVar7 + iVar17 + iVar8 + iVar18 + iVar9 + uVar12;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_1022711d;
  }
  else {
    do {
      iVar2 = -0x15b0;
      do {
        iVar3 = param_2[iVar2 + 0x15b0] + uVar12;
        iVar13 = (uint)param_2[iVar2 + 0x15b1] + iVar3;
        iVar4 = (uint)param_2[iVar2 + 0x15b2] + iVar13;
        iVar14 = (uint)param_2[iVar2 + 0x15b3] + iVar4;
        iVar5 = (uint)param_2[iVar2 + 0x15b4] + iVar14;
        iVar15 = (uint)param_2[iVar2 + 0x15b5] + iVar5;
        iVar6 = (uint)param_2[iVar2 + 0x15b6] + iVar15;
        iVar16 = (uint)param_2[iVar2 + 0x15b7] + iVar6;
        iVar7 = (uint)param_2[iVar2 + 0x15b8] + iVar16;
        iVar17 = (uint)param_2[iVar2 + 0x15b9] + iVar7;
        iVar8 = (uint)param_2[iVar2 + 0x15ba] + iVar17;
        iVar18 = (uint)param_2[iVar2 + 0x15bb] + iVar8;
        iVar9 = (uint)param_2[iVar2 + 0x15bc] + iVar18;
        iVar19 = (uint)param_2[iVar2 + 0x15bd] + iVar9;
        iVar10 = (uint)param_2[iVar2 + 0x15be] + iVar19;
        uVar12 = (uint)param_2[iVar2 + 0x15bf] + iVar10;
        param_1 = param_1 + iVar3 + iVar13 + iVar4 + iVar14 + iVar5 + iVar15 + iVar6 + iVar16 +
                  iVar7 + iVar17 + iVar8 + iVar18 + iVar9 + iVar19 + iVar10 + uVar12;
        iVar2 = iVar2 + 0x10;
      } while (iVar2 != 0);
      param_3 = param_3 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      uVar12 = uVar12 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_1022714f;
    if (0xf < param_3) goto LAB_1022708b;
LAB_1022711d:
    uVar1 = 0;
    do {
      uVar12 = uVar12 + param_2[uVar1];
      param_1 = param_1 + uVar12;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  uVar12 = uVar12 % 0xfff1;
  param_1 = param_1 % 0xfff1;
LAB_1022714f:
  return param_1 << 0x10 | uVar12;
}

