/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e94c */

void FUN_1016e94c(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_20 [20];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)local_20;
  FUN_10170ed7(param_1,param_2);
  if (DAT_10388d00 == (local_c ^ (uint)local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

