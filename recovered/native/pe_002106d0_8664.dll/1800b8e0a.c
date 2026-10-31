/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8e0a */

void FUN_1800b8e0a(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_180060538(param_1 + 0x18);
    FUN_180004cea(param_1);
    return;
  }
  return;
}

