/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027d24b */

undefined8 * FUN_14027d24b(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14044ab00(0x58);
  puVar1[1] = 0x100000001;
  *puVar1 = &DAT_1404c9428;
  FUN_14027d604(puVar1 + 2,param_2,*param_3);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

