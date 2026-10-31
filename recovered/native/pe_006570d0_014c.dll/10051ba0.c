/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10051ba0 */

undefined4 * __fastcall FUN_10051ba0(undefined4 *param_1)

{
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  if (*(char *)*param_1 == '\x02') {
    param_1[2] = param_1[2] + 0x10;
  }
  else if (*(char *)*param_1 == '\x01') {
    local_10 = param_1[1];
    FUN_10016fb8();
    param_1[1] = local_10;
  }
  else {
    param_1[3] = param_1[3] + 1;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

