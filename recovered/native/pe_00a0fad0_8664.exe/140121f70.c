/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121f70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140121f70(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_14036f050 == (code *)0xffffffffffffffff) {
LAB_140121fd5:
    Locale = FUN_140122318(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_14036f050;
    if (DAT_14036f050 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401225d8(10,"GetLocaleInfoEx",&DAT_140168930,&DAT_140168938);
      if (pcVar1 == (code *)0x0) goto LAB_140121fd5;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

