/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10137f3c */

void FUN_10137f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_2c;
  local_10 = param_7;
  local_14 = param_6;
  local_18 = (undefined1 *)&param_5;
  local_1c = (undefined1 *)&param_4;
  local_20 = param_3;
  local_24 = param_2;
  local_2c = param_1;
  local_28 = 8;
  FUN_101375ae();
  if (DAT_10388d00 == (local_c ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

