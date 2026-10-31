/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800682b6 */

void FUN_1800682b6(longlong param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1800682e4(param_1);
    return;
  }
  FUN_180068342(param_1);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

