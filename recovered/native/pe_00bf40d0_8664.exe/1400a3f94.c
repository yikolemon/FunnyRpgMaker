/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a3f94 */

/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_1400a4220(local_res8,local_res18,local_res8,local_res10);
  return;
}

