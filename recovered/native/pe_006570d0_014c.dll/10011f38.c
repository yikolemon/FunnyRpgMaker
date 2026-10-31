/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10011f38 */

undefined8 FUN_10011f38(undefined4 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_28;
  if ((int)param_4 < 0) {
    param_4 = 6;
  }
  else {
    uVar1 = 0x84;
    if (999999999 < param_4) goto LAB_10011f95;
  }
  local_1c = param_3;
  local_20 = param_2;
  local_24 = param_1;
  local_28 = &local_10;
  local_14 = param_4;
  FUN_10008ded();
  param_2 = local_10;
  uVar1 = local_c;
LAB_10011f95:
  if (DAT_10388d00 != (local_8 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar1,param_2);
}

