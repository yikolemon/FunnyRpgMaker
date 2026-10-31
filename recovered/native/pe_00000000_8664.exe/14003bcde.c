/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bcde */

void Unwind_14003bcde(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x224) = *(undefined1 *)(param_2 + 0x225);
  *(byte *)(param_2 + 0x223) = *(byte *)(param_2 + 0x226) & 1;
  return;
}

