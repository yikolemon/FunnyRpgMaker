/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d43c6 */

void FUN_101d43c6(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10197574(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
               *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

