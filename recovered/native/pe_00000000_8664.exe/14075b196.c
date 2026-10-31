/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b196 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b196(void)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = _DAT_2710808b1039d74c;
  UNRECOVERED_JUMPTABLE = (code *)(ulonglong)_DAT_2710808b1039d74c;
  *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)_DAT_2710808b1039d74c);
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014075b1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

