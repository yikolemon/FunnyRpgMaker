/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073b36 */

void FUN_180073b36(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  FUN_180075c00(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_18023ef00(puVar1);
  return;
}

