/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fab07 */

void FUN_100fab07(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_8 [4];
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)auStack_8;
  FUN_100f90d5(auStack_8,param_1,param_2);
  if (DAT_10388d00 == (local_4 ^ (uint)auStack_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

