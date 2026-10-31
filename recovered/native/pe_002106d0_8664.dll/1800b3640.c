/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b3640 */

undefined8 *
FUN_1800b3640(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  FUN_18006d722(param_1 + 1,param_3,param_3,param_4,param_1 + 1,0xfffffffffffffffe);
  param_1[5] = param_4;
  return param_1;
}

