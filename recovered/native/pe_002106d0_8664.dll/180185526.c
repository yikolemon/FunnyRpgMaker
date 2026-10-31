/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185526 */

undefined8 * FUN_180185526(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *param_3 = *param_1;
    FUN_180003216(param_3 + 1,param_1 + 1);
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    FUN_180185494(param_3 + 5,(longlong)(param_1[6] - param_1[5]) >> 6,param_1 + 5,param_1 + 6);
    param_3 = param_3 + 8;
  }
  return param_3;
}

