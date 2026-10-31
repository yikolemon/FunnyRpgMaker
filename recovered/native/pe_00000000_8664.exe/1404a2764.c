/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2764 */

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined *puVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref();
    puVar1 = *(undefined **)(param_1 + 0x90);
    if (((puVar1 != DAT_140632718) && (puVar1 != &DAT_140627370)) && (*(int *)(puVar1 + 0x10) == 0))
    {
      __acrt_free_locale();
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref(param_2);
  }
  return;
}

