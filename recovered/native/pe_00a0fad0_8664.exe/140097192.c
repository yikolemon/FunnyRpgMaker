/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140097192 */

void Unwind_140097192(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x20),0x30);
  }
  return;
}

