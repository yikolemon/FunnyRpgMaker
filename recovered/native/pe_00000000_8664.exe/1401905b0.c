/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401905b0 */

void FUN_1401905b0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_1401aea30(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

