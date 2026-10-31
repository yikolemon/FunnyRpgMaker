/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bd096 */

void FUN_101bd096(void)

{
  if (DAT_103a4d20 != (int *)0x0) {
    (**(code **)(*DAT_103a4d20 + 8))(DAT_103a4d20);
    DAT_103a4d20 = (int *)0x0;
  }
  if (DAT_103a4d1c != (int *)0x0) {
    (**(code **)(*DAT_103a4d1c + 8))(DAT_103a4d1c);
    DAT_103a4d1c = (int *)0x0;
  }
  return;
}

