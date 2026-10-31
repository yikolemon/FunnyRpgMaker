/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b486c */

void FUN_1800b486c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_1 == param_2) {
    return;
  }
  if (7 < (ulonglong)param_2[4]) {
    FUN_180004488(param_1 + 1,param_2[1],param_2[3]);
    return;
  }
  FUN_180004488(param_1 + 1,param_2 + 1,param_2[3]);
  return;
}

