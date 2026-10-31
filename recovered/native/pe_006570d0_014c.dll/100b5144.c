/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5144 */

undefined1 * Catch_100b5144(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  undefined1 auStack_c [8];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_c;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x13 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    return &LAB_100b5114;
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(0,0);
}

