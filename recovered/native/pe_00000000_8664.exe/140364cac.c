/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140364cac */

longlong FUN_140364cac(longlong *param_1)

{
  if (*param_1 != 0) {
    return *param_1;
  }
  return (longlong)(int)param_1[1] * 0xb0 + *(longlong *)(DAT_14062a630 + 0x2570);
}

