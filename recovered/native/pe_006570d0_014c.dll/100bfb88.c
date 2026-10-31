/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bfb88 */

undefined4 __thiscall FUN_100bfb88(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4cb0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_100bfc4e(&local_30,param_2,param_3);
  if ((local_28 & 1) == 0) {
    if (param_1[1] == 0xaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_1005283a();
    }
    local_24 = local_2c;
    FUN_100bfebe(param_1,*param_1,param_3);
    uVar1 = local_2c;
    local_2c = 0;
    local_14 = 0xffffffff;
    FUN_10067890();
    local_30 = FUN_1005271c(local_30,local_24,uVar1);
  }
  *unaff_FS_OFFSET = local_1c;
  return local_30;
}

