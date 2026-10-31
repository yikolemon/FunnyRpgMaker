/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400062b4 */

void Unwind_1400062b4(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x24) & 1) != 0) {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x28),0x38);
  }
  return;
}

