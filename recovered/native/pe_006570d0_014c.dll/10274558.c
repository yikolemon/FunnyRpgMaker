/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274558 */

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_1027be80(*(undefined4 *)(param_1 + 0x4c));
    ppuVar1 = *(undefined ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_103a50f0) && (ppuVar1 != &PTR_DAT_1039b408)) &&
       (ppuVar1[3] == (undefined *)0x0)) {
      FUN_1027bf01(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    FUN_1027be03(param_2);
  }
  return;
}

