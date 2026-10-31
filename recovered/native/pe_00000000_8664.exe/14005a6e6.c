/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005a6e6 */

void Unwind_14005a6e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x9f) == '\x01') {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x90),0x10);
  }
  return;
}

