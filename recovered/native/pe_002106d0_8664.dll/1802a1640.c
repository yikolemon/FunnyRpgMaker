/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a1640 */

/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = (LPVOID)_malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_180290e40();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_1804213f8,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_1802a34d0();
        } while ((iVar1 != 0) && (iVar1 = FUN_18027db20(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_18027e66c();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}

