/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274cfe */

/* Library Function - Single Match
    ___acrt_IsValidLocaleName@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_IsValidLocaleName_4(undefined4 param_1)

{
  code *pcVar1;
  LCID Locale;
  DWORD dwFlags;
  
  pcVar1 = (code *)FUN_102751f7();
  if (pcVar1 == (code *)0x0) {
    dwFlags = 1;
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    IsValidLocale(Locale,dwFlags);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1);
    (*pcVar1)();
  }
  return;
}

