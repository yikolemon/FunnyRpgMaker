/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e1f4 */

void Unwind_14000e1f4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_2 + 0x20),0x20);
  }
  return;
}

