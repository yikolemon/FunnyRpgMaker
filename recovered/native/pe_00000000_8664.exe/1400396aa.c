/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400396aa */

void FUN_1400396aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400183bd(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_1 + 8),0x40);
    return;
  }
  return;
}

