/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d3130 */

int FUN_101d3130(void)

{
  undefined8 in_stack_00000254;
  undefined4 in_stack_0000025c;
  undefined1 in_stack_00000260;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_101d60c0;
  local_1c = ExceptionList;
  local_14 = 1;
  ExceptionList = &local_1c;
  FUN_101d3252(&stack0x00000004);
  local_14 = 2;
  local_28 = local_24 + 0x128;
  FUN_101d3252(&stack0x0000012c);
  *(undefined8 *)(local_24 + 0x250) = in_stack_00000254;
  *(undefined4 *)(local_24 + 600) = in_stack_0000025c;
  *(undefined1 *)(local_24 + 0x25c) = in_stack_00000260;
  local_14 = 0xffffffff;
  FUN_1019798e();
  FUN_1019798e();
  ExceptionList = local_1c;
  return local_24;
}

