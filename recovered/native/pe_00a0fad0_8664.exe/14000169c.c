/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000169c */

undefined8 * FUN_14000169c(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  sVar1 = strlen(param_2);
  FUN_1400061f6(param_1,param_2,sVar1);
  return param_1;
}

