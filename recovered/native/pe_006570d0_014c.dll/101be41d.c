/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be41d */

void FUN_101be41d(void)

{
  if (DAT_103a4d2c != (int *)0x0) {
    (**(code **)(*DAT_103a4d2c + 8))(DAT_103a4d2c);
    DAT_103a4d2c = (int *)0x0;
  }
  if (DAT_103a4d28 != (int *)0x0) {
    (**(code **)(*DAT_103a4d28 + 8))(DAT_103a4d28);
    DAT_103a4d28 = (int *)0x0;
  }
  if (DAT_103a4d24 != (int *)0x0) {
    (**(code **)(*DAT_103a4d24 + 8))(DAT_103a4d24);
    DAT_103a4d24 = (int *)0x0;
  }
  return;
}

