/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010de1e */

void FUN_14010de1e(longlong param_1)

{
  FUN_1400da5e2(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

