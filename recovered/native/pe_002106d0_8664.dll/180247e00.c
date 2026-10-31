/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247e00 */

void FUN_180247e00(undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 8) {
    FUN_1802a82f0(param_1,param_2,param_2[2] * 2 + 2);
  }
  else {
    *param_1 = *param_2;
  }
  param_1[3] = param_2[3];
  param_1[2] = param_2[2];
  *(undefined2 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  return;
}

