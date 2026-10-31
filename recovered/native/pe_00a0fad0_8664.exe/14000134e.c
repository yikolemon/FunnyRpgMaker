/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000134e */

void FUN_14000134e(void)

{
  FUN_1400017de(&DAT_1401cbe00);
  if (DAT_1401cbdf8 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbdf8 + 0x20))(DAT_1401cbdf8,DAT_1401cbdf8 != (longlong *)&DAT_1401cbdc0);
    DAT_1401cbdf8 = (longlong *)0x0;
  }
  if (DAT_1401cbdb8 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbdb8 + 0x20))(DAT_1401cbdb8,DAT_1401cbdb8 != (longlong *)&DAT_1401cbd80);
    DAT_1401cbdb8 = (longlong *)0x0;
  }
  return;
}

