/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400186f2 */

void Unwind_1400186f2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20) != *(longlong *)(param_2 + 0x20) + 0x40) {
    thunk_FUN_1401aea30();
  }
  return;
}

