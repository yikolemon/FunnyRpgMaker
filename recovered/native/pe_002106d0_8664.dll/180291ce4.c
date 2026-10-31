/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291ce4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291ce4(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180450088 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_180450088;
    if (DAT_180450088 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(0x11,"IsValidLocaleName",&DAT_180353708,&DAT_180353710);
      if (pcVar1 == (code *)0x0) goto LAB_180291d2e;
    }
    (*pcVar1)(param_1);
    return;
  }
LAB_180291d2e:
  Locale = FUN_180291ec8(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180291d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsValidLocale(Locale,1);
  return;
}

