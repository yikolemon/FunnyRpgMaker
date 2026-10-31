/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009486e */

void FUN_14009486e(longlong param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xc);
  *puVar1 = *puVar1 ^ 1;
  return;
}

