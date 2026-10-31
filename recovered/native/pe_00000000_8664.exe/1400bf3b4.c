/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bf3b4 */

void FUN_1400bf3b4(longlong param_1)

{
  FUN_1400bf498(*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

