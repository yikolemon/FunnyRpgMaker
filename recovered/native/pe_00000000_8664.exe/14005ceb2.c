/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ceb2 */

void Unwind_14005ceb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xbe) == '\x01') {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0xb0),0x20);
  }
  return;
}

