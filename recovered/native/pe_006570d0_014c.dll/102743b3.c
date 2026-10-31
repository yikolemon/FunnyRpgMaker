/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102743b3 */

/* Library Function - Single Match
    ___acrt_uninitialize_ptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_uninitialize_ptd(void)

{
  if (DAT_1039b400 != -1) {
    FUN_10274baa(DAT_1039b400);
    DAT_1039b400 = -1;
  }
  return 1;
}

