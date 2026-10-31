/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b01ac */

/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_140f32ce4 == 0) {
    __acrt_lock(6);
    if (DAT_140f32ce4 == 0) {
      FUN_1401b075c();
      LOCK();
      DAT_140f32ce4 = DAT_140f32ce4 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}

