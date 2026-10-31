/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027b2f8 */

/* Library Function - Multiple Matches With Different Base Names
    ___acrt_locale_free_monetary
    ___free_lconv_mon
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void FID_conflict____acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1039b38c) {
      FUN_10274120(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1039b390) {
      FUN_10274120(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1039b394) {
      FUN_10274120(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1039b398) {
      FUN_10274120(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1039b39c) {
      FUN_10274120(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1039b3a0) {
      FUN_10274120(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1039b3a4) {
      FUN_10274120(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1039b3b8) {
      FUN_10274120(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_1039b3bc) {
      FUN_10274120(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1039b3c0) {
      FUN_10274120(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_1039b3c4) {
      FUN_10274120(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1039b3c8) {
      FUN_10274120(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_1039b3cc) {
      FUN_10274120(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}

