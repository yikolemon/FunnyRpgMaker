/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000576a */

void Unwind_14000576a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_2 + 0x28),0x10);
  }
  return;
}

