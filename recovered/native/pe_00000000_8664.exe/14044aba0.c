/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044aba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044aba0(longlong param_1)

{
  if ((param_1 == ram0x000140613b10) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140457990(param_1);
  return;
}

