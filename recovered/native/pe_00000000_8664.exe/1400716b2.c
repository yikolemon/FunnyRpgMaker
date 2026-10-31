/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400716b2 */

void FUN_1400716b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_1 + 8),0x20);
    return;
  }
  return;
}

