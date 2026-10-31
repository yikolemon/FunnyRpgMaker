/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028fa81 */

void FUN_14028fa81(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[3] = param_2;
  param_1[4] = uVar1;
  *param_1 = 0xc000000000000000;
  *(undefined4 *)(param_1 + 5) = *param_3;
  param_1[1] = 0x2000000000000010;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *param_4;
  param_1[2] = 0x2000000000000014;
  return;
}

