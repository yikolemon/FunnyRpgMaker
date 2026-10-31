/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001582 */

void FUN_140001582(void)

{
  FUN_1400017de(&DAT_1401cbf50);
  if (DAT_1401cbf48 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbf48 + 0x20))(DAT_1401cbf48,DAT_1401cbf48 != (longlong *)&DAT_1401cbf10);
    DAT_1401cbf48 = (longlong *)0x0;
  }
  if (DAT_1401cbf08 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbf08 + 0x20))(DAT_1401cbf08,DAT_1401cbf08 != (longlong *)&DAT_1401cbed0);
    DAT_1401cbf08 = (longlong *)0x0;
  }
  return;
}

