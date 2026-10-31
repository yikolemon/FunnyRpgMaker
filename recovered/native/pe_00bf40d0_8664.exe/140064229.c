/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140064229 */

void FUN_140064229(longlong param_1,int param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x5c) != '\0') {
    return;
  }
  **(int **)(*(longlong *)(param_1 + 0x38) + 0x338) = param_2 + 0x8000 >> 0x10;
  return;
}

