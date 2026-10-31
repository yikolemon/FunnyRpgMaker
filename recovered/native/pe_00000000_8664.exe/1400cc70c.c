/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cc70c */

longlong FUN_1400cc70c(longlong *param_1)

{
  if (*param_1 != 0) {
    return *param_1;
  }
  return (longlong)(int)param_1[1] * 0xb0 + *(longlong *)(DAT_140f2a910 + 0x2570);
}

