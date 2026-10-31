/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012b254 */

void FUN_14012b254(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = iVar1;
  if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
    iVar3 = iVar2;
  }
  if (-1 < iVar2) {
    iVar3 = iVar1 - iVar2;
  }
  if (param_2 == 0) {
    param_2 = (iVar3 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar3) / 2;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

