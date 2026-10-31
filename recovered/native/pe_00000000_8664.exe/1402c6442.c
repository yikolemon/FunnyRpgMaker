/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c6442 */

void FUN_1402c6442(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1402c67c7(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1404a2310(*(longlong *)(param_1 + 8),0x80);
    return;
  }
  return;
}

