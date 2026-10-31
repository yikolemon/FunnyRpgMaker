/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400013ea */

void Unwind_1400013ea(void)

{
  if (DAT_1401cbdf8 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbdf8 + 0x20))(DAT_1401cbdf8,DAT_1401cbdf8 != (longlong *)&DAT_1401cbdc0);
    DAT_1401cbdf8 = (longlong *)0x0;
  }
  return;
}

