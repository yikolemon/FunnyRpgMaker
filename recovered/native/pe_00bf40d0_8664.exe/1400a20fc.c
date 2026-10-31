/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a20fc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a20fc(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;
  
  if (DAT_1401510a0 == (FARPROC)0xffffffffffffffff) {
LAB_1400a214b:
    FUN_1400b00e0(param_1);
  }
  else {
    pFVar1 = DAT_1401510a0;
    if (DAT_1401510a0 == (FARPROC)0x0) {
      pFVar1 = FUN_1400a24ac(0x14,"LocaleNameToLCID",(uint *)&DAT_14010feb0,(uint *)&DAT_14010feb8);
      if (pFVar1 == (FARPROC)0x0) goto LAB_1400a214b;
    }
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}

