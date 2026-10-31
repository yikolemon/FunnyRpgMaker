/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bbbea */

undefined8 * FUN_1800bbbea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  puVar1 = (undefined8 *)FUN_180239630(0x10);
  puVar1[1] = 0;
  *param_1 = puVar1;
  *puVar1 = param_1;
  return param_1;
}

