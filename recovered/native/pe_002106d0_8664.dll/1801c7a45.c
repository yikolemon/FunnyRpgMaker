/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7a45 */

void FUN_1801c7a45(void)

{
  if (DAT_180420d38 != (longlong *)0x0) {
    (**(code **)(*DAT_180420d38 + 0x10))();
    DAT_180420d38 = (longlong *)0x0;
  }
  if (DAT_180420d30 != (longlong *)0x0) {
    (**(code **)(*DAT_180420d30 + 0x10))();
    DAT_180420d30 = (longlong *)0x0;
  }
  if (DAT_180420d28 != (longlong *)0x0) {
    (**(code **)(*DAT_180420d28 + 0x10))();
    DAT_180420d28 = (longlong *)0x0;
  }
  return;
}

