/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a0d20 */

void __cdecl FUN_004a0d20(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x22;
    return;
  }
  return;
}

