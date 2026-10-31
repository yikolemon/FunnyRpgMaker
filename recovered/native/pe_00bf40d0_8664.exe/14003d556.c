/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d556 */

void FUN_14003d556(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_1;
  *param_1 = *(undefined8 *)((longlong)param_1 + 4);
  return;
}

