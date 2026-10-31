/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f247a */

void FUN_1800f247a(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800f209d(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x48);
    return;
  }
  return;
}

