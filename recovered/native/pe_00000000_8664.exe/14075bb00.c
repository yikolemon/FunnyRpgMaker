/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075bb00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14075bb00(void)

{
  uint uVar1;
  uint unaff_retaddr;
  
  uVar1 = _DAT_150af925b + 0xe4;
  if (unaff_retaddr != 0) {
    uVar1 = unaff_retaddr;
  }
  return -(uint)(_DAT_150a146ec <= ((float *)(ulonglong)uVar1)[1] &&
                _DAT_150a146ec <= *(float *)(ulonglong)uVar1) & 0xffffff01;
}

