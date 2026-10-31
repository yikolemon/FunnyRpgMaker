/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ea90 */

void FUN_18026ea90(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_180290e40(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

