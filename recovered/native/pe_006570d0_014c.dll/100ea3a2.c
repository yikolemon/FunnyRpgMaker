/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea3a2 */

undefined4 FUN_100ea3a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100ea406(CONCAT44(param_2,param_1),0,param_4,param_2,0,param_4 + 1);
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

