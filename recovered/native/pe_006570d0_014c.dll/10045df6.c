/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10045df6 */

undefined4
FUN_10045df6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10046980(param_1,param_2);
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(param_3,param_4,param_5,param_6);
}

