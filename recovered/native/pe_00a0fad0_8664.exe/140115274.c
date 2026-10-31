/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140115274 */

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_140354f48;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140354cf0 + uVar1 * 0x28));
    DAT_140354f48 = DAT_140354f48 - 1;
  }
  return 1;
}

