/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d83b */

/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  LOCK();
  param_1[3] = 0;
  UNLOCK();
  return;
}

