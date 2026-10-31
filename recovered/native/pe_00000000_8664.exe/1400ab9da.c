/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ab9da */

void FUN_1400ab9da(longlong param_1)

{
  FUN_140077b90(*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

