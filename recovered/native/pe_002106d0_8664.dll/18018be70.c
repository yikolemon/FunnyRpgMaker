/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018be70 */

void FUN_18018be70(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18009c848(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x30);
    return;
  }
  return;
}

