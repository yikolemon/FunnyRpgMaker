/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013902 */

void FUN_180013902(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_180001ef2(param_1 + 0x10);
  }
  FUN_1800137c6(param_1);
  return;
}

