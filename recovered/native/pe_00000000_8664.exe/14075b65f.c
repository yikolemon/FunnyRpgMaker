/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b65f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14075b65f(void)

{
  uint unaff_retaddr;
  undefined4 uStackX_8;
  
  if (*(char *)((ulonglong)_DAT_150af8db5 + 0xec + (ulonglong)unaff_retaddr) != '\x01') {
    return false;
  }
  if (uStackX_8 < 0.0) {
    uStackX_8 = *(float *)((ulonglong)_DAT_150b095da + 0x90);
  }
  return uStackX_8 * uStackX_8 <=
         *(float *)((ulonglong)_DAT_150b095da + 0xbc4 + (ulonglong)unaff_retaddr * 4);
}

