/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008eb9b */

undefined4 *
FUN_1008eb9b(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_3c [24];
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_18 = &LAB_100c3820;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 7;
  local_14 = 0;
  FUN_100012b0(param_4);
  local_14 = 1;
  piVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  thunk_FUN_1008f25f(local_24,param_1,param_2,(int)param_2 + *piVar1 * 2,param_3,local_3c,param_5);
  local_14 = 0xffffffff;
  FUN_10001134();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

