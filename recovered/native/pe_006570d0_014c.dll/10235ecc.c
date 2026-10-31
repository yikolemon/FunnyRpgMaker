/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235ecc */

undefined1 * Catch_10235ecc(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  thunk_FUN_10274120(*(undefined4 *)(unaff_EBP + -0x14));
  uVar1 = FUN_10235f70(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_102358c0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_10235870();
  return &LAB_10235eff;
}

