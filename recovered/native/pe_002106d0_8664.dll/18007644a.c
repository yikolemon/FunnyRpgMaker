/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007644a */

longlong FUN_18007644a(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    return *(longlong *)(param_1 + 0x18);
  }
  return param_1 + 0x18;
}

