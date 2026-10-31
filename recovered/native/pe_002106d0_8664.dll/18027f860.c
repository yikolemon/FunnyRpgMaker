/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f860 */

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180421168;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180420f10 + uVar1 * 0x28));
    DAT_180421168 = DAT_180421168 - 1;
  }
  return 1;
}

