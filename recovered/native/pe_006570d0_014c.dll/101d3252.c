/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d3252 */

int FUN_101d3252(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
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
  local_14 = 0xffffffff;
  local_18 = &LAB_101d60d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1000334a(param_1);
  local_14 = 0;
  local_38 = local_24 + 0x18;
  FUN_1001860e(param_1 + 0x18);
  local_14 = 1;
  local_34 = local_24 + 0x40;
  FUN_1001860e(param_1 + 0x40);
  local_14 = 2;
  *(undefined1 *)(local_24 + 0x68) = *(undefined1 *)(param_1 + 0x68);
  local_30 = local_24 + 0x70;
  FUN_101d359c(param_1 + 0x70);
  local_14 = 4;
  local_2c = local_24 + 0xa0;
  FUN_101d359c(param_1 + 0xa0);
  local_14 = 6;
  *(undefined8 *)(local_24 + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0xd4);
  uVar3 = *(undefined4 *)(param_1 + 0xd8);
  uVar4 = *(undefined4 *)(param_1 + 0xdc);
  uVar5 = *(undefined4 *)(param_1 + 0xe4);
  uVar6 = *(undefined4 *)(param_1 + 0xe8);
  uVar7 = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(local_24 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(local_24 + 0xe4) = uVar5;
  *(undefined4 *)(local_24 + 0xe8) = uVar6;
  *(undefined4 *)(local_24 + 0xec) = uVar7;
  *(undefined4 *)(local_24 + 0xd0) = uVar1;
  *(undefined4 *)(local_24 + 0xd4) = uVar2;
  *(undefined4 *)(local_24 + 0xd8) = uVar3;
  *(undefined4 *)(local_24 + 0xdc) = uVar4;
  local_28 = local_24 + 0xf8;
  FUN_101d359c(param_1 + 0xf8);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

