/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145ede */

void FUN_140145ede(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1401461b2();
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4);
    uVar2 = FUN_140146127(param_1);
    iVar3 = FUN_14012b378(param_3,uVar2);
    *(int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4) = iVar3 + iVar1;
  }
  return;
}

