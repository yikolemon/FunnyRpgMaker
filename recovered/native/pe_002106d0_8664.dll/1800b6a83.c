/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6a83 */

void FUN_1800b6a83(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_180004cea(param_1 + 8);
  }
  return;
}

