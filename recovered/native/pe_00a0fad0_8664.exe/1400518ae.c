/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400518ae */

void FUN_1400518ae(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}

