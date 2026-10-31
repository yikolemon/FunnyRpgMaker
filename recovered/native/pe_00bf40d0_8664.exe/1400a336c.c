/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a336c */

void FUN_1400a336c(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_1400a1528();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1401437b8);
  return;
}

