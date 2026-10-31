/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001b88 */

void Unwind_140001b88(void)

{
  if (DAT_1401cc058 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cc058 + 0x20))(DAT_1401cc058,DAT_1401cc058 != (longlong *)&DAT_1401cc020);
    DAT_1401cc058 = (longlong *)0x0;
  }
  return;
}

