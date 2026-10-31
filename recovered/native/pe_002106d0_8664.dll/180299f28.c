/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180299f28 */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18029a370(param_1,7);
    FUN_18029a370(param_1 + 0x38,7);
    FUN_18029a370(param_1 + 0x70,0xc);
    FUN_18029a370(param_1 + 0xd0,0xc);
    FUN_18029a370(param_1 + 0x130,2);
    FUN_180290e40(*(undefined8 *)(param_1 + 0x140));
    FUN_180290e40(*(undefined8 *)(param_1 + 0x148));
    FUN_180290e40(*(undefined8 *)(param_1 + 0x150));
    FUN_18029a370(param_1 + 0x160,7);
    FUN_18029a370(param_1 + 0x198,7);
    FUN_18029a370(param_1 + 0x1d0,0xc);
    FUN_18029a370(param_1 + 0x230,0xc);
    FUN_18029a370(param_1 + 0x290,2);
    FUN_180290e40(*(undefined8 *)(param_1 + 0x2a0));
    FUN_180290e40(*(undefined8 *)(param_1 + 0x2a8));
    FUN_180290e40(*(undefined8 *)(param_1 + 0x2b0));
    FUN_180290e40(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}

