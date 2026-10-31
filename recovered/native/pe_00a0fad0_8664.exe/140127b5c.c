/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140127b5c */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140121578();
  if (((DAT_1401caf00 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_140355028);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
  }
  return lVar2;
}

