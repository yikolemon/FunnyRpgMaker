/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277dd4 */

void FUN_140277dd4(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140235ded(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1404a2310(*(longlong *)(param_1 + 8),0x50);
    return;
  }
  return;
}

