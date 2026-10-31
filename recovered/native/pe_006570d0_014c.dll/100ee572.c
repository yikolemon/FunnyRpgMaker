/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee572 */

undefined4
FUN_100ee572(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 auStack_1c [16];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_1c;
  FUN_100ee5d3(auStack_1c,param_4,param_5);
  FUN_10005bdc(param_1,param_2,param_3,2,auStack_1c);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

