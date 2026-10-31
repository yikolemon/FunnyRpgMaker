/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c62bd */

void FUN_1801c62bd(void)

{
  if (DAT_180420d20 != (longlong *)0x0) {
    (**(code **)(*DAT_180420d20 + 0x10))();
    DAT_180420d20 = (longlong *)0x0;
  }
  if (DAT_180420d18 != (longlong *)0x0) {
    (**(code **)(*DAT_180420d18 + 0x10))();
    DAT_180420d18 = (longlong *)0x0;
  }
  return;
}

