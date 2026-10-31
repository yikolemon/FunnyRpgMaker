/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121af4 */

/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_140355028) && ((DAT_1401caf00 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}

