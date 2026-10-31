/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a64c */

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::_deallocate(void)
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_public_dynamic_resizing>::_deallocate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __fastcall deallocate(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    thunk_FUN_10274120(*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}

