/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c717b */

undefined4 FUN_1408c717b(void)

{
  undefined4 uVar1;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  FUN_1408b66a1();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = FUN_1408c712f(*(undefined4 *)(unaff_RBP + 0xc));
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar1;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408c71ca();
  *(undefined4 *)(in_FS_OFFSET + 0x1408c71bf) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar1;
}

