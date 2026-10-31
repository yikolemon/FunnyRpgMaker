/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140047b7a */

void Unwind_140047b7a(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x20),0x40);
  }
  return;
}

