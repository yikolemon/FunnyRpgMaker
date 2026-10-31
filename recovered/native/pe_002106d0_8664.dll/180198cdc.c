/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180198cdc */

void FUN_180198cdc(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_1[7] != 0) {
    param_1[6] = 0;
    FUN_1800fe8d4();
    param_1[7] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_1800fe8d4();
    param_1[1] = 0;
  }
  if (param_1[5] != 0) {
    param_1[4] = 0;
    FUN_1800fe8d4();
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfc000000;
  return;
}

