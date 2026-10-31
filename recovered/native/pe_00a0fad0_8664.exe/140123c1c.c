/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140123c1c */

void FUN_140123c1c(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_140121578();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1403555f8);
  return;
}

