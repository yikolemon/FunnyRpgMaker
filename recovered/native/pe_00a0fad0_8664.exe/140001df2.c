/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001df2 */

void FUN_140001df2(void)

{
  FUN_1400017de(&DAT_1401cc148);
  if (DAT_1401cc140 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc140 + 0x20))(DAT_1401cc140,DAT_1401cc140 != (longlong *)&DAT_1401cc108);
    DAT_1401cc140 = (longlong *)0x0;
  }
  if (DAT_1401cc100 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc100 + 0x20))(DAT_1401cc100,DAT_1401cc100 != (longlong *)&DAT_1401cc0c8);
    DAT_1401cc100 = (longlong *)0x0;
  }
  return;
}

