/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001000 */

void FUN_140001000(void)

{
  FUN_1400017de(&DAT_1401cbc08);
  if (DAT_1401cbc00 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbc00 + 0x20))(DAT_1401cbc00,DAT_1401cbc00 != (longlong *)&DAT_1401cbbc8);
    DAT_1401cbc00 = (longlong *)0x0;
  }
  if (DAT_1401cbbc0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbbc0 + 0x20))(DAT_1401cbbc0,DAT_1401cbbc0 != (longlong *)&DAT_1401cbb88);
    DAT_1401cbbc0 = (longlong *)0x0;
  }
  return;
}

