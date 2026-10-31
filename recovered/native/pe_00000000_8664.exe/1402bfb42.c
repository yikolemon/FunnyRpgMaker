/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bfb42 */

void FUN_1402bfb42(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14022975d(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1404a2310(*(longlong *)(param_1 + 8),0x38);
    return;
  }
  return;
}

