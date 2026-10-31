/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfe4c */

void FUN_1400bfe4c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 8);
  (*(undefined4 **)(param_1 + 8))[2] = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = uVar1;
  return;
}

