/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b2d3c */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_14013c5b0 == (HANDLE)0xfffffffffffffffe) {
    DAT_14013c5b0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_14013c5b0 != (HANDLE)0xffffffffffffffff;
}

