/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102797a0 */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_c(struct __acrt_stdio_stream_mode &,bool &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_c(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 != false) {
    return false;
  }
  *param_2 = true;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
  return true;
}

