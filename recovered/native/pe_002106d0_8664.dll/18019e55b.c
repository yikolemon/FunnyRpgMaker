/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e55b */

void FUN_18019e55b(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2c8);
  FUN_1801cd45f(*puVar1);
  FUN_180146568(puVar1);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  return;
}

