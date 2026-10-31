/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029aa98 */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1802910d8();
  if (((DAT_180416760 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_180421248);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVar2;
}

