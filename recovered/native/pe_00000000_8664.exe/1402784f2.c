/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402784f2 */

void FUN_1402784f2(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140235ded(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1404a2310(*(longlong *)(param_1 + 8),0x60);
    return;
  }
  return;
}

