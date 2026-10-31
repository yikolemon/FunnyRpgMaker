/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000109c */

void Unwind_14000109c(void)

{
  if (DAT_1401cbc00 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbc00 + 0x20))(DAT_1401cbc00,DAT_1401cbc00 != (longlong *)&DAT_1401cbbc8);
    DAT_1401cbc00 = (longlong *)0x0;
  }
  return;
}

