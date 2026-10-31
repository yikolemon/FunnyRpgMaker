/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402299e4 */

undefined8 * FUN_1402299e4(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  
  *param_1 = 0;
  FUN_14022d410();
  sVar1 = strlen(param_2);
  FUN_14022d2c8(param_1,param_2,param_2 + sVar1,param_3);
  return param_1;
}

