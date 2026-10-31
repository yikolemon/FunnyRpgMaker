/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d58f7 */

void FUN_1800d58f7(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[2] = *param_2;
  *param_1 = 0x3000000000000000;
  uVar1 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  param_1[3] = param_3;
  param_1[4] = uVar1;
  param_1[1] = 0xc000000000000008;
  return;
}

