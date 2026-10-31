/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287c9d */

/* Library Function - Multiple Matches With Different Base Names
    ___dcrt_terminate_console_input
    ___dcrt_terminate_console_output
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict____dcrt_terminate_console_output(void)

{
  if ((DAT_1039bcf0 != (HANDLE)0xffffffff) && (DAT_1039bcf0 != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_1039bcf0);
  }
  return;
}

