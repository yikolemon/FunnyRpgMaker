/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e5ac4 */

void FUN_1400e5ac4(longlong param_1)

{
  FUN_1400e38fe(param_1);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

