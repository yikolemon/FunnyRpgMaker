/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400012d0 */

void Unwind_1400012d0(void)

{
  if (DAT_1401cbd50 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbd50 + 0x20))(DAT_1401cbd50,DAT_1401cbd50 != (longlong *)&DAT_1401cbd18);
    DAT_1401cbd50 = (longlong *)0x0;
  }
  return;
}

