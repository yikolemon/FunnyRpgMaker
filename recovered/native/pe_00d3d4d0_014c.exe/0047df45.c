/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047df45 */

uint __fastcall FUN_0047df45(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  uVar13 = param_1 & 0xffff;
  uVar3 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar13 = uVar13 + *param_2;
    uVar1 = uVar13 - 0xfff1;
    if (uVar13 < 0xfff1) {
      uVar1 = uVar13;
    }
    uVar12 = (uVar3 + uVar1) * 0x10000;
    uVar13 = uVar12 + 0xf0000;
    if (uVar3 + uVar1 < 0xfff1) {
      uVar13 = uVar12;
    }
    return uVar13 | uVar1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        uVar13 = uVar13 + param_2[uVar1];
        uVar3 = uVar3 + uVar13;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
    }
    uVar1 = uVar13 - 0xfff1;
    if (uVar13 < 0xfff1) {
      uVar1 = uVar13;
    }
    return (uVar3 % 0xfff1) * 0x10000 | uVar1;
  }
  if (param_3 < 0x15b0) {
LAB_0047e0f7:
    do {
      param_3 = param_3 - 0x10;
      iVar2 = *param_2 + uVar13;
      iVar11 = (uint)param_2[1] + iVar2;
      iVar4 = (uint)param_2[2] + iVar11;
      iVar14 = (uint)param_2[3] + iVar4;
      iVar5 = (uint)param_2[4] + iVar14;
      iVar15 = (uint)param_2[5] + iVar5;
      iVar6 = (uint)param_2[6] + iVar15;
      iVar16 = (uint)param_2[7] + iVar6;
      iVar7 = (uint)param_2[8] + iVar16;
      iVar17 = (uint)param_2[9] + iVar7;
      iVar8 = (uint)param_2[10] + iVar17;
      iVar18 = (uint)param_2[0xb] + iVar8;
      iVar9 = (uint)param_2[0xc] + iVar18;
      iVar19 = (uint)param_2[0xd] + iVar9;
      iVar10 = (uint)param_2[0xe] + iVar19;
      uVar13 = (uint)param_2[0xf] + iVar10;
      uVar3 = uVar3 + iVar2 + iVar11 + iVar4 + iVar14 + iVar5 + iVar15 + iVar6 + iVar16 + iVar7 +
              iVar17 + iVar8 + iVar18 + iVar9 + iVar19 + iVar10 + uVar13;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_0047e189;
  }
  else {
    do {
      iVar2 = -0x15b0;
      do {
        iVar4 = param_2[iVar2 + 0x15b0] + uVar13;
        iVar14 = (uint)param_2[iVar2 + 0x15b1] + iVar4;
        iVar5 = (uint)param_2[iVar2 + 0x15b2] + iVar14;
        iVar15 = (uint)param_2[iVar2 + 0x15b3] + iVar5;
        iVar6 = (uint)param_2[iVar2 + 0x15b4] + iVar15;
        iVar16 = (uint)param_2[iVar2 + 0x15b5] + iVar6;
        iVar7 = (uint)param_2[iVar2 + 0x15b6] + iVar16;
        iVar17 = (uint)param_2[iVar2 + 0x15b7] + iVar7;
        iVar8 = (uint)param_2[iVar2 + 0x15b8] + iVar17;
        iVar18 = (uint)param_2[iVar2 + 0x15b9] + iVar8;
        iVar9 = (uint)param_2[iVar2 + 0x15ba] + iVar18;
        iVar19 = (uint)param_2[iVar2 + 0x15bb] + iVar9;
        iVar10 = (uint)param_2[iVar2 + 0x15bc] + iVar19;
        iVar20 = (uint)param_2[iVar2 + 0x15bd] + iVar10;
        iVar11 = (uint)param_2[iVar2 + 0x15be] + iVar20;
        uVar13 = (uint)param_2[iVar2 + 0x15bf] + iVar11;
        uVar3 = uVar3 + iVar4 + iVar14 + iVar5 + iVar15 + iVar6 + iVar16 + iVar7 + iVar17 + iVar8 +
                iVar18 + iVar9 + iVar19 + iVar10 + iVar20 + iVar11 + uVar13;
        iVar2 = iVar2 + 0x10;
      } while (iVar2 != 0);
      param_3 = param_3 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      uVar13 = uVar13 % 0xfff1;
      uVar3 = uVar3 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_0047e1bb;
    if (0xf < param_3) goto LAB_0047e0f7;
LAB_0047e189:
    uVar1 = 0;
    do {
      uVar13 = uVar13 + param_2[uVar1];
      uVar3 = uVar3 + uVar13;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  uVar13 = uVar13 % 0xfff1;
  uVar3 = uVar3 % 0xfff1;
LAB_0047e1bb:
  return uVar3 << 0x10 | uVar13;
}

