/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a60d */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_public_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall allocate(int param_1,int param_2)

{
  int iVar1;
  
  deallocate();
  iVar1 = FUN_1027a4dc(param_1 + 8,param_2 * 2,param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    iVar1 = 0;
    *(int *)(param_1 + 0xc) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return iVar1;
}

