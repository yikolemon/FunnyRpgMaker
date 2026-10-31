/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005a854 */

undefined8 * FUN_18005a854(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800448ea(0,param_2[1] - *param_2,param_2,param_2 + 1);
  *(undefined4 *)(param_1 + 3) = *param_3;
  return param_1;
}

