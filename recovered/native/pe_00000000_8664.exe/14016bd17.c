/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016bd17 */

ulonglong FUN_14016bd17(undefined8 *param_1,ulonglong param_2)

{
  if (param_2 < 0x61) {
    param_1[2] = param_2;
    param_1[3] = param_2 + 7 >> 3;
    *(undefined2 *)(param_1 + 1) = 0x101;
  }
  else {
    FUN_1401691c8(*param_1,0x12);
    param_2 = 0;
  }
  return param_2;
}

