/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b1ce8 */

/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
   __int64,unsigned int,bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      p_Var1 = FUN_140095e5c();
      iVar3 = 0x22;
      goto LAB_1400b1d02;
    }
    if (param_4 - 2 < 0x23) {
      uVar2 = FUN_1400b1d54(param_1,param_2,param_3,param_4,param_5);
      return (int)uVar2;
    }
  }
  p_Var1 = FUN_140095e5c();
  iVar3 = 0x16;
LAB_1400b1d02:
  *(int *)p_Var1 = iVar3;
  FUN_1400a0ea0();
  return iVar3;
}

