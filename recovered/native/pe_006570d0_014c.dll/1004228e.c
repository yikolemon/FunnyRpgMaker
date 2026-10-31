/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004228e */

undefined * Catch_1004228e(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_c [8];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_c;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x38) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar2 = (*pcVar1)();
  FUN_10001f66(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_10042e52(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10001fee();
  return &DAT_10042274;
}

