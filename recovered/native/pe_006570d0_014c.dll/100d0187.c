/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0187 */

void FUN_100d0187(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_4;
  FUN_100d01c6(param_1,1,&param_2,param_3);
  if (DAT_10388d00 == (local_4 ^ (uint)&local_4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

