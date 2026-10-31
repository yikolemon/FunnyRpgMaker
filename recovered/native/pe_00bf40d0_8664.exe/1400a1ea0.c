/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1ea0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a1ea0(short *param_1,uint param_2)

{
  LCID LVar1;
  FARPROC pFVar2;
  
  if (DAT_140151070 == (FARPROC)0xffffffffffffffff) {
LAB_1400a1eef:
    LVar1 = GetUserDefaultLCID();
    FUN_1400a2074(LVar1,param_1,param_2,0);
  }
  else {
    pFVar2 = DAT_140151070;
    if (DAT_140151070 == (FARPROC)0x0) {
      pFVar2 = FUN_1400a24ac(0xe,"GetUserDefaultLocaleName",(uint *)&DAT_14010fe90,
                             (uint *)&DAT_14010fe98);
      if (pFVar2 == (FARPROC)0x0) goto LAB_1400a1eef;
    }
    (*pFVar2)(param_1,(ulonglong)param_2);
  }
  return;
}

