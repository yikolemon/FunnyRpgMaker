/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f818 */

/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_initialize_locks(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180420f10 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      __acrt_uninitialize_locks(0);
      return 0;
    }
    DAT_180421168 = DAT_180421168 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 0xf);
  return 1;
}

