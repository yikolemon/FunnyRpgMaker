/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f36b */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_stdio_output::stream_output_adapter<char>::write_string(char const
   * const,int,int * const,class __crt_deferred_errno_cache &)const 
    public: void __thiscall __crt_stdio_output::stream_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,class __crt_deferred_errno_cache &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall write_string(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  if (((*(uint *)(*param_1 + 0xc) >> 0xc & 1) != 0) && (*(int *)(*param_1 + 4) == 0)) {
    *param_4 = *param_4 + param_3;
    return;
  }
  FUN_1025f27a();
  return;
}

