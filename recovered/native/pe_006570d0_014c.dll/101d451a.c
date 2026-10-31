/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d451a */

void FUN_101d451a(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10197574(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
               *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
               *(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4),
               *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

