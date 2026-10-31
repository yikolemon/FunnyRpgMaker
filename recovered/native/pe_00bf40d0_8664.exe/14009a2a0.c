/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009a2a0 */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_140143390,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_1400969a0();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140093cc0(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_140095e5c();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

