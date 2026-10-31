/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004b42a */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1004b42a(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int *in_stack_00000034;
  undefined1 in_stack_00000038;
  undefined1 in_stack_0000003c;
  undefined1 in_stack_00000040;
  int local_68;
  undefined1 auStack_64 [48];
  int *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar4 = in_stack_0000003c;
  uVar3 = in_stack_00000038;
  local_30 = (undefined1 *)&local_30;
  local_34 = &local_1c;
  local_18 = &LAB_1005a7c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_34;
  local_14 = 0;
  local_28 = &local_68;
  local_20 = (undefined1 *)&local_68;
  local_21 = in_stack_00000040;
  local_2c = auStack_64;
  FUN_1004b556(&stack0x00000010);
  piVar6 = local_28;
  *local_28 = (int)&stack0x00000008;
  *(undefined1 *)(piVar6 + 0xb) = uVar3;
  *(undefined1 *)(piVar6 + 0xc) = uVar4;
  *(undefined1 *)(piVar6 + 0xd) = local_21;
  local_14 = 0;
  FUN_1004bdea();
  puVar5 = local_30;
  local_20 = local_30;
  local_14 = 0xffffffff;
  if (in_stack_00000034 != (int *)0x0) {
    iVar1 = *in_stack_00000034;
    *(uint *)(local_30 + -4) = (uint)(in_stack_00000034 != (int *)&stack0x00000010);
    pcVar2 = *(code **)(iVar1 + 0x10);
    *(undefined4 *)(puVar5 + -8) = 0x1004b4e9;
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

