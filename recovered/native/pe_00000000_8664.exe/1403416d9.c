/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403416d9 */

void FUN_1403416d9(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140340d49();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

