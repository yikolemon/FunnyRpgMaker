/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180067022 */

void FUN_180067022(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18002491d(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x60);
    return;
  }
  return;
}

