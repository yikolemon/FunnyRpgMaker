/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002f483 */

undefined8 * FUN_14002f483(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1401887b0(0x38);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  FUN_140036f8e();
  *param_1 = puVar1;
  return param_1;
}

