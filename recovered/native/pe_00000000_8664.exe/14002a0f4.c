/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002a0f4 */

void Unwind_14002a0f4(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_14018e090(*(undefined8 *)(param_2 + 0x20),0xd8);
  }
  return;
}

