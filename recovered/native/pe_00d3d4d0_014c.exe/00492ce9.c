/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492ce9 */

/* Library Function - Single Match
    int __cdecl set_buffer(class __crt_stdio_stream,char * const,unsigned int,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl set_buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  LOCK();
  param_1[3] = param_1[3] | param_4;
  UNLOCK();
  param_1[6] = param_3;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = 0;
  return 0;
}

