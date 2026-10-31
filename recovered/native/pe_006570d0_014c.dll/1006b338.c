/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b338 */

undefined4 FUN_1006b338(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 local_58 [24];
  int local_40;
  undefined4 local_3c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2490;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_40 = 0;
  local_3c = FUN_10002303();
  FUN_100ad5a8(local_58,param_2,&local_40);
  local_14 = 0;
  if (local_40 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1000227a("weakly_canonical",&local_40,param_2);
  }
  local_14 = 1;
  local_28 = 0;
  local_24 = FUN_10002303();
  FUN_100ad5a8(&local_40,param_3,&local_28);
  local_14 = 2;
  if (local_28 == 0) {
    local_14 = 3;
    FUN_100acc30(param_1,&local_40);
    local_14 = 0xffffffff;
    FUN_10001f04();
    FUN_10001f04();
    *unaff_FS_OFFSET = local_1c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000227a("weakly_canonical",&local_28,param_3);
}

