/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017cee0 */

undefined4
FUN_1017cee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_24 [24];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_24;
  FUN_1017cf46(auStack_24,param_4,param_5,param_6);
  FUN_10005bdc(param_1,param_2,param_3,3,auStack_24);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

