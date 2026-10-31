/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be5e0 */

void FUN_101be5e0(void)

{
  if (DAT_103a4d30 != (int *)0x0) {
    (**(code **)(*DAT_103a4d30 + 8))(DAT_103a4d30);
    DAT_103a4d30 = (int *)0x0;
  }
  return;
}

