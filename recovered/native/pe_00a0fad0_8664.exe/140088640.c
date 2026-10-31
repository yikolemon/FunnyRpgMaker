/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088640 */

longlong FUN_140088640(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    return *(longlong *)(param_1 + 0x18);
  }
  return param_1 + 0x18;
}

