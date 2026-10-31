/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cd168 */

void FUN_1400cd168(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1400ddcd0(*(longlong *)(param_1 + 8),0x20);
    return;
  }
  return;
}

