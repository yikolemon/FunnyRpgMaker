/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e8aa */

void FUN_14007e8aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

