/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140117ac7 */

void FUN_140117ac7(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2c8);
  FUN_14012c433(*puVar1);
  FUN_1400bf498(puVar1);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  return;
}

