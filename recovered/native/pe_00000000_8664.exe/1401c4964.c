/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c4964 */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_140f2a010 == (HANDLE)0xfffffffffffffffe) {
    DAT_140f2a010 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_140f2a010 != (HANDLE)0xffffffffffffffff;
}

