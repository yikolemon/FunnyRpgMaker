/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aeef8 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_100aeef8(undefined4 param_1)

{
  undefined1 *puVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_c4 [25];
  undefined1 local_60 [32];
  int *piStack_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_38 = (undefined1 *)&local_3c;
  piStack_40 = &local_1c;
  local_18 = &LAB_100c46e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)piStack_40;
  local_3c = param_1;
  local_14 = 7;
  local_20 = (undefined1 *)local_c4;
  local_24 = local_c4;
  local_34 = local_60;
  FUN_100af1c0(&stack0x00000068);
  local_14 = 8;
  local_30 = local_24 + 0x11;
  FUN_100af1c0(&stack0x00000048);
  local_14 = 9;
  local_2c = local_24 + 9;
  FUN_100af1c0(&stack0x00000028);
  local_14 = 10;
  local_28 = local_24 + 1;
  FUN_100af1c0(&stack0x00000008);
  *local_24 = local_3c;
  local_14 = 7;
  FUN_100af787();
  puVar1 = local_38;
  local_20 = local_38;
  local_14 = 0xffffffff;
  *(undefined4 *)(local_38 + -4) = 0x100af013;
  FUN_10001f04();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x100af02e;
  FUN_10001f04();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x100af049;
  FUN_10001f04();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x100af064;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

