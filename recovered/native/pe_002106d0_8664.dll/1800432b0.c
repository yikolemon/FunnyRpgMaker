/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800432b0 */

void Unwind_1800432b0(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != *(longlong *)(param_2 + 0x28)) {
    thunk_FUN_180290e40();
  }
  return;
}

