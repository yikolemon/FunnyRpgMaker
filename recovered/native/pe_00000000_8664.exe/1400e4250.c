/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e4250 */

void FUN_1400e4250(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_1[7] != 0) {
    param_1[6] = 0;
    FUN_140077b90();
    param_1[7] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_140077b90();
    param_1[1] = 0;
  }
  if (param_1[5] != 0) {
    param_1[4] = 0;
    FUN_140077b90();
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfc000000;
  return;
}

