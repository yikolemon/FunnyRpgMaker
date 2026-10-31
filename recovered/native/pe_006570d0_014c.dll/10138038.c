/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10138038 */

void FUN_10138038(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_30;
  local_10 = param_7;
  local_14 = param_6;
  local_18 = (undefined1 *)&param_5;
  local_1c = (undefined1 *)&param_4;
  local_20 = param_3;
  local_28 = param_2;
  local_30 = param_1;
  local_24 = 3;
  local_2c = 8;
  FUN_10137dbc();
  if (DAT_10388d00 == (local_c ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

