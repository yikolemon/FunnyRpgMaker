/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ae3a0 */

undefined4 FUN_1400ae3a0(double param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0.0) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x22;
  }
  return SUB84(param_1,0);
}

