/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027c0bf */

undefined8 * FUN_14027c0bf(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14044ab00(0x328);
  puVar1[1] = 0x100000001;
  *puVar1 = &DAT_1404c94b8;
  FUN_14027f21c(puVar1 + 2,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

