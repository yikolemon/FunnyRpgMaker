/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274bdb */

/* Library Function - Single Match
    ___acrt_GetDateFormatEx@28
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_GetDateFormatEx_28
               (undefined4 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,
               int param_6,undefined4 param_7)

{
  code *pcVar1;
  LCID Locale;
  
  pcVar1 = (code *)FUN_1027514b();
  if (pcVar1 == (code *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    (*pcVar1)();
  }
  return;
}

