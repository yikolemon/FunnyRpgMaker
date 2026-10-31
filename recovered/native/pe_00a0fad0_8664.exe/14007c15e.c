/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007c15e */

undefined8 * FUN_14007c15e(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14005872a(0,param_2[1] - *param_2,param_2,param_2 + 1);
  *(undefined4 *)(param_1 + 3) = *param_3;
  return param_1;
}

