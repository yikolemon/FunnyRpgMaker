/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018e8b2 */

void FUN_18018e8b2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_1800fe8d4();
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_1800fe8d4();
    param_1[3] = 0;
  }
  if (param_1[5] != 0) {
    param_1[4] = 0;
    FUN_1800fe8d4();
    param_1[5] = 0;
  }
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_1[0x15] != 0) {
    param_1[0x14] = 0;
    FUN_1800fe8d4();
    param_1[0x15] = 0;
  }
  if (param_1[0x17] != 0) {
    param_1[0x16] = 0;
    FUN_1800fe8d4();
    param_1[0x17] = 0;
  }
  if (param_1[0x19] != 0) {
    param_1[0x18] = 0;
    FUN_1800fe8d4();
    param_1[0x19] = 0;
  }
  if (param_1[0xb] != 0) {
    param_1[10] = 0;
    FUN_1800fe8d4();
    param_1[0xb] = 0;
  }
  FUN_18018f06e(param_1 + 0x11);
  return;
}

