/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180239580(void)

{
  undefined **local_res10 [3];
  
  local_res10[0] = &PTR_vftable_180404628;
  PTR_vftable_180404628 = (undefined *)std::bad_alloc::vftable;
  _DAT_180404590 = 0xe06d7363;
  _DAT_180404594 = 1;
  _DAT_180404598 = 0;
  _DAT_1804045a0 = 0;
  _DAT_1804045a8 = 4;
  _DAT_1804045b0 = 0x19930520;
  _DAT_1804045b8 = &PTR_vftable_180404628;
  _DAT_1804045c0 = &DAT_180391540;
  _DAT_1804045c8 = RtlPcToFileHeader(&DAT_180391540,local_res10);
  if (_DAT_1804045c8 == (PVOID)0x0) {
    _DAT_1804045b0 = 0x1994000;
  }
  FUN_18023d710(&DAT_1802aaf60);
  return;
}

