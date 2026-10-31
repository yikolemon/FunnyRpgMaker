/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bb7c */

void Unwind_14000bb7c(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x20),0x80);
  }
  return;
}

