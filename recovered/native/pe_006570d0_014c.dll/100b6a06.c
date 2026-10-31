/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b6a06 */

void Catch_100b6a06(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_10 [12];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_10;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iVar1 = *(int *)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + 0x1c) * 8;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  thunk_FUN_100185ef(*(undefined4 *)(unaff_EBP + -0x18),iVar1,*(int *)(unaff_EBP + 0x14));
  uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  thunk_FUN_100185ef(*(undefined4 *)(unaff_EBP + -0x1c),uVar2,*(undefined4 *)(unaff_EBP + -0x18));
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(0,0);
}

