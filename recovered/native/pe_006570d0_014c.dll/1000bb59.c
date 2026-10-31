/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000bb59 */

void FUN_1000bb59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_1000bba4(param_1);
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(param_2,param_3,param_4,param_5);
}

