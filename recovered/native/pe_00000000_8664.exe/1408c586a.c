/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c586a */

undefined4 FUN_1408c586a(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  uVar1 = *(undefined8 *)(ulonglong)*(uint *)(unaff_RBP + 8);
  FUN_1408b66a1();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar2 = *(undefined8 *)(ulonglong)*(uint *)(ulonglong)*(uint *)(unaff_RBP + 0xc);
  uVar3 = FUN_1408c55c4(uVar1);
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar3;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408c58be(uVar2);
  *(undefined4 *)(in_FS_OFFSET + 0x1408c58b3) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar3;
}

