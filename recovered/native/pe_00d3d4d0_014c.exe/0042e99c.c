/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042e99c */

void * __thiscall FUN_0042e99c(void *this)

{
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
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_18 = &LAB_0042ef10;
  local_1c = ExceptionList;
  local_14 = 5;
  ExceptionList = &local_1c;
  local_24 = this;
  FUN_00403b4c(this,(uint *)&stack0x00000004);
  local_14 = 6;
  local_38 = (void *)((int)local_24 + 0x18);
  FUN_00404e7a(local_38,(int)&stack0x0000001c);
  local_14 = 7;
  local_34 = (void *)((int)local_24 + 0x40);
  FUN_00404e7a(local_34,(int)&stack0x00000044);
  local_14 = 8;
  *(undefined1 *)((int)local_24 + 0x68) = in_stack_0000006c;
  local_30 = (void *)((int)local_24 + 0x70);
  FUN_0042bd1c(local_30,(int)&stack0x00000070);
  local_14 = 10;
  local_2c = (void *)((int)local_24 + 0xa0);
  FUN_0042bd1c(local_2c,(int)&stack0x000000a0);
  local_14 = 0xc;
  *(undefined8 *)((int)local_24 + 0xf0) = in_stack_000000f0;
  *(undefined4 *)((int)local_24 + 0xe0) = in_stack_000000e0;
  *(undefined4 *)((int)local_24 + 0xe4) = in_stack_000000e4;
  *(undefined4 *)((int)local_24 + 0xe8) = in_stack_000000e8;
  *(undefined4 *)((int)local_24 + 0xec) = in_stack_000000ec;
  *(undefined4 *)((int)local_24 + 0xd0) = in_stack_000000d0;
  *(undefined4 *)((int)local_24 + 0xd4) = in_stack_000000d4;
  *(undefined4 *)((int)local_24 + 0xd8) = in_stack_000000d8;
  *(undefined4 *)((int)local_24 + 0xdc) = in_stack_000000dc;
  local_28 = (void *)((int)local_24 + 0xf8);
  FUN_0042bd1c(local_28,(int)&stack0x000000f8);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)&stack0x00000004);
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
  ExceptionList = local_1c;
  return local_24;
}

