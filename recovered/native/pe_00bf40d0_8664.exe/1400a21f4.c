/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a21f4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_1400a21f4(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1401510d0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1401510d0;
  if ((DAT_1401510d0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1400a24ac(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_14010fec0,
                             (uint *)&DAT_14010fec4), pFVar1 == (FARPROC)0x0)) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}

