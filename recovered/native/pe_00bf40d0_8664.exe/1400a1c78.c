/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1c78 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a1c78(ushort *param_1,uint param_2,PCNZWCH param_3,uint param_4,PCNZWCH param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400a2660();
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_1400a20fc(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

