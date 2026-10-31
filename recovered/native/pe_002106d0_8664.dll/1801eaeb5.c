/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eaeb5 */

ushort FUN_1801eaeb5(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 2) >> 0xf;
  }
  return 0;
}

