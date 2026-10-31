/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488b1f */

/* Library Function - Single Match
    __get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl __get_stream_buffer_pointers(int param_1,int *param_2,int *param_3,int *param_4)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return 0x16;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + 4;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_1 + 8;
  }
  return 0;
}

