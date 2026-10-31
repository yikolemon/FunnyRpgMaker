/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018514 */

undefined8 * FUN_180018514(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  
  *param_1 = 0;
  FUN_18001bf40();
  sVar1 = strlen(param_2);
  FUN_18001bdf8(param_1,param_2,param_2 + sVar1,param_3);
  return param_1;
}

