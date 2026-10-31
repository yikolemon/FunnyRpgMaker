/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013d499 */

void FUN_1013d499(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_10;
  FUN_1013cb9f(param_1,4,param_2,&param_3,&param_4,param_5,param_6);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

