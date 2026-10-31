/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007dd49 */

undefined4 FUN_1007dd49(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_18 [12];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_18;
  thunk_FUN_1007e54a(auStack_18,param_4);
  FUN_10044706(param_1,param_2,param_3,1,auStack_18);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

