/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406ca5 */

undefined * Catch_00406ca5(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  undefined1 auStack_10 [12];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_10;
  piVar1 = *(int **)(unaff_EBP + 0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar4 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x13 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar4;
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((uVar3 & uVar4) == 0) {
    return &DAT_00406c90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00484ff0((int *)0x0,(byte *)0x0);
}

