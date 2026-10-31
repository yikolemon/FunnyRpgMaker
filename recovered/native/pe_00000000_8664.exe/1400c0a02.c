/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c0a02 */

void FUN_1400c0a02(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
    FUN_1400cee31();
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}

