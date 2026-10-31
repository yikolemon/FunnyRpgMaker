/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800398ff */

undefined8 * FUN_1800398ff(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x38);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  FUN_18004133a();
  *param_1 = puVar1;
  return param_1;
}

