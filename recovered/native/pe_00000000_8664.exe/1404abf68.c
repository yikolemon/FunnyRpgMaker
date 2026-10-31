/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404abf68 */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1404a25a8();
  if (((DAT_140627c30 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    FID_conflict___acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_140632718);
    FID_conflict___acrt_lock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVar2;
}

