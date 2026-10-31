/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408d3f9c(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  lVar4 = FUN_1408cc29d();
  if (((*(uint *)(lVar4 + 0x350) & _DAT_150c6fb8a) != 0) &&
     (uVar1 = *(uint *)(ulonglong)((int)lVar4 + 0x4c), uVar1 != 0)) {
    *(undefined4 *)(in_FS_OFFSET + 0x1408d4011) = *(undefined4 *)(unaff_RBP + -0x10);
    return (ulonglong)uVar1;
  }
  FUN_1408c1f00();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar2 = _DAT_150c790ca;
  iVar3 = FUN_1408d401d(4);
  *(int *)(unaff_RBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408d3ffc(uVar2);
  if (iVar3 != 0) {
    uVar5 = FUN_1408d4005();
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1408c4986();
}

