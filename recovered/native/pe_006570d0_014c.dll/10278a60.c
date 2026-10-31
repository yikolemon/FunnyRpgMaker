/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278a60 */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_public_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
allocate(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_1,
        undefined4 param_2)

{
  int iVar1;
  
  __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(param_1);
  iVar1 = FUN_1025bf0d(param_1 + 8,param_2,param_1);
  if (iVar1 == 0) {
    param_1[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x1;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return iVar1;
}

