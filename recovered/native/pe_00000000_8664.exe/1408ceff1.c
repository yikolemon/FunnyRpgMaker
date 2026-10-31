/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ceff1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1408ceff1(void)

{
  byte bVar1;
  longlong unaff_RBP;
  uint uVar2;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  FUN_1408c1f00();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  bVar1 = (byte)_DAT_150c57d16 & 0x1f;
  uVar2 = (_DAT_150c74487 ^ _DAT_150c57d25) >> bVar1 |
          (_DAT_150c74487 ^ _DAT_150c57d25) << 0x20 - bVar1;
  *(uint *)(unaff_RBP + -0x1c) = uVar2;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408cf04d();
  *(undefined4 *)(in_FS_OFFSET + 0x1408cf042) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar2;
}

