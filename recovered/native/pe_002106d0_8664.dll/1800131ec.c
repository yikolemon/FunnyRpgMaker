/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800131ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800131ec(void)

{
  _DAT_1804174f0 = NamedPipeClient::vftable;
  FUN_180001ef2(&DAT_180417500);
  _DAT_1804174f0 = NamedPipe::vftable;
  if (DAT_1804174f8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_1804174f8);
    DAT_1804174f8 = (HANDLE)0xffffffffffffffff;
  }
  return;
}

