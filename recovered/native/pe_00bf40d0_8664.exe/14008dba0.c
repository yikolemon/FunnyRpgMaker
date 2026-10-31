/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008dba0 */

void FUN_14008dba0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_1400a1290((LPVOID)*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

