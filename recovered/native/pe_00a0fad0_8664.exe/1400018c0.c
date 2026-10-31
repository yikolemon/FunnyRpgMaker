/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400018c0 */

void Unwind_1400018c0(void)

{
  if (DAT_1401cbff0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbff0 + 0x20))(DAT_1401cbff0,DAT_1401cbff0 != (longlong *)&DAT_1401cbfb8);
    DAT_1401cbff0 = (longlong *)0x0;
  }
  return;
}

