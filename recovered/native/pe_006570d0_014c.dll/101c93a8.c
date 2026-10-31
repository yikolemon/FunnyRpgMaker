/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c93a8 */

undefined8 * __thiscall FUN_101c93a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *unaff_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_84;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_a0;
  local_18 = 0xffffffff;
  local_1c = &LAB_101ca070;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_84 = param_1 + 2;
  local_90 = 0;
  local_98 = param_3;
  local_a0 = param_2;
  FUN_101974ac();
  *param_1 = param_2;
  param_1[1] = param_3;
  local_98 = param_3;
  local_a0 = param_2;
  local_88 = param_1;
  FUN_101c9134();
  local_18 = 3;
  local_a0 = CONCAT44(local_a0._4_4_,&local_48);
  FUN_101c91b2();
  *(undefined4 *)(local_84 + 2) = local_38;
  *(undefined4 *)((int)local_84 + 0x14) = uStack_34;
  *(undefined4 *)(local_84 + 3) = uStack_30;
  *(undefined4 *)((int)local_84 + 0x1c) = uStack_2c;
  *(undefined4 *)local_84 = local_48;
  *(undefined4 *)((int)local_84 + 4) = uStack_44;
  *(undefined4 *)(local_84 + 1) = uStack_40;
  *(undefined4 *)((int)local_84 + 0xc) = uStack_3c;
  local_18 = 0xffffffff;
  FUN_10004eae();
  FUN_101c97ae();
  *unaff_FS_OFFSET = local_20;
  return local_88;
}

