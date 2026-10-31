/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e210 */

void FUN_14007e210(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

