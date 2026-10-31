/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000223d */

undefined4 * FUN_1000223d(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10001338(param_2,param_3);
  return param_1;
}

