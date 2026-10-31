/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121ea8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140121ea8(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                  LPWSTR param_5,int param_6,undefined8 param_7)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_14036f028 == (code *)0xffffffffffffffff) {
LAB_140121f2c:
    Locale = FUN_140122318(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_14036f028;
    if (DAT_14036f028 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401225d8(5,"GetDateFormatEx",&DAT_140168928,&DAT_140168930);
      if (pcVar1 == (code *)0x0) goto LAB_140121f2c;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

