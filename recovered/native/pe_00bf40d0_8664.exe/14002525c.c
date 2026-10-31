/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002525c */

undefined4 FUN_14002525c(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 5;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}

