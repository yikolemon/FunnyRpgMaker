/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4fbe */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_100f4fbe(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_3c [12];
  void *pvStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_2c = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5780;
  local_1c = ExceptionList;
  pvStack_30 = ExceptionList;
  local_20 = auStack_3c;
  local_28 = auStack_3c;
  ExceptionList = &local_1c;
  local_24 = (undefined1 *)param_1;
  FUN_10053132(param_1);
  local_14 = 0;
  FUN_10013d2e("isDockspaceSet");
  local_14 = 0xffffffff;
  uVar2 = FUN_1004eed0();
  puVar1 = local_2c;
  *(undefined4 *)(local_2c + -4) = uVar2;
  local_20 = puVar1 + -0x10;
  local_28 = puVar1 + -0x10;
  *(int *)(puVar1 + -0x14) = (int)local_24 + 1;
  *(undefined4 *)(puVar1 + -0x18) = 0x100f5045;
  FUN_10053132();
  local_14 = 1;
  *(undefined **)(puVar1 + -0x14) = &DAT_1032f3fa;
  *(undefined4 *)(puVar1 + -0x18) = 0x100f505a;
  FUN_10013d2e();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -0x14) = 0x100f5069;
  uVar2 = FUN_1004eed0();
  puVar1 = local_2c;
  *(undefined4 *)(local_2c + -4) = uVar2;
  local_20 = puVar1 + -0x10;
  iVar3 = (int)local_24 + 2;
  local_24 = puVar1 + -0x10;
  *(int *)(puVar1 + -0x14) = iVar3;
  *(undefined4 *)(puVar1 + -0x18) = 0x100f5087;
  FUN_100dd3ee();
  local_14 = 2;
  *(undefined **)(puVar1 + -0x14) = &DAT_10347280;
  *(undefined4 *)(puVar1 + -0x18) = 0x100f509c;
  FUN_10013d2e();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -0x14) = 0x100f50ab;
  FUN_1004eed0();
  ExceptionList = local_1c;
  return;
}

