/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf91c */

undefined8 *
FUN_1800cf91c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  FUN_1800181b0(param_1 + 1,param_2 + 1,param_3,param_4,param_1 + 1,param_1,0xfffffffffffffffe);
  param_1[9] = param_2[9];
  return param_1;
}

