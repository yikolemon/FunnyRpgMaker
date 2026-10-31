/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107df0 */

void FUN_140107df0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_1401212e0(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

