/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012e8c */

undefined4
FUN_10012e8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 auStack_20 [20];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_20;
  thunk_FUN_1004b38b(auStack_20,param_4,param_5);
  FUN_10044706(param_1,param_2,param_3,2,auStack_20);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_20)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

