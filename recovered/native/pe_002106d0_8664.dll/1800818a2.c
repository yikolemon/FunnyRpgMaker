/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800818a2 */

void FUN_1800818a2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  FUN_18008b760(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_18023ef00(puVar1);
  return;
}

