/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6b45 */

/* Library Function - Single Match
    void __cdecl __dcrt_lowio_initialize_console_output(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __dcrt_lowio_initialize_console_output(void)

{
  DAT_0051b760 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}

