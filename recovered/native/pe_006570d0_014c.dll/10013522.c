/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013522 */

undefined * Catch_10013522(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_40 [60];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_40;
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  FUN_10014148(9);
  *(undefined1 *)(unaff_EBP + -0xf2) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  piVar1 = *(int **)(unaff_EBP + -0x94);
  uVar2 = (**(code **)(*piVar1 + 4))();
  *(undefined4 *)(unaff_EBP + -0x98) = uVar2;
  *(char **)(unaff_EBP + -0xb4) = "json parse error: {} at {}";
  *(undefined4 *)(unaff_EBP + -0xb0) = 0x1a;
  *(undefined1 *)(unaff_EBP + -0xf2) = 1;
  FUN_1001451f(unaff_EBP + -0x2c,*(undefined8 *)(unaff_EBP + -0xb4),
               (undefined4 *)(unaff_EBP + -0x98),piVar1 + 3);
  *(undefined1 *)(unaff_EBP + -0xf3) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  FUN_100143a8(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 0x16;
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  FUN_10013f70(unaff_EBP + -0x5c);
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  FUN_100140ac();
  *(undefined1 *)(unaff_EBP + -0xf3) = 0;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0xf2) = 0;
  return &DAT_1001332e;
}

