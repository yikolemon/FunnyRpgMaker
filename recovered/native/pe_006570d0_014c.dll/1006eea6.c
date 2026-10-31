/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006eea6 */

void Unwind_1006eea6(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x136);
  *(undefined1 *)(unaff_EBP + -0x13a) = uVar1;
  if (*(char *)(unaff_EBP + -0x135) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x13a) = uVar1;
  return;
}

