/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180097a5b */

void FUN_180097a5b(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[3] = param_2;
  param_1[4] = uVar1;
  *param_1 = 0xc000000000000000;
  *(undefined4 *)(param_1 + 5) = *param_3;
  param_1[1] = 0x2000000000000010;
  uVar1 = param_4[2];
  if (7 < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  *(undefined8 **)((longlong)param_1 + 0x2c) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x34) = uVar1;
  param_1[2] = 0xc000000000000014;
  return;
}

