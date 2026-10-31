/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6b64 */

/* Library Function - Multiple Matches With Different Base Names
    ___dcrt_terminate_console_input
    ___dcrt_terminate_console_output
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict____dcrt_terminate_console_output(void)

{
  if ((DAT_0051b760 != (HANDLE)0xffffffff) && (DAT_0051b760 != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_0051b760);
  }
  return;
}

