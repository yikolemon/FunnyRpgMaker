/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122134 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140122134(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_14036f088 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_14036f088;
    if (DAT_14036f088 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401225d8(0x11,"IsValidLocaleName",&DAT_140168948,&DAT_140168950);
      if (pcVar1 == (code *)0x0) goto LAB_14012217e;
    }
    (*pcVar1)(param_1);
    return;
  }
LAB_14012217e:
  Locale = FUN_140122318(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000140122194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsValidLocale(Locale,1);
  return;
}

