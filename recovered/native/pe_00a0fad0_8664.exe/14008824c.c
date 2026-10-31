/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008824c */

undefined8 * FUN_14008824c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 == param_2) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    FUN_1400884ee(param_1);
  }
  return param_1;
}

