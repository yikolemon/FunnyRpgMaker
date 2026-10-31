/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a4d32 */

undefined8 *
FUN_1400a4d32(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  FUN_140041956(param_1 + 1,param_3,param_3,param_4,param_1 + 1,0xfffffffffffffffe);
  param_1[5] = param_4;
  return param_1;
}

