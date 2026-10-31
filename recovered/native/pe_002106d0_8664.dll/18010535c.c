/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010535c */

void FUN_18010535c(longlong param_1)

{
  FUN_18010665a(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}

