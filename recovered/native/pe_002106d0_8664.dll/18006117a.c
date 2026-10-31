/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006117a */

void FUN_18006117a(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x20);
    return;
  }
  return;
}

