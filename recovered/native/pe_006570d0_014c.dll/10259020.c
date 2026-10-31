/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10259020 */

void FUN_10259020(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_10274120(*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

