/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d6242 */

undefined * Catch_100d6242(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_40 [60];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_40;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  uVar2 = (*pcVar1)();
  FUN_10103022("%s",uVar2);
  return &DAT_100d61f6;
}

