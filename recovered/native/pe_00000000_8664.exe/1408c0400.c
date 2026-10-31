/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c0400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408c0400(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  FUN_1408c1f00();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = _DAT_150c65176;
  uVar2 = FUN_1408c04dd(0);
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar2;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408c044e(uVar1);
  *(undefined4 *)(in_FS_OFFSET + 0x1408c0445) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar2;
}

