/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140058d7c */

void Unwind_140058d7c(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x20),0xf8);
  }
  return;
}

