/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10282760 */

/* Library Function - Single Match
    __realloc_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __realloc_base(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_10274170(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_10274120(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar1 = HeapReAlloc(DAT_103a5228,0,param_1,param_2);
          if (pvVar1 != (LPVOID)0x0) {
            return pvVar1;
          }
          iVar3 = FUN_102834e0();
        } while ((iVar3 != 0) && (iVar3 = FUN_102684d0(param_2), iVar3 != 0));
      }
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0xc;
    }
    pvVar1 = (LPVOID)0x0;
  }
  return pvVar1;
}

