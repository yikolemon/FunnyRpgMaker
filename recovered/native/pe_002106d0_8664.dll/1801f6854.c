/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6854 */

void FUN_1801f6854(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_1801f6ac6();
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = param_3;
  }
  return;
}

