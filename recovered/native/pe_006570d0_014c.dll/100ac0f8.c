/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac0f8 */

undefined4 * __thiscall FUN_100ac0f8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_3c [8];
  int *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c45a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  local_2c = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = FUN_10228350(0x24);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  param_1[1] = iVar1;
  local_28 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_14 = 1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  local_24 = param_1;
  FUN_100229fa((int)(param_2[4] - param_2[3]) >> 2,iVar1);
  local_30 = (int *)param_2[1];
  local_34 = (int *)*local_30;
  if (local_34 != local_30) {
    do {
      FUN_100ac20c(local_3c,local_34 + 2);
      local_34 = (int *)*local_34;
    } while (local_34 != local_30);
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

