/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f810 */

/* Library Function - Single Match
    char const * __cdecl std::_Syserror_map(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl std::_Syserror_map(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_004acee8;
  do {
    if (*ppuVar1 == (undefined *)param_1) {
      return ppuVar1[1];
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_004ad160);
  return "unknown error";
}

