/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180184c66 */

void FUN_180184c66(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1801849db(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x68);
    return;
  }
  return;
}

