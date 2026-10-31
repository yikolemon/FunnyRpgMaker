/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004849f0 */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_00521638 != 0;
}

