/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a4d98 */

void FUN_1400a4d98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_1 == param_2) {
    return;
  }
  if (7 < (ulonglong)param_2[4]) {
    FUN_14000ffc0(param_1 + 1,param_2[1],param_2[3]);
    return;
  }
  FUN_14000ffc0(param_1 + 1,param_2 + 1,param_2[3]);
  return;
}

