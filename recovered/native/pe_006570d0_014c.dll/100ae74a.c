/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ae74a */

void __thiscall FUN_100ae74a(int *param_1,uint *param_2)

{
  int *unaff_FS_OFFSET;
  int *local_38;
  undefined4 local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4690;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*param_2 < 0x20000000) {
    local_28 = param_1[1] - *param_1;
    local_20 = (undefined1 *)&local_38;
    local_34 = FUN_10001426(*param_2 << 3);
    local_30 = *param_2;
    local_14 = 0;
    local_38 = param_1;
    local_2c = param_1;
    local_24 = local_34;
    thunk_FUN_1001bee5(*param_1,param_1[1],local_34);
    local_34 = 0;
    FUN_100ae81c(local_24,local_28 >> 3,*param_2);
    local_14 = 0xffffffff;
    FUN_1001a25e();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

