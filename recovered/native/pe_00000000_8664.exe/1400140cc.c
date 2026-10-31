/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400140cc */

void Unwind_1400140cc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18) = 0;
  return;
}

