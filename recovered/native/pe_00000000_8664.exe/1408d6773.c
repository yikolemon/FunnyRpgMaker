/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d6773 */

undefined4 FUN_1408d6773(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  FUN_1408d2d4d();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = *(uint *)(ulonglong)*(uint *)(ulonglong)*(uint *)(unaff_RBP + 0xc);
  uVar4 = (ulonglong)((uint *)(ulonglong)*(uint *)(unaff_RBP + 0xc))[1];
  uVar3 = (ulonglong)((uVar1 & 0x3f) * 0x38);
  if ((*(byte *)((ulonglong)*(uint *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230) + 0x28 +
                uVar3) & 1) == 0) {
    *(undefined1 *)(uVar4 + 0x1c) = 1;
    *(undefined4 *)(uVar4 + 0x18) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1408d6630();
    uVar3 = uVar4;
  }
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar2;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408d67f8(uVar3);
  *(undefined4 *)(in_FS_OFFSET + 0x1408d67ed) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar2;
}

