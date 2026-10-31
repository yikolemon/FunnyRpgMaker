/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001ecd */

void Unwind_140001ecd(void)

{
  if (DAT_1401cc100 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc100 + 0x20))(DAT_1401cc100,DAT_1401cc100 != (longlong *)&DAT_1401cc0c8);
    DAT_1401cc100 = (longlong *)0x0;
  }
  return;
}

