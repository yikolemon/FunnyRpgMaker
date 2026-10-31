/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072982 */

undefined4
FUN_10072982(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_2c [32];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_2c;
  FUN_10072aac(auStack_2c,param_4,param_5,param_6);
  FUN_10005bdc(param_1,param_2,param_3,3,auStack_2c);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_2c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

