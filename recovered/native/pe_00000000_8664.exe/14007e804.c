/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e804 */

void FUN_14007e804(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

