/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b19a4 */

void FUN_1401b19a4(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_1401aecc8();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_140f331f8);
  return;
}

