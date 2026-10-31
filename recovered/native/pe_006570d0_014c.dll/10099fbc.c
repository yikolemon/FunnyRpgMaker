/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10099fbc */

undefined4
FUN_10099fbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 local_34 [40];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)local_34;
  thunk_FUN_1009a028(local_34,param_4,param_5,param_6,param_7);
  FUN_10044706(param_1,param_2,param_3,4,local_34);
  if (DAT_10388d00 == (local_c ^ (uint)local_34)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

