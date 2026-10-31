/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a680 */

/* Library Function - Single Match
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_no_resizing>::call_win32_function<class
   <lambda_33d632c04396b3de813369f94278cf6d> >(class <lambda_33d632c04396b3de813369f94278cf6d> const
   &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::
call_win32_function<<lambda_33d632c04396b3de813369f94278cf6d>_>
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing> *this,
          <lambda_33d632c04396b3de813369f94278cf6d> *param_1)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  
  DVar1 = GetFullPathNameW(*(LPCWSTR *)param_1,*(DWORD *)(this + 0xc),*(LPWSTR *)(this + 8),
                           (LPWSTR *)0x0);
  if (DVar1 == 0) {
LAB_1027a6a0:
    DVar1 = GetLastError();
    ___acrt_errno_map_os_error(DVar1);
    piVar2 = (int *)FUN_10268ffd();
    iVar3 = *piVar2;
  }
  else {
    if (*(uint *)(this + 0xc) < DVar1) {
      iVar3 = allocate(this,DVar1 + 1);
      if (iVar3 != 0) {
        return iVar3;
      }
      DVar1 = GetFullPathNameW(*(LPCWSTR *)param_1,*(DWORD *)(this + 0xc),*(LPWSTR *)(this + 8),
                               (LPWSTR *)0x0);
      if (DVar1 == 0) goto LAB_1027a6a0;
    }
    *(DWORD *)(this + 0x10) = DVar1;
    iVar3 = 0;
  }
  return iVar3;
}

