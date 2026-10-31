/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140135e11 */

void FUN_140135e11(longlong param_1,longlong param_2)

{
  *(int *)(param_2 + 8) = (*(int *)(param_2 + 4) + *(int *)(param_1 + 8)) - *(int *)(param_1 + 4);
  return;
}

