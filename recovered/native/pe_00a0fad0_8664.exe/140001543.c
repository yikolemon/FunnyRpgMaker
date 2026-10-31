/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001543 */

void Unwind_140001543(void)

{
  if (DAT_1401cbe60 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbe60 + 0x20))(DAT_1401cbe60,DAT_1401cbe60 != (longlong *)&DAT_1401cbe28);
    DAT_1401cbe60 = (longlong *)0x0;
  }
  return;
}

