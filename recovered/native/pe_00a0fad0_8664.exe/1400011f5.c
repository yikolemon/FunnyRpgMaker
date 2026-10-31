/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400011f5 */

void Unwind_1400011f5(void)

{
  if (DAT_1401cbc68 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbc68 + 0x20))(DAT_1401cbc68,DAT_1401cbc68 != (longlong *)&DAT_1401cbc30);
    DAT_1401cbc68 = (longlong *)0x0;
  }
  return;
}

