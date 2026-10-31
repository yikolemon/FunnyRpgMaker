/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dcba30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140dcba30(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_140dd7bc0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  FUN_140dce18c();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = _DAT_1412ed14a;
  uVar2 = FUN_140dcb95f(0);
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar2;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_140dcba7e(uVar1);
  *(undefined4 *)(in_FS_OFFSET + 0x140dcba75) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar2;
}

