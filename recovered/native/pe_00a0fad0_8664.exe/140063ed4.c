/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063ed4 */

void Unwind_140063ed4(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x24) & 1) != 0) {
    thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x28),0x38);
  }
  return;
}

