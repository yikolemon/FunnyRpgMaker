/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100805a1 */

undefined4
FUN_100805a1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 auStack_24 [24];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_24;
  thunk_FUN_10080bae(auStack_24,param_4,param_5);
  FUN_10044706(param_1,param_2,param_3,2,auStack_24);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

