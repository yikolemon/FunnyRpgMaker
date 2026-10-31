/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002ffa */

longlong FUN_180002ffa(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    return *(longlong *)(param_1 + 0x68);
  }
  return param_1 + 0x68;
}

