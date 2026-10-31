/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2760 */

/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_140143390,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_1400969a0();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140093cc0(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_140095e5c();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

