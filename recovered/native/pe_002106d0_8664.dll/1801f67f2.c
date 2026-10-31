/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f67f2 */

void FUN_1801f67f2(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1801f6ac6();
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4);
    uVar2 = FUN_1801f6a3b(param_1);
    iVar3 = FUN_1801cc3a4(param_3,uVar2);
    *(int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4) = iVar3 + iVar1;
  }
  return;
}

