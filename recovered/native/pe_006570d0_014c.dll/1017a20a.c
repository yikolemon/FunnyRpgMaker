/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017a20a */

undefined * Catch_1017a20a(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_18 [20];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_18;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3070) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 9;
  uVar2 = (*pcVar1)();
  FUN_100e3322(unaff_EBP + -0x3054,3,"Failed to load map: %s",uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_100e329a(unaff_EBP + -0x3054);
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_100e1516();
  return &DAT_1017a120;
}

