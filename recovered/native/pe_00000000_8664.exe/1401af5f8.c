/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af5f8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af5f8(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                  LPWSTR param_5,int param_6,undefined8 param_7)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_140f4f028 == (code *)0xffffffffffffffff) {
LAB_1401af67c:
    Locale = FUN_1401afa68(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_140f4f028;
    if (DAT_140f4f028 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401afe18(5,"GetDateFormatEx",&DAT_140eb79c8,&DAT_140eb79d0);
      if (pcVar1 == (code *)0x0) goto LAB_1401af67c;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

