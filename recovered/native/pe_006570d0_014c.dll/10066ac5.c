/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066ac5 */

undefined4 *
FUN_10066ac5(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_10066b2b(&local_18,*param_2,param_4);
    param_4 = local_18;
  }
  *param_1 = param_4;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

