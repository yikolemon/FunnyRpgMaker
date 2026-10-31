/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f682 */

__acrt_ptd * FUN_0048f682(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_004961fe();
  p_Var2 = (__acrt_ptd *)&DAT_0051adf8;
  if (p_Var1 != (__acrt_ptd *)0x0) {
    p_Var2 = p_Var1 + 0x14;
  }
  return p_Var2;
}

