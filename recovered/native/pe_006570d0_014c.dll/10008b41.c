/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10008b41 */

undefined8 FUN_10008b41(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_28;
  local_14 = param_4;
  local_1c = param_3;
  local_20 = param_2;
  local_24 = param_1;
  local_28 = &local_10;
  FUN_10008ba6();
  if (DAT_10388d00 == (local_8 ^ (uint)&local_28)) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

