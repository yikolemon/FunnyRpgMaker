/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140072886 */

void FUN_140072886(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140071970(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_1 + 8),0x30);
    return;
  }
  return;
}

