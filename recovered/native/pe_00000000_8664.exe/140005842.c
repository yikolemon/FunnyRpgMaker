/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005842 */

void Unwind_140005842(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_2 + 0x20),0x20);
  }
  return;
}

