/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400386f8 */

void Unwind_1400386f8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x60) != *(longlong *)(param_2 + 0x20) + 0x80) {
    thunk_FUN_1401aea30();
  }
  return;
}

