/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033d59 */

void FUN_140033d59(longlong param_1,longlong param_2)

{
  *(int *)(param_2 + 8) = (*(int *)(param_2 + 4) + *(int *)(param_1 + 8)) - *(int *)(param_1 + 4);
  return;
}

