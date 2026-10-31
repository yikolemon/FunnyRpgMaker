/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10185dde */

void FUN_10185dde(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_18 = &LAB_101861e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_34 = *param_1;
  uStack_30 = param_1[1];
  uStack_2c = param_1[2];
  uStack_28 = param_1[3];
  local_38 = *param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  uVar1 = param_1[4];
  local_14 = 2;
  *param_1 = *param_2;
  local_24 = uVar1;
  FUN_1008a8bc(param_2 + 1);
  param_1[4] = param_2[4];
  *param_2 = local_38;
  if (param_2 != &local_34) {
    FUN_10004eae();
    *(ulonglong *)(param_2 + 1) = CONCAT44(uStack_2c,uStack_30);
    param_2[3] = uStack_28;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uVar1 = local_24;
  }
  param_2[4] = uVar1;
  local_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = local_1c;
  return;
}

