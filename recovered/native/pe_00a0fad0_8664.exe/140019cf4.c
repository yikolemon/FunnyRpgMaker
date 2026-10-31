/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019cf4 */

void FUN_140019cf4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x88);
  FUN_140019eb6(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_1400d3ba0(puVar1);
  return;
}

