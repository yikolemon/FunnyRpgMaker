/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042b8b0 */

void * __fastcall FUN_0042b8b0(void *param_1)

{
  undefined8 in_stack_00000254;
  undefined4 in_stack_0000025c;
  undefined1 in_stack_00000260;
  void *local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_0042e7b0;
  local_1c = ExceptionList;
  local_14 = 1;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_0042b9d2(param_1,(uint *)&stack0x00000004);
  local_14 = 2;
  local_28 = (void *)((int)local_24 + 0x128);
  FUN_0042b9d2(local_28,(uint *)&stack0x0000012c);
  *(undefined8 *)((int)local_24 + 0x250) = in_stack_00000254;
  *(undefined4 *)((int)local_24 + 600) = in_stack_0000025c;
  *(undefined1 *)((int)local_24 + 0x25c) = in_stack_00000260;
  local_14 = 0xffffffff;
  FUN_0041ba34((int *)&stack0x00000004);
  FUN_0041ba34((int *)&stack0x0000012c);
  ExceptionList = local_1c;
  return local_24;
}

