/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006c53b */

void FUN_14006c53b(undefined8 *param_1,longlong param_2)

{
  FUN_14001c53d(param_2,param_1[5]);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_14001c53d(param_2,param_1[2]);
  param_1[2] = 0;
  FUN_14001c53d(param_2,param_1[1]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

