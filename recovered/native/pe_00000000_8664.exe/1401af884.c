/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af884 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af884(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_140f4f088 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_140f4f088;
    if (DAT_140f4f088 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401afe18(0x11,"IsValidLocaleName",&DAT_140eb79e8,&DAT_140eb79f0);
      if (pcVar1 == (code *)0x0) goto LAB_1401af8ce;
    }
    (*pcVar1)(param_1);
    return;
  }
LAB_1401af8ce:
  Locale = FUN_1401afa68(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001401af8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsValidLocale(Locale,1);
  return;
}

