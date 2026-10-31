/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004962f4 */

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0049ab9c(*(int *)(param_1 + 0x4c));
    ppuVar1 = *(undefined ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_00521b90) && (ppuVar1 != &PTR_DAT_0051ae88)) &&
       (ppuVar1[3] == (undefined *)0x0)) {
      FUN_0049ac1d((int)ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    FUN_0049ab1f((int)param_2);
  }
  return;
}

