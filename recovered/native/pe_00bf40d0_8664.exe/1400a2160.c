/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2160 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_1400a2160(uint param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1401510c0 == (FARPROC)0xffffffffffffffff) {
    return 0;
  }
  pFVar1 = DAT_1401510c0;
  if ((DAT_1401510c0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1400a24ac(0x18,"RoInitialize",(uint *)&DAT_14010feb8,(uint *)&DAT_14010febc),
     pFVar1 == (FARPROC)0x0)) {
    return 0;
  }
  IVar2 = (*pFVar1)((ulonglong)param_1);
  return IVar2;
}

