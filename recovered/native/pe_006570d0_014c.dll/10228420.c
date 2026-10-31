/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10228420 */

/* Library Function - Single Match
    int __cdecl std::_Winerror_map(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl std::_Winerror_map(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10297088;
  do {
    if (*ppuVar1 == (undefined *)param_1) {
      return (int)ppuVar1[1];
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &bad_function_call::vftable_meta_ptr);
  return 0;
}

