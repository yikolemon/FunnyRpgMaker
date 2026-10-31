/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029260c */

/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_180421334 == 0) {
    __acrt_lock(6);
    if (DAT_180421334 == 0) {
      FUN_180292bbc();
      LOCK();
      DAT_180421334 = DAT_180421334 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}

