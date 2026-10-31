/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015d68d */

undefined4 FUN_1015d68d(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_30;
  local_24 = param_2[4];
  local_1c = param_3[4];
  if ((local_24 ^ 0x7fffffff) < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  local_28 = param_2;
  if (0xf < (uint)param_2[5]) {
    local_28 = (undefined4 *)*param_2;
  }
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  local_2c = param_2;
  local_20 = param_3;
  FUN_1001601e();
  if (DAT_10388d00 == (local_14 ^ (uint)local_30)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

