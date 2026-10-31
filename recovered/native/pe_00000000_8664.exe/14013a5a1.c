/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a5a1 */

ushort FUN_14013a5a1(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 2) >> 0xf;
  }
  return 0;
}

