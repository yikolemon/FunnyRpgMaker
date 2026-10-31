/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490c23 */

/* Library Function - Single Match
    __fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl __fgetc_nolock(FILE *param_1)

{
  char **ppcVar1;
  byte bVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  
  if (param_1 == (FILE *)0x0) {
    p_Var3 = FUN_0048f66d();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_00495c88();
    return 0xffffffff;
  }
  ppcVar1 = &param_1->_base;
  *ppcVar1 = *ppcVar1 + -1;
  if ((int)*ppcVar1 < 0) {
    uVar4 = FUN_0049f976(param_1);
    return uVar4;
  }
  bVar2 = *param_1->_ptr;
  param_1->_ptr = param_1->_ptr + 1;
  return (uint)bVar2;
}

