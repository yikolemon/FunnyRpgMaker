/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140074954 */

void Unwind_140074954(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc4) == '\x01') {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0xb8),0x20);
  }
  return;
}

