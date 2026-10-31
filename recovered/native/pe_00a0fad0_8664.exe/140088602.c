/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088602 */

void FUN_140088602(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    if (7 < (ulonglong)param_1[3]) {
      FUN_140008b72(param_1,*param_1);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  return;
}

