/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d446e */

void FUN_101d446e(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10197574(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
               *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
               *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),
               *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

