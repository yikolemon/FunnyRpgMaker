/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180034c44 */

void FUN_180034c44(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180023818(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x20);
    return;
  }
  return;
}

