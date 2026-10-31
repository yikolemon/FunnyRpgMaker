/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049a2e1 */

/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_numeric
    ___free_lconv_num
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict____free_lconv_num(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_0051ae00) {
      FUN_00495f00((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_0051ae04) {
      FUN_00495f00((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_0051ae08) {
      FUN_00495f00((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_0051ae30) {
      FUN_00495f00((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_0051ae34) {
      FUN_00495f00((undefined *)param_1[0xd]);
    }
  }
  return;
}

