/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14047ff60 */

void FUN_14047ff60(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_1404a2310(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

