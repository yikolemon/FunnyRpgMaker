/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081adc */

void FUN_180081adc(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    if (7 < (ulonglong)param_1[3]) {
      FUN_18000171c(param_1,*param_1);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  return;
}

