/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b64b4 */

undefined8 *
FUN_1800b64b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  FUN_180001e92(param_1 + 2,param_4);
  return param_1;
}

