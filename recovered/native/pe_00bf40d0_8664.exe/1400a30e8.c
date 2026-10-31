/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a30e8 */

/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  longlong lVar1;
  bool bVar2;
  
  __acrt_lock(7);
  lVar1 = __acrt_lowio_ensure_fh_exists(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    FUN_1400a3164();
    FUN_1400a3264();
  }
  __acrt_unlock(7);
  return bVar2;
}

