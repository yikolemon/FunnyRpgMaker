/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802916a4 */

/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180421248) && ((DAT_180416760 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}

