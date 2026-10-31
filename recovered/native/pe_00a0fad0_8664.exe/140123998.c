/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140123998 */

/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  int iVar1;
  
  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_140123a14();
    FUN_140123b14();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}

