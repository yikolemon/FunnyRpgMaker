/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001405c */

void Unwind_14001405c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x38) != 0) {
    thunk_FUN_1401aea30();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x38) = 0;
  return;
}

