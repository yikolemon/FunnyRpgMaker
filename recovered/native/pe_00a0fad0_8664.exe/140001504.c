/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001504 */

void Unwind_140001504(void)

{
  if (DAT_1401cbea0 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbea0 + 0x20))(DAT_1401cbea0,DAT_1401cbea0 != (longlong *)&DAT_1401cbe68);
    DAT_1401cbea0 = (longlong *)0x0;
  }
  return;
}

