/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d8aa */

void FUN_18001d8aa(longlong param_1)

{
  FUN_18001e0c0(param_1 + 0x38);
  if (*(int *)(param_1 + 0x70) == 0x5e) {
    FUN_18001d792(param_1 + 0x38);
    FUN_18001d674(param_1);
  }
  FUN_18001e498(param_1);
  return;
}

