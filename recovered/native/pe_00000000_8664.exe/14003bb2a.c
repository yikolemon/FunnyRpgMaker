/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bb2a */

void Unwind_14003bb2a(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + 0x22b) = *(byte *)(param_2 + 0x22e) & 1;
  *(undefined1 *)(param_2 + 0x22a) = *(undefined1 *)(param_2 + 0x22c);
  *(byte *)(param_2 + 0x229) = *(byte *)(param_2 + 0x22d) & 1;
  return;
}

