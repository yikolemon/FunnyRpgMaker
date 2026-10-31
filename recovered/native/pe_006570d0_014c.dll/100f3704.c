/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f3704 */

undefined * Catch_100f3704(void)

{
  int unaff_EBP;
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_c;
  *(undefined1 **)(unaff_EBP + -0x1c) = auStack_c;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_14;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_14;
  FUN_100f4566(auStack_14);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_100f4466();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
  return &DAT_100f36fb;
}

