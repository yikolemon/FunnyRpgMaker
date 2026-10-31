/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140292fac */

void FUN_140292fac(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    if (7 < (ulonglong)param_1[3]) {
      FUN_140212bec(param_1,*param_1);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  return;
}

