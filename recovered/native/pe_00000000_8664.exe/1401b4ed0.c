/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b4ed0 */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_140f29570) {
      FUN_1401aea30();
    }
    if ((undefined *)param_1[1] != PTR_DAT_140f29578) {
      FUN_1401aea30();
    }
    if ((undefined *)param_1[2] != PTR_DAT_140f29580) {
      FUN_1401aea30();
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_140f295c8) {
      FUN_1401aea30();
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_140f295d0) {
      FUN_1401aea30();
    }
  }
  return;
}

