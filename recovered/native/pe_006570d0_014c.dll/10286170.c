/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286170 */

/* Library Function - Multiple Matches With Same Base Name
    void * __cdecl create_file(wchar_t const * const,struct _SECURITY_ATTRIBUTES * const,struct
   `anonymous namespace'::file_options)
    void * __cdecl create_file(wchar_t const * const,struct _SECURITY_ATTRIBUTES * const,struct
   `anonymous namespace'::file_options)
    void * __cdecl create_file(wchar_t const * const,struct _SECURITY_ATTRIBUTES * const,struct
   `anonymous namespace'::file_options)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void create_file(LPCWSTR param_1,LPSECURITY_ATTRIBUTES param_2,undefined4 param_3,DWORD param_4,
                DWORD param_5,DWORD param_6,uint param_7,uint param_8)

{
  CreateFileW(param_1,param_4,param_6,param_2,param_5,param_7 | param_8,(HANDLE)0x0);
  return;
}

