/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1120 */

undefined1 * Catch_100e1120(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_40 [60];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_40;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x6098) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0x2b;
  uVar2 = (*pcVar1)();
  FUN_100e3322(unaff_EBP + -0x3054,3,&DAT_103340dc,uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0x2c;
  FUN_100e329a(unaff_EBP + -0x3054);
  *(undefined4 *)(unaff_EBP + -4) = 0x2b;
  FUN_100e1516();
  return &LAB_100e0068;
}

