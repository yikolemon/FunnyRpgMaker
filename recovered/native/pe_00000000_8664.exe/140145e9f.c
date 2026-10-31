/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145e9f */

void FUN_140145e9f(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_1401461b2();
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_140146127(param_1);
    uVar1 = FUN_14012b378(param_3,uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4) = uVar1;
  }
  return;
}

