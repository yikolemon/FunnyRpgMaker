/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e29b */

undefined8 * FUN_14000e29b(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14000e316(0,param_2[1] - *param_2,param_2,param_2 + 1);
  *(char *)(param_1 + 4) = (char)param_2[4];
  param_1[3] = param_2[3];
  return param_1;
}

