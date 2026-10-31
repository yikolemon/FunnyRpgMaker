/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ae360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1400ae360(double param_1)

{
  __acrt_ptd *p_Var1;
  
  if (_DAT_140113f30 <=
      (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_1400b6b04,
                       SUB84(param_1,0) & _DAT_1400b6b00)) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x22;
  }
  return SUB84(param_1,0);
}

