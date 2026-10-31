/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005dfec */

void FUN_14005dfec(longlong param_1)

{
  FUN_14005e8c6(param_1 + 0x38);
  if (*(int *)(param_1 + 0x70) == 0x5e) {
    FUN_14005dece(param_1 + 0x38);
    FUN_14005ddac(param_1);
  }
  FUN_14005ed64(param_1);
  return;
}

