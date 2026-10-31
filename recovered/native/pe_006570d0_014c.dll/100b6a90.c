/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b6a90 */

void Catch_100b6a90(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_10 [12];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_10;
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4);
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14);
  thunk_FUN_100185ef(*(undefined4 *)(unaff_EBP + -0x18),uVar1,*(undefined4 *)(unaff_EBP + 0x14));
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(0,0);
}

