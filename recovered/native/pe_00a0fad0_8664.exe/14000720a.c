/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000720a */

void Unwind_14000720a(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x20),0x10);
  }
  return;
}

