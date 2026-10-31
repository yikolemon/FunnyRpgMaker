/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100173ea */

undefined4 * __thiscall FUN_100173ea(undefined4 param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_10059080;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0xf;
  local_14 = 0;
  FUN_10017476(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

