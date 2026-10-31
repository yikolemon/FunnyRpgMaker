/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180087fee */

undefined8 * FUN_180087fee(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180088062(0,(param_2[1] - *param_2 >> 4) * -0x5555555555555555,param_2,param_2 + 1,param_1,
                0xfffffffffffffffe);
  return param_1;
}

