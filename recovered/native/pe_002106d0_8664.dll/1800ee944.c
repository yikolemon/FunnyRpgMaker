/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ee944 */

void FUN_1800ee944(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180001ef2(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x40);
    return;
  }
  return;
}

