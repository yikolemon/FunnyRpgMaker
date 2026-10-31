/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1e0c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a1e0c(ushort *param_1,uint param_2,LPWSTR param_3,uint param_4)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_140151050 == (FARPROC)0xffffffffffffffff) {
LAB_1400a1e71:
    Locale = FUN_1400a20fc(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pFVar1 = DAT_140151050;
    if (DAT_140151050 == (FARPROC)0x0) {
      pFVar1 = FUN_1400a24ac(10,"GetLocaleInfoEx",(uint *)&DAT_14010fe80,(uint *)&DAT_14010fe88);
      if (pFVar1 == (FARPROC)0x0) goto LAB_1400a1e71;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4);
  }
  return;
}

