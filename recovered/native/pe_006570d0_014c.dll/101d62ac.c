/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d62ac */

int FUN_101d62ac(void)

{
  int *unaff_FS_OFFSET;
  int *in_stack_00000040;
  int *in_stack_00000068;
  undefined1 in_stack_0000006c;
  int *in_stack_00000094;
  char in_stack_00000098;
  int *in_stack_000000c4;
  char in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined8 in_stack_000000f0;
  int *in_stack_0000011c;
  char in_stack_00000120;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_18 = &LAB_101d7760;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 5;
  FUN_1000334a(&stack0x00000004);
  local_14 = 6;
  local_38 = local_24 + 0x18;
  FUN_1001860e(&stack0x0000001c);
  local_14 = 7;
  local_34 = local_24 + 0x40;
  FUN_1001860e(&stack0x00000044);
  local_14 = 8;
  *(undefined1 *)(local_24 + 0x68) = in_stack_0000006c;
  local_30 = local_24 + 0x70;
  FUN_101d359c(&stack0x00000070);
  local_14 = 10;
  local_2c = local_24 + 0xa0;
  FUN_101d359c(&stack0x000000a0);
  local_14 = 0xc;
  *(undefined8 *)(local_24 + 0xf0) = in_stack_000000f0;
  *(undefined4 *)(local_24 + 0xe0) = in_stack_000000e0;
  *(undefined4 *)(local_24 + 0xe4) = in_stack_000000e4;
  *(undefined4 *)(local_24 + 0xe8) = in_stack_000000e8;
  *(undefined4 *)(local_24 + 0xec) = in_stack_000000ec;
  *(undefined4 *)(local_24 + 0xd0) = in_stack_000000d0;
  *(undefined4 *)(local_24 + 0xd4) = in_stack_000000d4;
  *(undefined4 *)(local_24 + 0xd8) = in_stack_000000d8;
  *(undefined4 *)(local_24 + 0xdc) = in_stack_000000dc;
  local_28 = local_24 + 0xf8;
  FUN_101d359c(&stack0x000000f8);
  local_14 = 0xffffffff;
  FUN_10001fee();
  if (in_stack_00000040 != (int *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040 != (int *)&stack0x0000001c);
    in_stack_00000040 = (int *)0x0;
  }
  if (in_stack_00000068 != (int *)0x0) {
    (**(code **)(*in_stack_00000068 + 0x10))(in_stack_00000068 != (int *)&stack0x00000044);
    in_stack_00000068 = (int *)0x0;
  }
  if ((in_stack_00000098 == '\x01') && (in_stack_00000094 != (int *)0x0)) {
    (**(code **)(*in_stack_00000094 + 0x10))(in_stack_00000094 != (int *)&stack0x00000070);
    in_stack_00000094 = (int *)0x0;
  }
  if ((in_stack_000000c8 == '\x01') && (in_stack_000000c4 != (int *)0x0)) {
    (**(code **)(*in_stack_000000c4 + 0x10))(in_stack_000000c4 != (int *)&stack0x000000a0);
    in_stack_000000c4 = (int *)0x0;
  }
  if ((in_stack_00000120 == '\x01') && (in_stack_0000011c != (int *)0x0)) {
    (**(code **)(*in_stack_0000011c + 0x10))(in_stack_0000011c != (int *)&stack0x000000f8);
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

