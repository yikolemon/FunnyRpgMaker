/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a21b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a21b0(void)

{
  FARPROC pFVar1;
  
  if (DAT_1401510c8 != (FARPROC)0xffffffffffffffff) {
    pFVar1 = DAT_1401510c8;
    if ((DAT_1401510c8 == (FARPROC)0x0) &&
       (pFVar1 = FUN_1400a24ac(0x19,"RoUninitialize",(uint *)&DAT_14010febc,(uint *)&DAT_14010fec0),
       pFVar1 == (FARPROC)0x0)) {
      return;
    }
    (*pFVar1)();
  }
  return;
}

