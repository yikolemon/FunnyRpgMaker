/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a789 */

/* Library Function - Single Match
    bool __cdecl is_slash(wchar_t)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl is_slash(wchar_t param_1)

{
  if ((param_1 != L'\\') && (param_1 != L'/')) {
    return false;
  }
  return true;
}

