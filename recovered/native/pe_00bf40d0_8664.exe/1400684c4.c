/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400684c4 */

longlong FUN_1400684c4(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x20) <= param_2) {
    FUN_140067118(*(int **)(param_1 + 8),0x82);
    param_2 = 0;
  }
  return param_2 * *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x30);
}

