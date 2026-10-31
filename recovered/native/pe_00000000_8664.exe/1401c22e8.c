/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c22e8 */

/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
   __int64,unsigned int,bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      piVar2 = (int *)FUN_14019e8cc();
      iVar1 = 0x22;
      goto LAB_1401c2302;
    }
    if (param_4 - 2 < 0x23) {
      iVar1 = FUN_1401c2354(param_1);
      return iVar1;
    }
  }
  piVar2 = (int *)FUN_14019e8cc();
  iVar1 = 0x16;
LAB_1401c2302:
  *piVar2 = iVar1;
  FUN_1401ae640();
  return iVar1;
}

