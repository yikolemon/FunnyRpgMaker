/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141729 */

void FUN_10141729(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = 0;
  FUN_1013dd9a(param_1,0,param_2,param_3,&local_1c,param_4,param_5,param_6);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

