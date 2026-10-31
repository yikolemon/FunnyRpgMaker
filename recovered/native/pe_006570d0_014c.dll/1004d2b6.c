/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004d2b6 */

undefined4 * __thiscall FUN_1004d2b6(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int *in_stack_0000002c;
  undefined1 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined1 local_44 [8];
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_44;
  local_18 = &LAB_1005a840;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = param_2;
  local_3c = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 1;
  local_2c = param_1 + 4;
  FUN_1001cd06();
  local_14 = 2;
  local_38 = param_1 + 8;
  FUN_1001cd06();
  local_14 = 3;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_34 = param_1 + 0xe;
  local_24 = param_1;
  FUN_1004b556(&stack0x00000008);
  local_14 = 4;
  *(undefined1 *)(local_24 + 0x18) = in_stack_00000030;
  local_30 = local_24 + 0x1a;
  FUN_10014148(9);
  local_14 = 5;
  local_24[0x1e] = in_stack_00000034;
  local_25 = 1;
  uVar1 = local_24[7];
  FUN_1001f6b2(local_44,((int)uVar1 >> 0x1f & 0xe0000000U) + (uVar1 >> 5) * 4 + local_24[4],
               uVar1 & 0x1f,1,&local_25);
  puVar2 = local_24;
  local_14 = 0xffffffff;
  if (in_stack_0000002c != (int *)0x0) {
    (**(code **)(*in_stack_0000002c + 0x10))(in_stack_0000002c != (int *)&stack0x00000008);
  }
  *unaff_FS_OFFSET = local_1c;
  return puVar2;
}

