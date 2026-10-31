/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287c0a */

/* Library Function - Single Match
    ___dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool ___dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_1039bcf0 == -2) {
    __dcrt_lowio_initialize_console_output();
  }
  return DAT_1039bcf0 != -1;
}

