/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c5a72 */

void FUN_1800c5a72(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 0x10));
    return;
  }
  return;
}

