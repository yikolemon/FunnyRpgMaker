/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e78b */

/* Library Function - Single Match
    __get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __get_stream_buffer_pointers(int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
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

