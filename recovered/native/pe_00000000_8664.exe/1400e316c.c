/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e316c */

bool FUN_1400e316c(longlong param_1,ushort param_2)

{
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    return *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2) < 0xfffe;
  }
  return false;
}

