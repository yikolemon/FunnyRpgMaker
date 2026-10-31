/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041c10 */

longlong FUN_140041c10(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    return *(longlong *)(param_1 + 0x68);
  }
  return param_1 + 0x68;
}

