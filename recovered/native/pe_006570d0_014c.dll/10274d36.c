/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274d36 */

/* Library Function - Single Match
    ___acrt_LCMapStringEx@36
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LCMapStringEx_36
               (undefined4 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
               int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  LCID Locale;
  
  pcVar1 = (code *)FUN_10275222();
  if (pcVar1 == (code *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    (*pcVar1)();
  }
  return;
}

