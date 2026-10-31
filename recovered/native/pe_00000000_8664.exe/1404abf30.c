/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404abf30 */

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined *param_1)

{
  if (((param_1 != (undefined *)0x0) && (param_1 != &DAT_140564820)) &&
     (*(int *)(param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time();
    FUN_1404a2310(param_1);
  }
  return;
}

