/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001824 */

void FUN_140001824(void)

{
  FUN_1400017de(&DAT_1401cbff8);
  if (DAT_1401cbff0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbff0 + 0x20))(DAT_1401cbff0,DAT_1401cbff0 != (longlong *)&DAT_1401cbfb8);
    DAT_1401cbff0 = (longlong *)0x0;
  }
  if (DAT_1401cbfb0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbfb0 + 0x20))(DAT_1401cbfb0,DAT_1401cbfb0 != (longlong *)&DAT_1401cbf78);
    DAT_1401cbfb0 = (longlong *)0x0;
  }
  return;
}

