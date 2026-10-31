/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008e7c5 */

void FUN_14008e7c5(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 2) = *param_2;
  *param_1 = 0x2000000000000000;
  uVar1 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined8 **)((longlong)param_1 + 0x14) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  param_1[1] = 0xc000000000000004;
  return;
}

