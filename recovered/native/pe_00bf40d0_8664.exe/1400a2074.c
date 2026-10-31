/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2074 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a2074(uint param_1,short *param_2,uint param_3,uint param_4)

{
  FARPROC pFVar1;
  
  if (DAT_140151098 == (FARPROC)0xffffffffffffffff) {
LAB_1400a20d9:
    FUN_1400b0188(param_1,param_2,param_3);
  }
  else {
    pFVar1 = DAT_140151098;
    if (DAT_140151098 == (FARPROC)0x0) {
      pFVar1 = FUN_1400a24ac(0x13,"LCIDToLocaleName",(uint *)&DAT_14010fea8,(uint *)&DAT_14010feb0);
      if (pFVar1 == (FARPROC)0x0) goto LAB_1400a20d9;
    }
    (*pFVar1)((ulonglong)param_1,param_2,param_3,param_4);
  }
  return;
}

