/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048a5dc */

/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  byte bVar1;
  
  if (param_3 == 2) {
    return false;
  }
  if (((param_3 != 3) && (param_3 != 0xc)) && (param_3 != 0xd)) {
    bVar1 = 1;
    if ((param_2 == L'c') || (param_2 == L's')) {
      bVar1 = 0;
    }
    return (bool)(bVar1 ^ (param_1 & 4) != 0);
  }
  return true;
}

