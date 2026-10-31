/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049a3c5 */

/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_0049a725(param_1,7);
    FUN_0049a725(param_1 + 7,7);
    FUN_0049a725(param_1 + 0xe,0xc);
    FUN_0049a725(param_1 + 0x1a,0xc);
    FUN_0049a725(param_1 + 0x26,2);
    FUN_00495f00((LPVOID)param_1[0x28]);
    FUN_00495f00((LPVOID)param_1[0x29]);
    FUN_00495f00((LPVOID)param_1[0x2a]);
    FUN_0049a725(param_1 + 0x2d,7);
    FUN_0049a725(param_1 + 0x34,7);
    FUN_0049a725(param_1 + 0x3b,0xc);
    FUN_0049a725(param_1 + 0x47,0xc);
    FUN_0049a725(param_1 + 0x53,2);
    FUN_00495f00((LPVOID)param_1[0x55]);
    FUN_00495f00((LPVOID)param_1[0x56]);
    FUN_00495f00((LPVOID)param_1[0x57]);
    FUN_00495f00((LPVOID)param_1[0x58]);
  }
  return;
}

