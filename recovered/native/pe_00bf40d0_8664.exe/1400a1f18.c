/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1f18 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a1f18(ushort *param_1)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_140151088 != (FARPROC)0xffffffffffffffff) {
    pFVar1 = DAT_140151088;
    if (DAT_140151088 == (FARPROC)0x0) {
      pFVar1 = FUN_1400a24ac(0x11,"IsValidLocaleName",(uint *)&DAT_14010fe98,(uint *)&DAT_14010fea0)
      ;
      if (pFVar1 == (FARPROC)0x0) goto LAB_1400a1f62;
    }
    (*pFVar1)(param_1);
    return;
  }
LAB_1400a1f62:
  Locale = FUN_1400a20fc(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001400a1f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsValidLocale(Locale,1);
  return;
}

