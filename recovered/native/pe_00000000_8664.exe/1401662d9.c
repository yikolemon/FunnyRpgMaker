/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401662d9 */

void FUN_1401662d9(longlong param_1,int param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x5c) != '\0') {
    return;
  }
  **(int **)(*(longlong *)(param_1 + 0x38) + 0x338) = param_2 + 0x8000 >> 0x10;
  return;
}

