/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a0a4 */

void Unwind_14001a0a4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x20) != *(longlong *)(param_2 + 0x30) + 0x40) {
    thunk_FUN_1401aea30();
  }
  return;
}

