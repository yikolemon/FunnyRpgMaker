/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000161e */

void Unwind_14000161e(void)

{
  if (DAT_1401cbf48 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbf48 + 0x20))(DAT_1401cbf48,DAT_1401cbf48 != (longlong *)&DAT_1401cbf10);
    DAT_1401cbf48 = (longlong *)0x0;
  }
  return;
}

