/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801537dc */

longlong FUN_1801537dc(longlong *param_1)

{
  if (*param_1 != 0) {
    return *param_1;
  }
  return (longlong)(int)param_1[1] * 0xb0 + *(longlong *)(DAT_180419160 + 0x2570);
}

