/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b5bac */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1401aecc8();
  if (((DAT_140f29f00 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_140f32bf8);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401a0758();
    }
  }
  return lVar2;
}

