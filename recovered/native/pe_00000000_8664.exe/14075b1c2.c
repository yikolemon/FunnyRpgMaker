/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b1c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b1c2(void)

{
  if (*(uint *)((ulonglong)_DAT_150af8914 + 0xc04) != 0) {
    (*(code *)(ulonglong)*(uint *)((ulonglong)_DAT_150af8914 + 0xc04))();
  }
  return;
}

