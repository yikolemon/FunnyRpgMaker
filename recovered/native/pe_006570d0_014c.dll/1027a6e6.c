/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a6e6 */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_public_dynamic_resizing>::call_win32_function<class
   <lambda_0d87af4cf61654f651d26e3c6a4f13fc> >(class <lambda_0d87af4cf61654f651d26e3c6a4f13fc> const
   &)
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::call_win32_function<class
   <lambda_44f1df80ccead0226c26eac3423fba1d> >(class <lambda_44f1df80ccead0226c26eac3423fba1d> const
   &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall call_win32_function<>(int param_1,undefined4 *param_2)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0xc),*(LPWSTR *)(param_1 + 8),
                           (LPWSTR *)0x0);
  if (DVar1 == 0) {
LAB_1027a706:
    DVar1 = GetLastError();
    ___acrt_errno_map_os_error(DVar1);
    piVar2 = (int *)FUN_10268ffd();
    iVar3 = *piVar2;
  }
  else {
    if (*(uint *)(param_1 + 0xc) < DVar1) {
      iVar3 = allocate(DVar1 + 1);
      if (iVar3 != 0) {
        return iVar3;
      }
      DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0xc),*(LPWSTR *)(param_1 + 8),
                               (LPWSTR *)0x0);
      if (DVar1 == 0) goto LAB_1027a706;
    }
    *(DWORD *)(param_1 + 0x10) = DVar1;
    iVar3 = 0;
  }
  return iVar3;
}

