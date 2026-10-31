/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c510 */

/* Library Function - Single Match
    ___scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_1039ce00;
  if ((iVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1039ce00 = 0;
    UNLOCK();
    iVar2 = iVar1;
  }
  return iVar2;
}

