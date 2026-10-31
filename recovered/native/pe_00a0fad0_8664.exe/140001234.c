/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001234 */

void FUN_140001234(void)

{
  FUN_1400017de(&DAT_1401cbd58);
  if (DAT_1401cbd50 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbd50 + 0x20))(DAT_1401cbd50,DAT_1401cbd50 != (longlong *)&DAT_1401cbd18);
    DAT_1401cbd50 = (longlong *)0x0;
  }
  if (DAT_1401cbd10 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbd10 + 0x20))(DAT_1401cbd10,DAT_1401cbd10 != (longlong *)&DAT_1401cbcd8);
    DAT_1401cbd10 = (longlong *)0x0;
  }
  return;
}

