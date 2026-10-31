/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027b6f7 */

/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_locale_free_time(int param_1)

{
  if (param_1 != 0) {
    FUN_1027ba57(param_1,7);
    FUN_1027ba57(param_1 + 0x1c,7);
    FUN_1027ba57(param_1 + 0x38,0xc);
    FUN_1027ba57(param_1 + 0x68,0xc);
    FUN_1027ba57(param_1 + 0x98,2);
    FUN_10274120(*(undefined4 *)(param_1 + 0xa0));
    FUN_10274120(*(undefined4 *)(param_1 + 0xa4));
    FUN_10274120(*(undefined4 *)(param_1 + 0xa8));
    FUN_1027ba57(param_1 + 0xb4,7);
    FUN_1027ba57(param_1 + 0xd0,7);
    FUN_1027ba57(param_1 + 0xec,0xc);
    FUN_1027ba57(param_1 + 0x11c,0xc);
    FUN_1027ba57(param_1 + 0x14c,2);
    FUN_10274120(*(undefined4 *)(param_1 + 0x154));
    FUN_10274120(*(undefined4 *)(param_1 + 0x158));
    FUN_10274120(*(undefined4 *)(param_1 + 0x15c));
    FUN_10274120(*(undefined4 *)(param_1 + 0x160));
  }
  return;
}

