/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c636 */

undefined4 * FUN_1009c636(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3da0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = 1;
  FUN_1006fca2(param_1,&DAT_1039cb48,&local_2c,param_2,&DAT_102962bc);
  *local_24 = CommonEvents::vftable;
  *(undefined1 *)(local_24 + 0xe) = 0;
  local_28 = local_24 + 0xf;
  local_24[0xf] = 0;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_14 = 1;
  *(undefined2 *)(local_24 + 0x12) = 0;
  *(undefined1 *)((int)local_24 + 0x4a) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_1006fdba(param_1);
    *(undefined1 *)(local_24 + 0xe) = uVar1;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

