/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027972a */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_plus(struct __acrt_stdio_stream_mode &,bool &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_plus(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 == false) {
    *param_2 = true;
    if ((*(uint *)param_1 & 2) == 0) {
      *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
      return true;
    }
  }
  return false;
}

