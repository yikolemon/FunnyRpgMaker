/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000cf4c */

void Unwind_18000cf4c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28) = 0;
  return;
}

