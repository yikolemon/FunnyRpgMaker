/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b043c */

int FUN_100b043c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c47e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1000334a(param_1);
  local_14 = 0;
  local_28 = local_24 + 0x18;
  FUN_1000334a(param_2);
  local_14 = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(local_24 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(local_24 + 0x30) = uVar1;
  local_2c = local_24 + 0x38;
  *(undefined4 *)(local_24 + 0x38) = 0;
  *(undefined4 *)(local_24 + 0x3c) = 0;
  *(undefined4 *)(local_24 + 0x40) = 0;
  FUN_100b0562(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 5,param_2 + 0x20,
               param_2 + 0x24);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

