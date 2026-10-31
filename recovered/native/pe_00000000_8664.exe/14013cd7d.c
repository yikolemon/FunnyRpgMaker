/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013cd7d */

void FUN_14013cd7d(longlong param_1,ushort *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  uVar2 = param_2[6];
  if (uVar2 < *(ushort *)(param_1 + 0x40)) {
    uVar3 = param_2[8];
    if (uVar3 < *(ushort *)(param_1 + 0x40)) {
      uVar4 = param_2[2];
      if (uVar4 < *(ushort *)(param_1 + 0x78)) {
        uVar5 = param_2[4];
        if (uVar5 < *(ushort *)(param_1 + 0x78)) {
          uVar6 = *param_2;
          if (uVar6 < *(ushort *)(param_1 + 0xb0)) {
            lVar15 = *(longlong *)(param_1 + 0x50);
            lVar8 = *(longlong *)(param_1 + 0x88);
            iVar12 = *(int *)(lVar15 + (ulonglong)uVar2 * 8);
            iVar13 = *(int *)(lVar15 + 4 + (ulonglong)uVar2 * 8);
            iVar20 = *(int *)(lVar15 + (ulonglong)uVar3 * 8) - iVar12;
            iVar19 = *(int *)(lVar15 + 4 + (ulonglong)uVar3 * 8) - iVar13;
            iVar14 = *(int *)(lVar8 + (ulonglong)uVar4 * 8);
            iVar7 = *(int *)(lVar8 + 4 + (ulonglong)uVar4 * 8);
            iVar18 = *(int *)(lVar8 + (ulonglong)uVar5 * 8) - iVar14;
            iVar21 = *(int *)(lVar8 + 4 + (ulonglong)uVar5 * 8) - iVar7;
            iVar16 = -iVar19;
            iVar9 = FUN_14012a478(iVar18,iVar16,0x40);
            iVar10 = FUN_14012a478(iVar21,iVar20,0x40);
            iVar10 = iVar10 + iVar9;
            iVar11 = FUN_14012a478(iVar18,iVar20,0x40);
            iVar19 = FUN_14012a478(iVar21,iVar19,0x40);
            iVar9 = -iVar10;
            if (-iVar10 < 0) {
              iVar9 = iVar10;
            }
            iVar17 = -(iVar19 + iVar11);
            if (iVar17 < 0) {
              iVar17 = iVar19 + iVar11;
            }
            if (iVar17 < iVar9 * 0x13) {
              iVar12 = FUN_14012a478(iVar12 - iVar14,iVar16,0x40);
              iVar13 = FUN_14012a478(iVar13 - iVar7,iVar20,0x40);
              iVar14 = FUN_14012a478(iVar12 + iVar13,iVar18,iVar10);
              iVar12 = FUN_14012a478(iVar12 + iVar13,iVar21,iVar10);
              *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)((uint)uVar6 * 8)) =
                   iVar14 + *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar4 * 8);
              iVar12 = iVar12 + *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar4 * 8);
              lVar15 = (ulonglong)((uint)uVar6 * 8) + *(longlong *)(param_1 + 0xc0);
            }
            else {
              iVar14 = *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar5 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar4 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar2 * 8);
              iVar12 = *(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 8);
              iVar13 = iVar14 + iVar12;
              iVar12 = iVar12 + iVar14 + 3;
              if (-1 < iVar13) {
                iVar12 = iVar13;
              }
              *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)((uint)uVar6 * 8)) = iVar12 >> 2;
              iVar12 = *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar3 * 8);
              iVar13 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar5 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar4 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar2 * 8);
              iVar14 = iVar13 + iVar12;
              iVar12 = iVar12 + iVar13 + 3;
              if (-1 < iVar14) {
                iVar12 = iVar14;
              }
              iVar12 = iVar12 >> 2;
              lVar15 = (ulonglong)((uint)uVar6 * 8) + *(longlong *)(param_1 + 0xc0);
            }
            *(int *)(lVar15 + 4) = iVar12;
            pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar6);
            *pbVar1 = *pbVar1 | 0x18;
            return;
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

