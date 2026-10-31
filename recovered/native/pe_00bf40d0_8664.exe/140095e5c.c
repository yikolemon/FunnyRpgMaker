/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095e5c */

__acrt_ptd * FUN_140095e5c(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_1400a1588();
  p_Var2 = p_Var1 + 0x20;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_14013bb20;
  }
  return p_Var2;
}

