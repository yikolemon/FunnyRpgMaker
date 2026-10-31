/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400384e9 */

ushort FUN_1400384e9(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 2) >> 0xf;
  }
  return 0;
}

