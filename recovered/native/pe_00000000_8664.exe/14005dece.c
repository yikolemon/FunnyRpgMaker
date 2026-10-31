/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005dece */

void FUN_14005dece(longlong param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xc);
  *puVar1 = *puVar1 ^ 1;
  return;
}

