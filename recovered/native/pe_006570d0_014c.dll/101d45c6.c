/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d45c6 */

void FUN_101d45c6(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10197574(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104),
               *(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),
               *(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),
               *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

