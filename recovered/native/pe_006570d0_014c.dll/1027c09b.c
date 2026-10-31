/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c09b */

/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_10325310)) &&
     (param_1[0x2c] == (undefined *)0x0)) {
    ___acrt_locale_free_time(param_1);
    FUN_10274120(param_1);
  }
  return;
}

