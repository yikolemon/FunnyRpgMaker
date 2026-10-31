/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7c22 */

void FUN_1801c7c22(void)

{
  if (DAT_180420d40 != (longlong *)0x0) {
    (**(code **)(*DAT_180420d40 + 0x10))();
    DAT_180420d40 = (longlong *)0x0;
  }
  return;
}

