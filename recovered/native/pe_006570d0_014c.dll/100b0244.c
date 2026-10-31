/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b0244 */

int FUN_100b0244(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c47b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_100b03aa(param_1);
  local_14 = 0;
  FUN_100b043c(param_3,param_4);
  **(undefined4 **)(local_24 + 4) = param_2;
  *(undefined4 *)(*(int *)(local_24 + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_24 + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_24 + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_24 + 4) + 0xd) = 0;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

