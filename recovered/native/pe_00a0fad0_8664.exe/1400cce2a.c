/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cce2a */

void FUN_1400cce2a(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400ab3b0(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1400ddcd0(*(longlong *)(param_1 + 8),0x38);
    return;
  }
  return;
}

