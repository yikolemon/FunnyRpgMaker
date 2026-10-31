/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400de170 */

void FUN_1400de170(undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 8) {
    FUN_140135ff0(param_1,param_2,param_2[2] * 2 + 2);
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

