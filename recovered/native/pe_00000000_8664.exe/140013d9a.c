/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013d9a */

void Unwind_140013d9a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58) = 0;
  return;
}

