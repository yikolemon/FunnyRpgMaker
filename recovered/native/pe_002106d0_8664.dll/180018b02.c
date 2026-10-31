/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018b02 */

void Unwind_180018b02(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x60) != *(longlong *)(param_2 + 0x20) + 0x80) {
    thunk_FUN_180290e40();
  }
  return;
}

