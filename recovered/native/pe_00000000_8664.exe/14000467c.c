/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000467c */

void Unwind_14000467c(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x6f) = *(undefined1 *)(param_2 + 0x6e);
  if (*(char *)(param_2 + 0x6d) == '\x01') {
    FUN_140001056(param_2 + 0x20);
  }
  *(undefined1 *)(param_2 + 0x6f) = *(undefined1 *)(param_2 + 0x6e);
  return;
}

