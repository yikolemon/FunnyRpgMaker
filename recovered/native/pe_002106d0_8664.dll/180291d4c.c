/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291d4c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291d4c(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180450090 == (code *)0xffffffffffffffff) {
LAB_180291df7:
    Locale = FUN_180291ec8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_180450090;
    if (DAT_180450090 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(0x12,"LCMapStringEx",&DAT_180353710,&DAT_180353718);
      if (pcVar1 == (code *)0x0) goto LAB_180291df7;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

