/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000390c */

void Unwind_14000390c(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + 0x8a9) = *(byte *)(param_2 + 0x8ab) & 1;
  *(undefined1 *)(param_2 + 0x8a8) = *(undefined1 *)(param_2 + 0x8aa);
  *(undefined1 *)(param_2 + 0x8a7) = *(undefined1 *)(param_2 + 0x8aa);
  return;
}

