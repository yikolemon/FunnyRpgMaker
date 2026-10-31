/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bb8f2 */

void FUN_100bb8f2(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_14 = param_7;
  local_18 = param_6;
  local_28 = param_3;
  local_20 = param_4;
  FUN_100bb972(&param_1,&param_2,&local_28,&local_20,&param_5,&local_18);
  if (DAT_10388d00 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

