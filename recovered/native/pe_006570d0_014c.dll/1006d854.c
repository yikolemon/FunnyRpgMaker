/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006d854 */

undefined4 * FUN_1006d854(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_28;
  local_24 = param_2;
  local_28 = &local_18;
  FUN_1006d8bd();
  local_1c = local_10;
  local_20 = local_14;
  local_24 = local_18;
  local_28 = param_1;
  FUN_10004b1b();
  if (DAT_10388d00 == (local_c ^ (uint)&local_28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

