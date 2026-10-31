/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003e690 */

void FUN_14003e690(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  FUN_14003fb7e(puVar1);
  *puVar1 = std::ios_base::vftable;
  FUN_1400d3ba0(puVar1);
  return;
}

