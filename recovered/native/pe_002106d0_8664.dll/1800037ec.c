/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800037ec */

void FUN_1800037ec(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - param_1[2];
  if ((ulonglong)param_1[2] <= param_2 && lVar1 != 0) {
    FUN_18000397c(param_1,lVar1);
    return;
  }
  param_1[2] = param_2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)((longlong)param_1 + param_2) = 0;
  return;
}

