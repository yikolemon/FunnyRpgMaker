/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180293b58 */

/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  int iVar1;
  
  __acrt_lock(7);
  iVar1 = __acrt_lowio_ensure_fh_exists(0);
  if (iVar1 == 0) {
    FUN_180293bd4();
    FUN_180293cd4();
  }
  __acrt_unlock(7);
  return iVar1 == 0;
}

