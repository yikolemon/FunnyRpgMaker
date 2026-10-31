/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002327a */

void Unwind_18002327a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20) != *(longlong *)(param_2 + 0x20) + 0x40) {
    thunk_FUN_180290e40();
  }
  return;
}

