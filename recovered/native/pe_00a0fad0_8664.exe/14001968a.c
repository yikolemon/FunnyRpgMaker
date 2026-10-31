/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001968a */

void Unwind_14001968a(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x6f) = *(undefined1 *)(param_2 + 0x6e);
  if (*(char *)(param_2 + 0x6d) == '\x01') {
    FUN_1400017de(param_2 + 0x20);
  }
  *(undefined1 *)(param_2 + 0x6f) = *(undefined1 *)(param_2 + 0x6e);
  return;
}

