/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180293e04 */

void FUN_180293e04(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_1802910d8();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_180421848);
  return;
}

