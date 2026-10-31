/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c24e */

undefined4 * __fastcall FUN_1006c24e(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c2570;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  local_20 = param_1 + 8;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10002eb6();
  *unaff_FS_OFFSET = local_18;
  return param_1;
}

