/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000d166 */

void Unwind_18000d166(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x38) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x38) = 0;
  return;
}

