/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d2ae1 */

void FUN_1400d2ae1(void)

{
  if (DAT_140f2b200 != (longlong *)0x0) {
    (**(code **)(*DAT_140f2b200 + 0x10))();
    DAT_140f2b200 = (longlong *)0x0;
  }
  if (DAT_140f2b1f8 != (longlong *)0x0) {
    (**(code **)(*DAT_140f2b1f8 + 0x10))();
    DAT_140f2b1f8 = (longlong *)0x0;
  }
  return;
}

