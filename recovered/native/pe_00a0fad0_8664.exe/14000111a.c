/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000111a */

void FUN_14000111a(void)

{
  FUN_1400017de(&DAT_1401cbcb0);
  if (DAT_1401cbca8 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbca8 + 0x20))(DAT_1401cbca8,DAT_1401cbca8 != (longlong *)&DAT_1401cbc70);
    DAT_1401cbca8 = (longlong *)0x0;
  }
  if (DAT_1401cbc68 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbc68 + 0x20))(DAT_1401cbc68,DAT_1401cbc68 != (longlong *)&DAT_1401cbc30);
    DAT_1401cbc68 = (longlong *)0x0;
  }
  return;
}

