/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e109a */

void FUN_1400e109a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_140077b90();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  return;
}

