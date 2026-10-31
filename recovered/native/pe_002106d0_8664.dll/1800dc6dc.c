/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dc6dc */

void FUN_1800dc6dc(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800d5355(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x60);
    return;
  }
  return;
}

