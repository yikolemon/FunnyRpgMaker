/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081b80 */

int FUN_10081b80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_stack_0000002c;
  undefined1 in_stack_00000030;
  undefined1 in_stack_00000034;
  undefined1 in_stack_00000038;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c3180;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_1004b556(&stack0x00000008);
  iVar1 = local_24;
  local_14 = 1;
  *(undefined4 *)(local_24 + 0x28) = 0;
  local_28 = local_24 + 0x30;
  FUN_10081cb6(param_1,in_stack_00000034);
  local_14 = 2;
  *(undefined1 *)(iVar1 + 0x98) = in_stack_00000030;
  *(undefined1 *)(iVar1 + 0x99) = in_stack_00000038;
  uVar2 = FUN_10081e88();
  *(undefined4 *)(local_24 + 0x28) = uVar2;
  local_14 = 0xffffffff;
  if (in_stack_0000002c != (int *)0x0) {
    (**(code **)(*in_stack_0000002c + 0x10))(in_stack_0000002c != (int *)&stack0x00000008);
  }
  ExceptionList = local_1c;
  return local_24;
}

