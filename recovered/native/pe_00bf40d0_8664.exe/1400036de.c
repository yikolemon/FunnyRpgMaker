/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400036de */

longlong FUN_1400036de(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    return *(longlong *)(param_1 + 0x68);
  }
  return param_1 + 0x68;
}

