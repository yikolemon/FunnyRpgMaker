/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102283f0 */

/* Library Function - Single Match
    char const * __cdecl std::_Syserror_map(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl std::_Syserror_map(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_10296e10;
  do {
    if (*ppuVar1 == (undefined *)param_1) {
      return ppuVar1[1];
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_10297088);
  return "unknown error";
}

