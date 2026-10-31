/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490c6a */

undefined4 __cdecl FUN_00490c6a(FILE *param_1,longlong *param_2)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  
  if (param_1 == (FILE *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return 0xffffffff;
  }
  if (param_2 == (longlong *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
  }
  else {
    lVar2 = FUN_004919d9(param_1);
    *param_2 = lVar2;
    if (lVar2 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}

