/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180290ea0 */

/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1804213f8,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_1802a34d0();
    } while ((iVar1 != 0) && (iVar1 = FUN_18027db20(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18027e66c();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}

