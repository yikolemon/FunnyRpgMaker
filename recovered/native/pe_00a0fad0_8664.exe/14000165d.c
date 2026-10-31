/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000165d */

void Unwind_14000165d(void)

{
  if (DAT_1401cbf08 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbf08 + 0x20))(DAT_1401cbf08,DAT_1401cbf08 != (longlong *)&DAT_1401cbed0);
    DAT_1401cbf08 = (longlong *)0x0;
  }
  return;
}

