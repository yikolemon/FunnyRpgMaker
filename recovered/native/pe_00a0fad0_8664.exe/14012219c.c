/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012219c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14012219c(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_14036f090 == (code *)0xffffffffffffffff) {
LAB_140122247:
    Locale = FUN_140122318(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_14036f090;
    if (DAT_14036f090 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401225d8(0x12,"LCMapStringEx",&DAT_140168950,&DAT_140168958);
      if (pcVar1 == (code *)0x0) goto LAB_140122247;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

