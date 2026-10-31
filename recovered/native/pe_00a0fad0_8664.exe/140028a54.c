/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140028a54 */

void FUN_140028a54(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_140028c58(*(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x50;
    return;
  }
  FUN_140028a8e(param_1);
  return;
}

