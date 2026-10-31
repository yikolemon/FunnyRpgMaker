/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027b613 */

/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_numeric
    ___free_lconv_num
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void FID_conflict____free_lconv_num(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1039b380) {
      FUN_10274120((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1039b384) {
      FUN_10274120((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1039b388) {
      FUN_10274120((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_1039b3b0) {
      FUN_10274120((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_1039b3b4) {
      FUN_10274120((undefined *)param_1[0xd]);
    }
  }
  return;
}

