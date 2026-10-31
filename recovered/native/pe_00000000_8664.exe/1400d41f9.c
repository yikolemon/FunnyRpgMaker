/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d41f9 */

void FUN_1400d41f9(void)

{
  if (DAT_140f2b218 != (longlong *)0x0) {
    (**(code **)(*DAT_140f2b218 + 0x10))();
    DAT_140f2b218 = (longlong *)0x0;
  }
  if (DAT_140f2b210 != (longlong *)0x0) {
    (**(code **)(*DAT_140f2b210 + 0x10))();
    DAT_140f2b210 = (longlong *)0x0;
  }
  if (DAT_140f2b208 != (longlong *)0x0) {
    (**(code **)(*DAT_140f2b208 + 0x10))();
    DAT_140f2b208 = (longlong *)0x0;
  }
  return;
}

