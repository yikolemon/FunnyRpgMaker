/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102797e4 */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_T(struct __acrt_stdio_stream_mode &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_T(__acrt_stdio_stream_mode *param_1)

{
  if ((*(uint *)param_1 & 0x1000) != 0) {
    return false;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  return true;
}

