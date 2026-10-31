/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001257f */

void FUN_18001257f(undefined8 *param_1,undefined8 *param_2)

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

