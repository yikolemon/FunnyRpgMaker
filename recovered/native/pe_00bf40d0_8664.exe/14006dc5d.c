/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006dc5d */

void FUN_14006dc5d(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14006dc96(param_1 + 3,lVar1);
  FUN_14006dc96(param_1 + 9,lVar1);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

