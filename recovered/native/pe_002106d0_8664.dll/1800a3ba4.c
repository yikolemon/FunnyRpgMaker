/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3ba4 */

void FUN_1800a3ba4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  FUN_1800a6942(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_18023ef00(puVar1);
  return;
}

