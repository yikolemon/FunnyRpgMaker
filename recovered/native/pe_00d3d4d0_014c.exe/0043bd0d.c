/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bd0d */

void __fastcall FUN_0043bd0d(int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar13 = (uint)*param_2;
  if ((uVar13 < *(ushort *)(param_1 + 0x44)) &&
     (uVar12 = (uint)param_2[2], uVar12 < *(ushort *)(param_1 + 0x60))) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + uVar13 * 8);
    iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar13 * 8);
    iVar3 = *(int *)(*(int *)(param_1 + 100) + uVar12 * 8);
    iVar4 = *(int *)(*(int *)(param_1 + 100) + 4 + uVar12 * 8);
    uVar9 = iVar1 - iVar3;
    uVar11 = iVar2 - iVar4;
    bVar5 = iVar2 == iVar4;
    bVar6 = iVar1 == iVar3;
    if (bVar5 && bVar6) {
      uVar9 = 0x4000;
    }
    bVar14 = (*(byte *)(param_1 + 0x148) & 1) == 0;
    uVar10 = -uVar11;
    if (bVar14 || bVar5 && bVar6) {
      uVar10 = uVar9;
      uVar9 = uVar11;
    }
    FUN_00444168(uVar10,uVar9,(undefined4 *)(param_1 + 0xf4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + uVar13 * 8);
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 4 + uVar13 * 8);
    iVar3 = *(int *)(*(int *)(param_1 + 0x68) + uVar12 * 8);
    iVar4 = *(int *)(*(int *)(param_1 + 0x68) + 4 + uVar12 * 8);
    uVar13 = iVar1 - iVar3;
    uVar12 = iVar2 - iVar4;
    bVar7 = iVar2 == iVar4;
    bVar8 = iVar1 == iVar3;
    if (bVar7 && bVar8) {
      uVar13 = 0x4000;
    }
    uVar9 = uVar12;
    if ((!bVar7 || !bVar8) && (!bVar14 && (!bVar5 || !bVar6))) {
      uVar9 = uVar13;
    }
    uVar12 = -uVar12;
    if (bVar7 && bVar8 || (bVar14 || bVar5 && bVar6)) {
      uVar12 = uVar13;
    }
    FUN_00444168(uVar12,uVar9,(undefined4 *)(param_1 + 0xf8));
    FUN_00442192(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

