/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013ab0 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_10013ab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *unaff_FS_OFFSET;
  int *in_stack_00000030;
  undefined1 in_stack_00000034;
  undefined1 in_stack_00000038;
  undefined1 in_stack_0000003c;
  int local_120 [3];
  undefined1 auStack_114 [44];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [5];
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  int *local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_cc;
  int local_c8 [9];
  int *local_a4;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 *puVar5;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_e0;
  local_1c = &LAB_10058ea0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_18 = 2;
  local_d4 = param_1;
  local_e4 = 0;
  local_e8 = 0x10013b04;
  local_e4 = FUN_1004b3be();
  local_cc = auStack_e0;
  local_18 = 3;
  local_24 = (undefined1 *)local_120;
  local_d8 = local_120;
  local_d9 = in_stack_0000003c;
  local_db = in_stack_00000034;
  local_da = in_stack_00000038;
  local_d0 = auStack_114;
  FUN_1004b556(&stack0x0000000c);
  local_18 = 4;
  FUN_1004b5e0(local_d8 + 1,param_2);
  piVar3 = local_d8;
  *local_d8 = (int)local_c8;
  *(undefined1 *)(piVar3 + 0xd) = local_db;
  *(undefined1 *)(piVar3 + 0xe) = local_da;
  *(undefined1 *)(piVar3 + 0xf) = local_d9;
  local_18 = 3;
  FUN_1004b42a();
  puVar4 = local_cc;
  local_24 = local_cc;
  local_18 = 5;
  *(undefined4 *)(local_cc + -4) = local_d4;
  *(undefined4 *)(puVar4 + -8) = 1;
  *(undefined4 *)(puVar4 + -0xc) = 0x10013bbd;
  FUN_1004b608();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x10013bf1;
  FUN_1004c01c();
  if (local_a4 != (int *)0x0) {
    iVar1 = *local_a4;
    *(uint *)(puVar4 + -4) = (uint)(local_a4 != local_c8);
    pcVar2 = *(code **)(iVar1 + 0x10);
    puVar5 = (undefined4 *)(puVar4 + -8);
    puVar4 = puVar4 + -8;
    *puVar5 = 0x10013c09;
    (*pcVar2)();
  }
  if (in_stack_00000030 != (int *)0x0) {
    iVar1 = *in_stack_00000030;
    *(uint *)(puVar4 + -4) = (uint)(in_stack_00000030 != (int *)&stack0x0000000c);
    pcVar2 = *(code **)(iVar1 + 0x10);
    *(undefined4 *)(puVar4 + -8) = 0x10013c23;
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

