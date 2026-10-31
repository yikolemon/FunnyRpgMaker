/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140126f94 */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1401273dc(param_1,7);
    FUN_1401273dc(param_1 + 0x38,7);
    FUN_1401273dc(param_1 + 0x70,0xc);
    FUN_1401273dc(param_1 + 0xd0,0xc);
    FUN_1401273dc(param_1 + 0x130,2);
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x140));
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x148));
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x150));
    FUN_1401273dc(param_1 + 0x160,7);
    FUN_1401273dc(param_1 + 0x198,7);
    FUN_1401273dc(param_1 + 0x1d0,0xc);
    FUN_1401273dc(param_1 + 0x230,0xc);
    FUN_1401273dc(param_1 + 0x290,2);
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x2a8));
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x2b0));
    FUN_1401212e0(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}

