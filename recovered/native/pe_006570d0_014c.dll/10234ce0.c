/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234ce0 */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1039d80c != 0;
}

