/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b831c */

undefined8 * FUN_1402b831c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14044ab00(0x78);
  puVar1[1] = 0x100000001;
  *puVar1 = &DAT_1404cbad8;
  FUN_1402b8408(puVar1 + 2,param_2,*param_3);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

