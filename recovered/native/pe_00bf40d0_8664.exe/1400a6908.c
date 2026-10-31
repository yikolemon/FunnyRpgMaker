/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a6908 */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1400a6d50(param_1,7);
    FUN_1400a6d50(param_1 + 7,7);
    FUN_1400a6d50(param_1 + 0xe,0xc);
    FUN_1400a6d50(param_1 + 0x1a,0xc);
    FUN_1400a6d50(param_1 + 0x26,2);
    FUN_1400a1290((LPVOID)param_1[0x28]);
    FUN_1400a1290((LPVOID)param_1[0x29]);
    FUN_1400a1290((LPVOID)param_1[0x2a]);
    FUN_1400a6d50(param_1 + 0x2c,7);
    FUN_1400a6d50(param_1 + 0x33,7);
    FUN_1400a6d50(param_1 + 0x3a,0xc);
    FUN_1400a6d50(param_1 + 0x46,0xc);
    FUN_1400a6d50(param_1 + 0x52,2);
    FUN_1400a1290((LPVOID)param_1[0x54]);
    FUN_1400a1290((LPVOID)param_1[0x55]);
    FUN_1400a1290((LPVOID)param_1[0x56]);
    FUN_1400a1290((LPVOID)param_1[0x57]);
  }
  return;
}

