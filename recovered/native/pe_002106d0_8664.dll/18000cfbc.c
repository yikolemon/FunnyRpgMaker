/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000cfbc */

void Unwind_18000cfbc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 8) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8) = 0;
  return;
}

