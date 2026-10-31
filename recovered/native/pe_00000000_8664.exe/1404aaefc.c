/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aaefc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x18) != DAT_1406272b8) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x20) != DAT_1406272c0) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x28) != DAT_1406272c8) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x30) != _s__std___1406272d0) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x38) != DAT_1406272d8) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x40) != DAT_1406272e0) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x48) != s___AV__moneypunct__W_00_std___1406272e8._0_8_) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x68) != DAT_140627308) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x70) != DAT_140627310) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x78) != DAT_140627318) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x80) != s___AV__time_get__WV__istreambuf_i_140627320._0_8_) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x88) != s___AV__time_get__WV__istreambuf_i_140627320._8_8_) {
      FUN_1404a2310();
    }
    if (*(longlong *)(param_1 + 0x90) != s___AV__time_get__WV__istreambuf_i_140627320._16_8_) {
      FUN_1404a2310();
    }
  }
  return;
}

