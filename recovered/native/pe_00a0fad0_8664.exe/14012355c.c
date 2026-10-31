/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012355c */

/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,
                        undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
                        undefined4 param_8,undefined4 param_9)

{
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_1401235f4(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

