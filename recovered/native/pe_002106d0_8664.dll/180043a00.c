/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180043a00 */

void FUN_180043a00(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180022f89(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x40);
    return;
  }
  return;
}

