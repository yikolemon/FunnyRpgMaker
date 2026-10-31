/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140039358 */

void Unwind_140039358(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x20),0x128);
  }
  return;
}

