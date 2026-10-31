/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400011b6 */

void Unwind_1400011b6(void)

{
  if (DAT_1401cbca8 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbca8 + 0x20))(DAT_1401cbca8,DAT_1401cbca8 != (longlong *)&DAT_1401cbc70);
    DAT_1401cbca8 = (longlong *)0x0;
  }
  return;
}

