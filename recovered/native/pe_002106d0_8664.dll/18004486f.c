/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004486f */

undefined8 * FUN_18004486f(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800448ea(0,param_2[1] - *param_2,param_2,param_2 + 1);
  *(char *)(param_1 + 4) = (char)param_2[4];
  param_1[3] = param_2[3];
  return param_1;
}

