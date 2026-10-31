/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802394d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802394d0(void)

{
  undefined **local_res10 [3];
  
  local_res10[0] = &PTR_vftable_180404568;
  PTR_vftable_180404568 = (undefined *)std::bad_exception::vftable;
  _DAT_1804044d0 = 0xe06d7363;
  _DAT_1804044d4 = 1;
  _DAT_1804044d8 = 0;
  _DAT_1804044e0 = 0;
  _DAT_1804044e8 = 4;
  _DAT_1804044f0 = 0x19930520;
  _DAT_1804044f8 = &PTR_vftable_180404568;
  _DAT_180404500 = &DAT_1803a6370;
  _DAT_180404508 = RtlPcToFileHeader(&DAT_1803a6370,local_res10);
  if (_DAT_180404508 == (PVOID)0x0) {
    _DAT_1804044f0 = 0x1994000;
  }
  FUN_18023d710(&DAT_1802aaf60);
  return;
}

