/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274c32 */

/* Library Function - Single Match
    ___acrt_GetLocaleInfoEx@16
   
   Library: Visual Studio 2019 Release */

void ___acrt_GetLocaleInfoEx_16(undefined4 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  code *pcVar1;
  LCID Locale;
  
  pcVar1 = (code *)FUN_10275176();
  if (pcVar1 == (code *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1);
    (*pcVar1)();
  }
  return;
}

