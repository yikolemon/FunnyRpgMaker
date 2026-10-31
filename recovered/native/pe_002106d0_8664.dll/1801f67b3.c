/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f67b3 */

void FUN_1801f67b3(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_1801f6ac6();
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_1801f6a3b(param_1);
    uVar1 = FUN_1801cc3a4(param_3,uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4) = uVar1;
  }
  return;
}

