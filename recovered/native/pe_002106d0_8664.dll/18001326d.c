/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001326d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_18001326d(void)

{
  _DAT_1804174f0 = NamedPipe::vftable;
  if (DAT_1804174f8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_1804174f8);
    DAT_1804174f8 = (HANDLE)0xffffffffffffffff;
  }
  return;
}

