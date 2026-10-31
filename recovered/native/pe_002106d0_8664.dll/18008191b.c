/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008191b */

void thunk_FUN_180081920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[2] = param_2;
  param_1[3] = uVar1;
  *param_1 = 0xc000000000000000;
  uVar1 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  param_1[4] = param_3;
  param_1[5] = uVar1;
  param_1[1] = 0xc000000000000010;
  return;
}

