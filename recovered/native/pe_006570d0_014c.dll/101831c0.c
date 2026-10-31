/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101831c0 */

undefined4 * __thiscall FUN_101831c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
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
  local_18 = &LAB_10186080;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  local_28 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = FUN_10228350(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  param_1[1] = iVar1;
  local_24 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_14 = 1;
  param_1[6] = 7;
  param_1[7] = 8;
  *param_1 = 0x3f800000;
  local_2c = param_1;
  FUN_100229fa(0x10,iVar1);
  *unaff_FS_OFFSET = local_1c;
  return local_2c;
}

