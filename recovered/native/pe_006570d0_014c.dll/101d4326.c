/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4326 */

void FUN_101d4326(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10197574(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
               *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

