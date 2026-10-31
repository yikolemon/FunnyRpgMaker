/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185088 */

void FUN_180185088(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18009c848(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x40);
    return;
  }
  return;
}

