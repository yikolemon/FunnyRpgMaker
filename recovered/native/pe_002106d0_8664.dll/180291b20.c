/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291b20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291b20(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180450050 == (code *)0xffffffffffffffff) {
LAB_180291b85:
    Locale = FUN_180291ec8(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_180450050;
    if (DAT_180450050 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(10,"GetLocaleInfoEx",&DAT_1803536f0,&DAT_1803536f8);
      if (pcVar1 == (code *)0x0) goto LAB_180291b85;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

