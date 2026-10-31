/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ab8a */

undefined4
FUN_1008ab8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_30 [36];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_30;
  thunk_FUN_1008b008(auStack_30,param_4,param_5,param_6);
  FUN_10044706(param_1,param_2,param_3,3,auStack_30);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_30)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

