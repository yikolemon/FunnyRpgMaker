/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b4fd8 */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1401b5420(param_1,7);
    FUN_1401b5420(param_1 + 0x38,7);
    FUN_1401b5420(param_1 + 0x70,0xc);
    FUN_1401b5420(param_1 + 0xd0,0xc);
    FUN_1401b5420(param_1 + 0x130,2);
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x140));
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x148));
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x150));
    FUN_1401b5420(param_1 + 0x160,7);
    FUN_1401b5420(param_1 + 0x198,7);
    FUN_1401b5420(param_1 + 0x1d0,0xc);
    FUN_1401b5420(param_1 + 0x230,0xc);
    FUN_1401b5420(param_1 + 0x290,2);
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x2a8));
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x2b0));
    FUN_1401aea30(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}

