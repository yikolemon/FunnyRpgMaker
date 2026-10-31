/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e23cc */

void __fastcall FUN_101e23cc(int param_1,ushort *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
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
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  
  uVar17 = (uint)param_2[6];
  if ((uVar17 < *(ushort *)(param_1 + 0x28)) &&
     (uVar19 = (uint)param_2[8], uVar19 < *(ushort *)(param_1 + 0x28))) {
    uVar12 = (uint)param_2[2];
    if ((uVar12 < *(ushort *)(param_1 + 0x44)) &&
       ((uVar13 = (uint)param_2[4], uVar13 < *(ushort *)(param_1 + 0x44) &&
        (uVar14 = (uint)*param_2, uVar14 < *(ushort *)(param_1 + 0x60))))) {
      iVar10 = *(int *)(param_1 + 0x30);
      iVar7 = *(int *)(param_1 + 0x4c);
      iVar11 = *(int *)(iVar10 + uVar17 * 8);
      iVar2 = *(int *)(iVar10 + 4 + uVar17 * 8);
      iVar15 = *(int *)(iVar10 + uVar19 * 8) - iVar11;
      iVar4 = *(int *)(iVar10 + 4 + uVar19 * 8) - iVar2;
      iVar10 = *(int *)(iVar7 + uVar12 * 8);
      iVar3 = *(int *)(iVar7 + 4 + uVar12 * 8);
      iVar18 = *(int *)(iVar7 + uVar13 * 8) - iVar10;
      iVar5 = *(int *)(iVar7 + 4 + uVar13 * 8) - iVar3;
      iVar6 = -iVar4;
      iVar7 = FUN_101c16ea(iVar18,iVar6,0x40);
      iVar8 = FUN_101c16ea(iVar5,iVar15,0x40);
      iVar8 = iVar8 + iVar7;
      iVar9 = FUN_101c16ea(iVar18,iVar15,0x40);
      iVar4 = FUN_101c16ea(iVar5,iVar4,0x40);
      iVar7 = -iVar8;
      if (-iVar8 < 0) {
        iVar7 = iVar8;
      }
      iVar16 = -(iVar4 + iVar9);
      if (iVar16 < 0) {
        iVar16 = iVar4 + iVar9;
      }
      if (iVar16 < iVar7 * 0x13) {
        iVar10 = FUN_101c16ea(iVar11 - iVar10,iVar6,0x40);
        iVar7 = FUN_101c16ea(iVar2 - iVar3,iVar15,0x40,iVar10);
        iVar11 = FUN_101c16ea(iVar7 + iVar10,iVar18,iVar8);
        iVar10 = FUN_101c16ea(iVar7 + iVar10,iVar5,iVar8);
        *(int *)(*(int *)(param_1 + 0x68) + uVar14 * 8) =
             iVar11 + *(int *)(*(int *)(param_1 + 0x4c) + uVar12 * 8);
        iVar10 = iVar10 + *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar12 * 8);
      }
      else {
        iVar10 = *(int *)(*(int *)(param_1 + 0x30) + uVar19 * 8);
        iVar7 = *(int *)(*(int *)(param_1 + 0x4c) + uVar13 * 8) +
                *(int *)(*(int *)(param_1 + 0x4c) + uVar12 * 8) +
                *(int *)(*(int *)(param_1 + 0x30) + uVar17 * 8);
        iVar11 = iVar7 + iVar10;
        iVar10 = iVar10 + iVar7 + 3;
        if (-1 < iVar11) {
          iVar10 = iVar11;
        }
        *(int *)(*(int *)(param_1 + 0x68) + uVar14 * 8) = iVar10 >> 2;
        iVar7 = *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar13 * 8) +
                *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar12 * 8) +
                *(int *)(*(int *)(param_1 + 0x30) + 4 + uVar17 * 8);
        iVar10 = *(int *)(*(int *)(param_1 + 0x30) + 4 + uVar19 * 8);
        iVar11 = iVar7 + iVar10;
        iVar10 = iVar10 + iVar7 + 3;
        if (-1 < iVar11) {
          iVar10 = iVar11;
        }
        iVar10 = iVar10 >> 2;
      }
      *(int *)(*(int *)(param_1 + 0x68) + 4 + uVar14 * 8) = iVar10;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x70) + uVar14);
      *pbVar1 = *pbVar1 | 0x18;
      return;
    }
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

