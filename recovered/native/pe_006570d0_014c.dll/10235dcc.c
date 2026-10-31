/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235dcc */

undefined * Catch_10235dcc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  piVar1 = (int *)FUN_102588b0();
  piVar1 = (int *)*piVar1;
  if ((*piVar1 == -0x1fbcb0b3) || (*piVar1 == -0x1fbcbcae)) {
    thunk_FUN_10274120(*(undefined4 *)(unaff_EBP + -0x14));
    uVar3 = FUN_10235f70(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_102358c0(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_10235870();
    return (undefined *)0x10235db3;
  }
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((piVar1[5] == 0x19930520 ||
      (((piVar1[5] == 0x19930521 || (piVar1[5] == 0x19930522)) || (piVar1[5] == 0x1994000)))))) {
    iVar4 = *(int *)(*(int *)(piVar1[7] + 0xc) + 4);
    uVar5 = *(int *)(iVar4 + 0x14) + 0x60;
    if (*(uint *)(unaff_EBP + -0x20) < uVar5) {
      thunk_FUN_10274120(*(undefined4 *)(unaff_EBP + -0x14));
      iVar2 = FUN_1026faa0(uVar5);
      *(int *)(unaff_EBP + -0x14) = iVar2;
      if (iVar2 == 0) {
        uVar3 = FUN_10235b30(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_102358c0(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_10235870();
        return &DAT_10235e85;
      }
    }
    else {
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_102357f0(iVar2 + 0x60,piVar1[6],iVar4);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_10235a80(piVar1);
    *(int *)(iVar4 + 0x24) = iVar2 + 0x60;
    piVar1 = *(int **)(unaff_EBP + 8);
    *piVar1 = iVar4 + 0xc;
    piVar1[1] = iVar4;
    return &DAT_10235ec7;
  }
  iVar4 = FUN_10235a80(piVar1);
  piVar1 = *(int **)(unaff_EBP + 8);
  *piVar1 = iVar4 + 0xc;
  piVar1[1] = iVar4;
  return &DAT_10235f2b;
}

