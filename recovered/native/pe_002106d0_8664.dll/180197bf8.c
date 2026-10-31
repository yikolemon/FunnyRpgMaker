/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197bf8 */

bool FUN_180197bf8(longlong param_1,ushort param_2)

{
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    return *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2) < 0xfffe;
  }
  return false;
}

