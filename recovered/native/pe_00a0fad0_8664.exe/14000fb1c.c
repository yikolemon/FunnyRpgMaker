/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000fb1c */

void FUN_14000fb1c(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14000f707(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1400ddcd0(*(longlong *)(param_1 + 8),0x70);
    return;
  }
  return;
}

