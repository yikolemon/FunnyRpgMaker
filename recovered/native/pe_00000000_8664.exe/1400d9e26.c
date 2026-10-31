/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d9e26 */

void FUN_1400d9e26(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_140077b90();
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_140077b90();
    param_1[3] = 0;
  }
  if (param_1[5] != 0) {
    param_1[4] = 0;
    FUN_140077b90();
    param_1[5] = 0;
  }
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_1[0x15] != 0) {
    param_1[0x14] = 0;
    FUN_140077b90();
    param_1[0x15] = 0;
  }
  if (param_1[0x17] != 0) {
    param_1[0x16] = 0;
    FUN_140077b90();
    param_1[0x17] = 0;
  }
  if (param_1[0x19] != 0) {
    param_1[0x18] = 0;
    FUN_140077b90();
    param_1[0x19] = 0;
  }
  if (param_1[0xb] != 0) {
    param_1[10] = 0;
    FUN_140077b90();
    param_1[0xb] = 0;
  }
  FUN_1400da5e2(param_1 + 0x11);
  return;
}

