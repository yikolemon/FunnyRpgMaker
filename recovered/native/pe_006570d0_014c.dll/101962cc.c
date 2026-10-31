/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101962cc */

void FUN_101962cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_80 [112];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_80;
  FUN_10196332(param_4,param_5);
  FUN_1019636a(param_1,param_3);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_80)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

