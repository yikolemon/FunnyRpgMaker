/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af6c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af6c0(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_140f4f050 == (code *)0xffffffffffffffff) {
LAB_1401af725:
    Locale = FUN_1401afa68(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_140f4f050;
    if (DAT_140f4f050 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401afe18(10,"GetLocaleInfoEx",&DAT_140eb79d0,&DAT_140eb79d8);
      if (pcVar1 == (code *)0x0) goto LAB_1401af725;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

