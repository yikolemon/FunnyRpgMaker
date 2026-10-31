/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029170c */

void FUN_18029170c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_180421248)[param_3]) && ((DAT_180416760 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}

