/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009976a */

undefined1 * FUN_1009976a(undefined1 *param_1,undefined1 *param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3be0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_24 = param_1 + 4;
  FUN_10061af0(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2,param_2 + 4,param_2 + 8);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

