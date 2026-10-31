/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013d9c3 */

void FUN_1013d9c3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_14;
  FUN_1013d600(param_1,param_2,8,param_3,&param_4,&param_5,param_6,param_7);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

