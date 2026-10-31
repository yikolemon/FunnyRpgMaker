/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a6800 */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_14013bb30) {
      FUN_1400a1290((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_14013bb38) {
      FUN_1400a1290((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_14013bb40) {
      FUN_1400a1290((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_14013bb88) {
      FUN_1400a1290((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_14013bb90) {
      FUN_1400a1290((undefined *)param_1[0xc]);
    }
  }
  return;
}

