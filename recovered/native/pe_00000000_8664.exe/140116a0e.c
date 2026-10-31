/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140116a0e */

void FUN_140116a0e(longlong param_1)

{
  FUN_1400da5e2(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

