/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002a7c8 */

void FUN_14002a7c8(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140018c90(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_1 + 8),0x20);
    return;
  }
  return;
}

