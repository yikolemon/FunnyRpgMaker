/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800730eb */

void FUN_1800730eb(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[1] = param_2;
  param_1[2] = uVar1;
  *param_1 = 0xc000000000000000;
  return;
}

