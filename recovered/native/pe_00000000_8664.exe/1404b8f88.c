/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b8f88 */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_140627d40 == -2) {
    DAT_140627d40 =
         (*(code *)s_GetDateFormatW_14059dda8._0_8_)(L"emfunctions-l1-1-0",0x40000000,3,0,3,0,0);
  }
  return DAT_140627d40 != -1;
}

