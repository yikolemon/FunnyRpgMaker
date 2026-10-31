/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008c08e */

void FUN_18008c08e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[3] = param_2;
  param_1[4] = uVar1;
  *param_1 = 0xc000000000000000;
  param_1[1] = 0x10;
  uVar1 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  param_1[5] = param_3;
  param_1[6] = uVar1;
  param_1[1] = 0xc000000000000010;
  param_1[2] = 0x20;
  uVar1 = param_4[2];
  if (7 < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  param_1[7] = param_4;
  param_1[8] = uVar1;
  param_1[2] = 0xc000000000000020;
  return;
}

