/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10058b1c */

undefined * Catch_10058b1c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + -0x10) = &iStack_24;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    iStack_24 = (**(code **)(**(int **)(unaff_EBP + -0x1b8) + 4))();
    FUN_10001f66();
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iStack_24 = unaff_EBP + -0x1b4;
    FUN_10042e52();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_10001fee();
  }
  else {
    uVar3 = (**(code **)(**(int **)(unaff_EBP + -0x1b8) + 4))();
    *(undefined4 *)(unaff_EBP + -0x1b4) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x1ac) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(unaff_EBP + -0x1a4) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(unaff_EBP + -0x150) = 0;
    *(undefined4 *)(unaff_EBP + -0x154) = 0x1cc;
    *(undefined4 **)(unaff_EBP + -0x14c) = (undefined4 *)(unaff_EBP + -0x1b4);
    uStack_18 = *(undefined4 *)(unaff_EBP + -0x154);
    uStack_14 = *(undefined4 *)(unaff_EBP + -0x150);
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x14c);
    uStack_c = *(undefined4 *)(unaff_EBP + -0x148);
    uStack_1c = 0xb;
    pcStack_20 = "{} [{}({})]";
    iStack_24 = unaff_EBP + -0x138;
    FUN_10043044();
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_24 = unaff_EBP + -0x138;
    FUN_10042e52();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_10001fee();
  }
  return &DAT_10058adb;
}

