/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001b49 */

void Unwind_140001b49(void)

{
  if (DAT_1401cc098 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc098 + 0x20))(DAT_1401cc098,DAT_1401cc098 != (longlong *)&DAT_1401cc060);
    DAT_1401cc098 = (longlong *)0x0;
  }
  return;
}

