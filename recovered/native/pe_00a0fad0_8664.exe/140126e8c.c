/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140126e8c */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1401ca580) {
      FUN_1401212e0();
    }
    if ((undefined *)param_1[1] != PTR_DAT_1401ca588) {
      FUN_1401212e0();
    }
    if ((undefined *)param_1[2] != PTR_DAT_1401ca590) {
      FUN_1401212e0();
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1401ca5d8) {
      FUN_1401212e0();
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_1401ca5e0) {
      FUN_1401212e0();
    }
  }
  return;
}

