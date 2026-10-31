/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013f30e */

void FUN_14013f30e(longlong param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  if ((*param_2 < *(ushort *)(param_1 + 0x78)) && (param_2[2] < *(ushort *)(param_1 + 0xb0))) {
    lVar11 = (ulonglong)*param_2 * 8;
    lVar10 = (ulonglong)param_2[2] * 8;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar11);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar11);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xb8) + lVar10);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar10);
    iVar9 = iVar2 - iVar4;
    bVar5 = iVar2 == iVar4;
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar1 - iVar3;
    if (bVar5 && bVar6) {
      iVar1 = 0x4000;
    }
    bVar12 = (*(byte *)(param_1 + 0x1f0) & 1) == 0;
    iVar2 = iVar9;
    if (!bVar12 && (!bVar5 || !bVar6)) {
      iVar2 = iVar1;
    }
    iVar3 = -iVar9;
    if (bVar12 || bVar5 && bVar6) {
      iVar3 = iVar1;
    }
    FUN_140148174(iVar3,iVar2,param_1 + 0x198);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar11);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar11);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + lVar10);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar10);
    iVar9 = iVar2 - iVar4;
    bVar7 = iVar2 == iVar4;
    bVar8 = iVar1 == iVar3;
    iVar1 = iVar1 - iVar3;
    if (bVar7 && bVar8) {
      iVar1 = 0x4000;
    }
    iVar2 = iVar9;
    if ((!bVar7 || !bVar8) && (!bVar12 && (!bVar5 || !bVar6))) {
      iVar2 = iVar1;
    }
    iVar3 = -iVar9;
    if (bVar7 && bVar8 || (bVar12 || bVar5 && bVar6)) {
      iVar3 = iVar1;
    }
    FUN_140148174(iVar3,iVar2,param_1 + 0x19c);
    FUN_140145fcc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

