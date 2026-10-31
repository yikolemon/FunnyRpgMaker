/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058b56 */

void FUN_140058b56(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  FUN_140058f76(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_1400d3ba0(puVar1);
  return;
}

