/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f697 */

/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_errno_map_os_error(uint param_1)

{
  __acrt_ptd *p_Var1;
  undefined *puVar2;
  
  p_Var1 = FUN_0048f682();
  *(uint *)p_Var1 = param_1;
  puVar2 = FUN_0048f6ba(param_1);
  p_Var1 = FUN_0048f66d();
  *(undefined **)p_Var1 = puVar2;
  return;
}

