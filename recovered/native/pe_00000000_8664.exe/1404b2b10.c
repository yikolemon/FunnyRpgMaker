/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b2b10 */

/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _realloc_base(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    lVar2 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_1404a2310();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          lVar2 = (*(code *)s_GetSystemTimePreciseAsFileTime_14059e042._22_8_)
                            (DAT_1406328c8,0,param_1,param_2);
          if (lVar2 != 0) {
            return lVar2;
          }
          iVar1 = FUN_1404b49a0();
        } while ((iVar1 != 0) && (iVar1 = FUN_14048eff0(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_14048fb3c();
      *puVar3 = 0xc;
    }
    lVar2 = 0;
  }
  return lVar2;
}

