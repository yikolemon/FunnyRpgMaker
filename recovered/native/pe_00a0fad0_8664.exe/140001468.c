/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001468 */

void FUN_140001468(void)

{
  FUN_1400017de(&DAT_1401cbea8);
  if (DAT_1401cbea0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbea0 + 0x20))(DAT_1401cbea0,DAT_1401cbea0 != (longlong *)&DAT_1401cbe68);
    DAT_1401cbea0 = (longlong *)0x0;
  }
  if (DAT_1401cbe60 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbe60 + 0x20))(DAT_1401cbe60,DAT_1401cbe60 != (longlong *)&DAT_1401cbe28);
    DAT_1401cbe60 = (longlong *)0x0;
  }
  return;
}

