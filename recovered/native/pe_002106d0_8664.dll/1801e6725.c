/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e6725 */

void FUN_1801e6725(longlong param_1,longlong param_2)

{
  *(int *)(param_2 + 8) = (*(int *)(param_2 + 4) + *(int *)(param_1 + 8)) - *(int *)(param_1 + 4);
  return;
}

