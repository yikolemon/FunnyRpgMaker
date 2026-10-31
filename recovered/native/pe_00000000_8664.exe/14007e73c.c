/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e73c */

void FUN_14007e73c(longlong param_1)

{
  FUN_14007faa8(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

