/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007bc8a */

void FUN_18007bc8a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  FUN_18007e438(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_18023ef00(puVar1);
  return;
}

