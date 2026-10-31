/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a10e3 */

void FUN_1400a10e3(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[2] = param_2;
  param_1[3] = uVar1;
  *param_1 = 0xc000000000000000;
  *(undefined4 *)(param_1 + 4) = *param_3;
  param_1[1] = 0x2000000000000010;
  return;
}

