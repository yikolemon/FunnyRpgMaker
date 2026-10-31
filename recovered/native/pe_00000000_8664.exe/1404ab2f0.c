/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ab2f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != DAT_1406272a0) {
      FUN_1404a2310();
    }
    if (param_1[1] != _s_std___1406272a8) {
      FUN_1404a2310();
    }
    if (param_1[2] != DAT_1406272b0) {
      FUN_1404a2310();
    }
    if (param_1[0xb] != s___AV__moneypunct__W_00_std___1406272e8._16_8_) {
      FUN_1404a2310();
    }
    if (param_1[0xc] != ram0x000140627300) {
      FUN_1404a2310();
    }
  }
  return;
}

