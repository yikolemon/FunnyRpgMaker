/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac62c */

undefined4 * __thiscall FUN_100ac62c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4600;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  local_2c = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = FUN_10228350(0x24);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  param_1[1] = iVar2;
  local_24 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_14 = 1;
  local_28 = param_1;
  FUN_100229fa(0x10,iVar2);
  uVar1 = local_28[1];
  local_28[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = local_28[2];
  local_28[2] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = local_28[3];
  local_28[3] = param_2[3];
  param_2[3] = uVar1;
  uVar1 = local_28[4];
  local_28[4] = param_2[4];
  param_2[4] = uVar1;
  uVar1 = local_28[5];
  local_28[5] = param_2[5];
  param_2[5] = uVar1;
  uVar1 = param_2[6];
  param_2[6] = 7;
  local_28[6] = uVar1;
  uVar1 = param_2[7];
  param_2[7] = 8;
  local_28[7] = uVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_28;
}

