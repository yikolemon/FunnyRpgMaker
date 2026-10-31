/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000809c */

void Unwind_14000809c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 8) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8) = 0;
  return;
}

