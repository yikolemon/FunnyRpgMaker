/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146f1c */

void FUN_180146f1c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 8);
  (*(undefined4 **)(param_1 + 8))[2] = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = uVar1;
  return;
}

