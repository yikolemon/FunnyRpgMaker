/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d792 */

void FUN_18001d792(longlong param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xc);
  *puVar1 = *puVar1 ^ 1;
  return;
}

