/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d3d1c */

undefined4 FUN_1801d3d1c(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 5;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}

