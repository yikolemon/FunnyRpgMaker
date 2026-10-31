/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2250 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_1400a2250(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1401510d8 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1401510d8;
  if ((DAT_1401510d8 == (FARPROC)0x0) &&
     (pFVar1 = FUN_1400a24ac(0x1b,"AppPolicyGetThreadInitializationType",(uint *)&DAT_14010fec4,
                             (uint *)&PTR_u_ja_JP_14010fec8), pFVar1 == (FARPROC)0x0)) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}

