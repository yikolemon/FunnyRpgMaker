/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c54d1 */

undefined4 FUN_1408c54d1(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  uVar1 = *(uint *)(unaff_RBP + 8);
  *(uint *)(unaff_RBP + -0x20) = uVar1;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(unaff_RBP + 0xc);
    *(undefined1 *)((ulonglong)uVar1 + 0x1c) = 1;
    *(undefined4 *)((ulonglong)uVar1 + 0x18) = 0x16;
    FUN_1408cbf04();
  }
  else {
    if ((*(uint *)((ulonglong)uVar1 + 0xc) >> 0xc & 1) == 0) {
      *(undefined4 *)(unaff_RBP + -0x1c) = 0;
      FUN_1408b66a1();
      *(undefined4 *)(unaff_RBP + -4) = 0;
      uVar2 = *(undefined8 *)(unaff_RBP + 0xc);
      uVar3 = FUN_1408c5443((ulonglong)uVar1);
      *(undefined4 *)(unaff_RBP + -0x1c) = uVar3;
      *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
      FUN_1408c5560(uVar2);
      goto LAB_1408c554a;
    }
    FUN_1408d14e7();
  }
  uVar3 = 0xffffffff;
LAB_1408c554a:
  *(undefined4 *)(in_FS_OFFSET + 0x1408c5554) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar3;
}

