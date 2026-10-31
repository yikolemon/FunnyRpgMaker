/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180299e20 */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_180415dd0) {
      FUN_180290e40();
    }
    if ((undefined *)param_1[1] != PTR_DAT_180415dd8) {
      FUN_180290e40();
    }
    if ((undefined *)param_1[2] != PTR_DAT_180415de0) {
      FUN_180290e40();
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_180415e28) {
      FUN_180290e40();
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_180415e30) {
      FUN_180290e40();
    }
  }
  return;
}

