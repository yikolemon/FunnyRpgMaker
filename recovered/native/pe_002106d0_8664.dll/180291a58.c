/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291a58 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291a58(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                  LPWSTR param_5,int param_6,undefined8 param_7)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180450028 == (code *)0xffffffffffffffff) {
LAB_180291adc:
    Locale = FUN_180291ec8(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_180450028;
    if (DAT_180450028 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(5,"GetDateFormatEx",&DAT_1803536e8,&DAT_1803536f0);
      if (pcVar1 == (code *)0x0) goto LAB_180291adc;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

