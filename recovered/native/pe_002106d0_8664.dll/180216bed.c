/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216bed */

void FUN_180216bed(longlong param_1,int param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x5c) != '\0') {
    return;
  }
  **(int **)(*(longlong *)(param_1 + 0x38) + 0x338) = param_2 + 0x8000 >> 0x10;
  return;
}

