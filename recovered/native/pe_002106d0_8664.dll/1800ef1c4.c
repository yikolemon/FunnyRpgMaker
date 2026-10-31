/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ef1c4 */

void FUN_1800ef1c4(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1800b11e4(param_1 + 0x28);
    FUN_180001ef2(param_1);
    return;
  }
  return;
}

