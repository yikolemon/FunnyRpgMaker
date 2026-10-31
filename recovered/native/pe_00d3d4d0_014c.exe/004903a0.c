/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004903a0 */

undefined4 __cdecl FUN_004903a0(int param_1,int param_2)

{
  __acrt_ptd *p_Var1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
  }
  return 0x7fffffff;
}

