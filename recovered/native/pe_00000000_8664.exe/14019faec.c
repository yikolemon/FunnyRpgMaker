/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019faec */

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
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_140f328c0 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      __acrt_uninitialize_locks(0);
      return 0;
    }
    DAT_140f32b18 = DAT_140f32b18 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 0xf);
  return 1;
}

