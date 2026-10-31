/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1b0c */

void FUN_1400a1b0c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_1401431e8)[param_3]) && ((DAT_14013c4a0 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}

