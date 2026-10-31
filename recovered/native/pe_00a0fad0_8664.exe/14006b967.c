/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b967 */

undefined8 * FUN_14006b967(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14005872a(0,param_2[1] - *param_2,param_2,param_2 + 1);
  *(char *)(param_1 + 4) = (char)param_2[4];
  param_1[3] = param_2[3];
  return param_1;
}

