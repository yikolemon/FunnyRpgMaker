/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024a56 */

void Unwind_180024a56(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x20) != *(longlong *)(param_2 + 0x30) + 0x40) {
    thunk_FUN_180290e40();
  }
  return;
}

