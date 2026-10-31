/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000672e */

undefined8 * FUN_14000672e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == param_3) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    FUN_14000477c(param_1,param_2,(longlong)param_3 - (longlong)param_2 >> 1);
  }
  return param_1;
}

