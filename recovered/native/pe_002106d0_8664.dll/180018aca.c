/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018aca */

void FUN_180018aca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != param_1 + 0x80) {
    thunk_FUN_180290e40();
    return;
  }
  return;
}

