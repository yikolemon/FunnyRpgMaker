/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400018ff */

void Unwind_1400018ff(void)

{
  if (DAT_1401cbfb0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbfb0 + 0x20))(DAT_1401cbfb0,DAT_1401cbfb0 != (longlong *)&DAT_1401cbf78);
    DAT_1401cbfb0 = (longlong *)0x0;
  }
  return;
}

