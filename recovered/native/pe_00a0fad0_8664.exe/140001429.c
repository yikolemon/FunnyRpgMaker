/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001429 */

void Unwind_140001429(void)

{
  if (DAT_1401cbdb8 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbdb8 + 0x20))(DAT_1401cbdb8,DAT_1401cbdb8 != (longlong *)&DAT_1401cbd80);
    DAT_1401cbdb8 = (longlong *)0x0;
  }
  return;
}

