/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008121e */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1008121e(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *in_stack_00000034;
  undefined1 in_stack_00000038;
  undefined1 in_stack_0000003c;
  undefined1 in_stack_00000040;
  int local_68;
  undefined1 auStack_64 [48];
  void **local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar4 = in_stack_0000003c;
  uVar3 = in_stack_00000038;
  local_30 = (undefined1 *)&local_30;
  local_34 = &local_1c;
  local_18 = &LAB_100c3150;
  local_1c = ExceptionList;
  local_14 = 1;
  local_28 = &local_68;
  local_20 = (undefined1 *)&local_68;
  local_21 = in_stack_00000040;
  local_2c = auStack_64;
  ExceptionList = local_34;
  FUN_1004b556(&stack0x00000010);
  piVar6 = local_28;
  *local_28 = (int)&stack0x00000008;
  *(undefined1 *)(piVar6 + 0xb) = uVar3;
  *(undefined1 *)(piVar6 + 0xc) = uVar4;
  *(undefined1 *)(piVar6 + 0xd) = local_21;
  local_14 = 1;
  FUN_10081b80();
  puVar5 = local_30;
  local_20 = local_30;
  local_14 = 0xffffffff;
  *(undefined4 *)(local_30 + -4) = 0x100812d3;
  FUN_1008136e();
  if (in_stack_00000034 != (int *)0x0) {
    iVar1 = *in_stack_00000034;
    *(uint *)(puVar5 + -4) = (uint)(in_stack_00000034 != (int *)&stack0x00000010);
    pcVar2 = *(code **)(iVar1 + 0x10);
    *(undefined4 *)(puVar5 + -8) = 0x100812ed;
    (*pcVar2)();
  }
  ExceptionList = local_1c;
  return param_1;
}

