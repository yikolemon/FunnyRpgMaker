/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007152a */

void FUN_14007152a(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_1 + 8),0x18);
    return;
  }
  return;
}

