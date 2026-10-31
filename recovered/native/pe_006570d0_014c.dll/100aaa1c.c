/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aaa1c */

undefined4 *
FUN_100aaa1c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_3c [24];
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_18 = &LAB_100c44b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  FUN_10001f66(param_4);
  local_14 = 1;
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  thunk_FUN_10020966(local_24,param_1,puVar1,param_2[4] + (int)puVar1,param_3,local_3c,param_5);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

