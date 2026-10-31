/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049628a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

__acrt_ptd * __cdecl FUN_0049628a(undefined4 param_1,int param_2)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  bool bVar3;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_0051ae80 != 0xffffffff) {
    p_Var1 = (__acrt_ptd *)FUN_00496937(DAT_0051ae80);
    if (p_Var1 != (__acrt_ptd *)0x0) {
      bVar3 = p_Var1 == (__acrt_ptd *)0xffffffff;
      goto LAB_004962bb;
    }
  }
  p_Var1 = FUN_004964a5();
  bVar3 = p_Var1 == (__acrt_ptd *)0x0;
LAB_004962bb:
  if (!bVar3) {
    p_Var2 = p_Var1 + param_2 * 0x364;
  }
  return p_Var2;
}

