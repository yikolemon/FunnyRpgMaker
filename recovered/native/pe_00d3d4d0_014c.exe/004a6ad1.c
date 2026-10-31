/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6ad1 */

/* Library Function - Single Match
    ___dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool ___dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_0051b760 == -2) {
    __dcrt_lowio_initialize_console_output();
  }
  return DAT_0051b760 != -1;
}

