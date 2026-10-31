/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001e8e */

void Unwind_140001e8e(void)

{
  if (DAT_1401cc140 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc140 + 0x20))(DAT_1401cc140,DAT_1401cc140 != (longlong *)&DAT_1401cc108);
    DAT_1401cc140 = (longlong *)0x0;
  }
  return;
}

