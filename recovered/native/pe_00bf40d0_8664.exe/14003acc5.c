/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003acc5 */

void FUN_14003acc5(longlong param_1,ushort *param_2)

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
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
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
            lVar14 = *(longlong *)(param_1 + 0x50);
            lVar8 = *(longlong *)(param_1 + 0x88);
            iVar11 = *(int *)(lVar14 + (ulonglong)uVar2 * 8);
            iVar12 = *(int *)(lVar14 + 4 + (ulonglong)uVar2 * 8);
            uVar20 = *(int *)(lVar14 + (ulonglong)uVar3 * 8) - iVar11;
            uVar19 = *(int *)(lVar14 + 4 + (ulonglong)uVar3 * 8) - iVar12;
            iVar13 = *(int *)(lVar8 + (ulonglong)uVar4 * 8);
            iVar7 = *(int *)(lVar8 + 4 + (ulonglong)uVar4 * 8);
            uVar17 = *(int *)(lVar8 + (ulonglong)uVar5 * 8) - iVar13;
            uVar21 = *(int *)(lVar8 + 4 + (ulonglong)uVar5 * 8) - iVar7;
            uVar15 = -uVar19;
            iVar9 = FUN_14001de7c(uVar17,uVar15,0x40);
            iVar10 = FUN_14001de7c(uVar21,uVar20,0x40);
            uVar18 = iVar10 + iVar9;
            iVar9 = FUN_14001de7c(uVar17,uVar20,0x40);
            iVar10 = FUN_14001de7c(uVar21,uVar19,0x40);
            uVar19 = -uVar18;
            if ((int)-uVar18 < 0) {
              uVar19 = uVar18;
            }
            iVar16 = -(iVar10 + iVar9);
            if (iVar16 < 0) {
              iVar16 = iVar10 + iVar9;
            }
            if (iVar16 < (int)(uVar19 * 0x13)) {
              iVar11 = FUN_14001de7c(iVar11 - iVar13,uVar15,0x40);
              iVar12 = FUN_14001de7c(iVar12 - iVar7,uVar20,0x40);
              iVar13 = FUN_14001de7c(iVar11 + iVar12,uVar17,uVar18);
              iVar11 = FUN_14001de7c(iVar11 + iVar12,uVar21,uVar18);
              *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)((uint)uVar6 * 8)) =
                   iVar13 + *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar4 * 8);
              iVar11 = iVar11 + *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar4 * 8);
              lVar14 = (ulonglong)((uint)uVar6 * 8) + *(longlong *)(param_1 + 0xc0);
            }
            else {
              iVar13 = *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar5 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar4 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar2 * 8);
              iVar11 = *(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 8);
              iVar12 = iVar13 + iVar11;
              iVar11 = iVar11 + iVar13 + 3;
              if (-1 < iVar12) {
                iVar11 = iVar12;
              }
              *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)((uint)uVar6 * 8)) = iVar11 >> 2;
              iVar11 = *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar3 * 8);
              iVar12 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar5 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar4 * 8) +
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar2 * 8);
              iVar13 = iVar12 + iVar11;
              iVar11 = iVar11 + iVar12 + 3;
              if (-1 < iVar13) {
                iVar11 = iVar13;
              }
              iVar11 = iVar11 >> 2;
              lVar14 = (ulonglong)((uint)uVar6 * 8) + *(longlong *)(param_1 + 0xc0);
            }
            *(int *)(lVar14 + 4) = iVar11;
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

