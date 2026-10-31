/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d256 */

void FUN_14003d256(longlong param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  if ((*param_2 < *(ushort *)(param_1 + 0x78)) && (param_2[2] < *(ushort *)(param_1 + 0xb0))) {
    lVar13 = (ulonglong)*param_2 * 8;
    lVar12 = (ulonglong)param_2[2] * 8;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar13);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar13);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xb8) + lVar12);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar12);
    uVar10 = iVar2 - iVar4;
    bVar6 = iVar2 == iVar4;
    bVar7 = iVar1 == iVar3;
    uVar5 = iVar1 - iVar3;
    if (bVar6 && bVar7) {
      uVar5 = 0x4000;
    }
    bVar14 = (*(byte *)(param_1 + 0x1f0) & 1) == 0;
    uVar11 = uVar10;
    if (!bVar14 && (!bVar6 || !bVar7)) {
      uVar11 = uVar5;
    }
    uVar10 = -uVar10;
    if (bVar14 || bVar6 && bVar7) {
      uVar10 = uVar5;
    }
    FUN_1400460bc(uVar10,uVar11,(undefined4 *)(param_1 + 0x198));
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar13);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar13);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + lVar12);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar12);
    uVar10 = iVar2 - iVar4;
    bVar8 = iVar2 == iVar4;
    bVar9 = iVar1 == iVar3;
    uVar5 = iVar1 - iVar3;
    if (bVar8 && bVar9) {
      uVar5 = 0x4000;
    }
    uVar11 = uVar10;
    if ((!bVar8 || !bVar9) && (!bVar14 && (!bVar6 || !bVar7))) {
      uVar11 = uVar5;
    }
    uVar10 = -uVar10;
    if (bVar8 && bVar9 || (bVar14 || bVar6 && bVar7)) {
      uVar10 = uVar5;
    }
    FUN_1400460bc(uVar10,uVar11,(undefined4 *)(param_1 + 0x19c));
    FUN_140043f14(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

