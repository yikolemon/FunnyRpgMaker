/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033b82 */

void FUN_140033b82(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  
  uVar1 = FUN_140033d66(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4));
  *(uint *)(param_4 + 8) = uVar1 + *(int *)(param_3 + 8);
  return;
}

