/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b5b4c */

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140eb7630)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}

