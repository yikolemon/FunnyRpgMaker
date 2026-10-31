/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e47c */

void FUN_14007e47c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

