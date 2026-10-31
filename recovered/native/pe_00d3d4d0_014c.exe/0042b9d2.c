/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042b9d2 */

void * __thiscall FUN_0042b9d2(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
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
  local_14 = 0xffffffff;
  local_18 = &LAB_0042e7c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  FUN_00403b4c(this,param_1);
  local_14 = 0;
  local_38 = (void *)((int)local_24 + 0x18);
  FUN_00404e7a(local_38,(int)(param_1 + 6));
  local_14 = 1;
  local_34 = (void *)((int)local_24 + 0x40);
  FUN_00404e7a(local_34,(int)(param_1 + 0x10));
  local_14 = 2;
  *(char *)((int)local_24 + 0x68) = (char)param_1[0x1a];
  local_30 = (void *)((int)local_24 + 0x70);
  FUN_0042bd1c(local_30,(int)(param_1 + 0x1c));
  local_14 = 4;
  local_2c = (void *)((int)local_24 + 0xa0);
  FUN_0042bd1c(local_2c,(int)(param_1 + 0x28));
  local_14 = 6;
  *(undefined8 *)((int)local_24 + 0xf0) = *(undefined8 *)(param_1 + 0x3c);
  uVar1 = param_1[0x34];
  uVar2 = param_1[0x35];
  uVar3 = param_1[0x36];
  uVar4 = param_1[0x37];
  uVar5 = param_1[0x39];
  uVar6 = param_1[0x3a];
  uVar7 = param_1[0x3b];
  *(uint *)((int)local_24 + 0xe0) = param_1[0x38];
  *(uint *)((int)local_24 + 0xe4) = uVar5;
  *(uint *)((int)local_24 + 0xe8) = uVar6;
  *(uint *)((int)local_24 + 0xec) = uVar7;
  *(uint *)((int)local_24 + 0xd0) = uVar1;
  *(uint *)((int)local_24 + 0xd4) = uVar2;
  *(uint *)((int)local_24 + 0xd8) = uVar3;
  *(uint *)((int)local_24 + 0xdc) = uVar4;
  local_28 = (void *)((int)local_24 + 0xf8);
  FUN_0042bd1c(local_28,(int)(param_1 + 0x3e));
  ExceptionList = local_1c;
  return local_24;
}

