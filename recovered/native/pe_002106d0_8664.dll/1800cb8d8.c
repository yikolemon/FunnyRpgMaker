/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cb8d8 */

void FUN_1800cb8d8(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18001828d(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x48);
    return;
  }
  return;
}

