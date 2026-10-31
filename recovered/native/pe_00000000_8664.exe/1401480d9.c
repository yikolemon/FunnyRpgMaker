/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401480d9 */

undefined8 FUN_1401480d9(longlong param_1,ushort param_2,ushort param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  
  if ((param_2 < *(ushort *)(param_1 + 0xb0)) && (param_3 < *(ushort *)(param_1 + 0x78))) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_3 * 8);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)param_3 * 8);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 8);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + (ulonglong)param_2 * 8);
    iVar8 = iVar6 - iVar3;
    bVar4 = iVar6 == iVar3;
    bVar5 = iVar1 == iVar2;
    iVar6 = 0x4000;
    if (!bVar4 || !bVar5) {
      iVar6 = iVar1 - iVar2;
    }
    bVar9 = (*(byte *)(param_1 + 0x1f0) & 1) != 0;
    iVar1 = iVar8;
    if (bVar9 && (!bVar4 || !bVar5)) {
      iVar1 = iVar6;
    }
    iVar2 = -iVar8;
    if (!bVar9 || bVar4 && bVar5) {
      iVar2 = iVar6;
    }
    FUN_140148174(iVar2,iVar1,param_4);
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
  }
  return uVar7;
}

