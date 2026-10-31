/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bfebe */

int FUN_100bfebe(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c4cc0;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_10067920(param_1);
  *(undefined8 *)(*(int *)(local_1c + 4) + 0x10) = *param_3;
  **(undefined4 **)(local_1c + 4) = param_2;
  *(undefined4 *)(*(int *)(local_1c + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_1c + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_1c + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_1c + 4) + 0xd) = 0;
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

