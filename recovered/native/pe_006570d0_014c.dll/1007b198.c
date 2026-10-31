/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b198 */

undefined1 * Catch_1007b198(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  undefined1 auStack_20 [28];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_20;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar4 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x13 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar4;
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((uVar3 & uVar4) == 0) {
    return &LAB_1007b166;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(0,0);
}

