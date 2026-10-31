/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042062 */

undefined * Catch_10042062(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + -0x10) = &iStack_20;
  iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iStack_20 = (**(code **)(**(int **)(unaff_EBP + -0x58) + 4))();
    FUN_10001f66();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iStack_20 = unaff_EBP + -0x54;
    FUN_10042e52();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_10001fee();
  }
  else {
    uVar3 = (**(code **)(**(int **)(unaff_EBP + -0x58) + 4))();
    *(undefined4 *)(unaff_EBP + -0x54) = uVar3;
    iVar1 = *(int *)(iVar1 + 8);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0x1cc;
    *(int *)(unaff_EBP + -0x34) = unaff_EBP + -0x54;
    uStack_14 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_c = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_8 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_20 = unaff_EBP + -0x2c;
    uStack_18 = 0xb;
    pcStack_1c = "{} [{}({})]";
    FUN_10043044();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_20 = unaff_EBP + -0x2c;
    FUN_10042e52();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_10001fee();
  }
  return &DAT_1004200b;
}

