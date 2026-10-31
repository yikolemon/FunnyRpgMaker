/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009d151 */

void FUN_18009d151(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  param_1[3] = param_2;
  param_1[4] = uVar1;
  *param_1 = 0xc000000000000000;
  *(uint *)(param_1 + 5) = (uint)*param_3;
  param_1[1] = 0x2000000000000010;
  *(uint *)((longlong)param_1 + 0x2c) = (uint)*param_4;
  param_1[2] = 0x2000000000000014;
  return;
}

