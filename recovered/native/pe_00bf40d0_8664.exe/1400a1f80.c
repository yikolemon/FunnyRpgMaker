/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1f80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a1f80(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_140151090 == (FARPROC)0xffffffffffffffff) {
LAB_1400a202b:
    Locale = FUN_1400a20fc(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pFVar1 = DAT_140151090;
    if (DAT_140151090 == (FARPROC)0x0) {
      pFVar1 = FUN_1400a24ac(0x12,"LCMapStringEx",(uint *)&DAT_14010fea0,(uint *)&DAT_14010fea8);
      if (pFVar1 == (FARPROC)0x0) goto LAB_1400a202b;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

