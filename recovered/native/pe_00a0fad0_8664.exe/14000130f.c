/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000130f */

void Unwind_14000130f(void)

{
  if (DAT_1401cbd10 != (longlong *)0x0) {
    (**(code **)(*DAT_1401cbd10 + 0x20))(DAT_1401cbd10,DAT_1401cbd10 != (longlong *)&DAT_1401cbcd8);
    DAT_1401cbd10 = (longlong *)0x0;
  }
  return;
}

