/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012293c */

/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_140355114 == 0) {
    __acrt_lock(6);
    if (DAT_140355114 == 0) {
      FUN_140122eec();
      LOCK();
      DAT_140355114 = DAT_140355114 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}

