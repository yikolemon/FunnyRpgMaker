/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011c85c */

bool FUN_18011c85c(longlong param_1)

{
  if ((*(char *)(param_1 + 0x10a) == '\x01') && (param_1 == *(longlong *)(param_1 + 0x418))) {
    return (*(byte *)(param_1 + 0x16) & 2) == 0;
  }
  return false;
}

