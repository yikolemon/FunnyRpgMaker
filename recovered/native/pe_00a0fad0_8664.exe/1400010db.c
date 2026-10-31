/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400010db */

void Unwind_1400010db(void)

{
  if (DAT_1401cbbc0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbbc0 + 0x20))(DAT_1401cbbc0,DAT_1401cbbc0 != (longlong *)&DAT_1401cbb88);
    DAT_1401cbbc0 = (longlong *)0x0;
  }
  return;
}

