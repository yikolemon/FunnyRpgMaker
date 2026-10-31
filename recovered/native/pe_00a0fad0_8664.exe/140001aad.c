/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001aad */

void FUN_140001aad(void)

{
  FUN_1400017de(&DAT_1401cc0a0);
  if (DAT_1401cc098 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc098 + 0x20))(DAT_1401cc098,DAT_1401cc098 != (longlong *)&DAT_1401cc060);
    DAT_1401cc098 = (longlong *)0x0;
  }
  if (DAT_1401cc058 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc058 + 0x20))(DAT_1401cc058,DAT_1401cc058 != (longlong *)&DAT_1401cc020);
    DAT_1401cc058 = (longlong *)0x0;
  }
  return;
}

