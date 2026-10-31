/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee0b5 */

undefined4 FUN_100ee0b5(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100ee0fe();
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

