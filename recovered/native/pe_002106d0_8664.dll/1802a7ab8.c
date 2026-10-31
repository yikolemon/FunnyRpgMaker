/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7ab8 */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_180416870 == (HANDLE)0xfffffffffffffffe) {
    DAT_180416870 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_180416870 != (HANDLE)0xffffffffffffffff;
}

