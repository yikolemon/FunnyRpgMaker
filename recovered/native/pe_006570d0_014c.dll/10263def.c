/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263def */

/* Library Function - Single Match
    void __cdecl __crt_strtox::assemble_floating_point_zero(bool,class
   __crt_strtox::floating_point_value const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __crt_strtox::assemble_floating_point_zero(bool param_1,floating_point_value *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2[4] != (floating_point_value)0x0) {
    puVar1 = (undefined4 *)FUN_10263d77();
    *puVar1 = 0;
    puVar1[1] = (uint)param_1 << 0x1f;
    return;
  }
  piVar2 = (int *)FUN_10263d9c();
  *piVar2 = (uint)param_1 << 0x1f;
  return;
}

