/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004064d0 */

undefined * Catch_004064d0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  undefined1 auStack_c [8];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_c;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar4 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x13 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar4;
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((uVar3 & uVar4) == 0) {
    return &DAT_004064c6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00484ff0((int *)0x0,(byte *)0x0);
}

