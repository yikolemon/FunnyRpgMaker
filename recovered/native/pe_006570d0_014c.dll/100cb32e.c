/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb32e */

void __thiscall FUN_100cb32e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_68 [2];
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [9];
  int *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_100cc4c0;
  local_20 = ExceptionList;
  local_5c = param_1 + 0x30;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  local_58 = param_1;
  local_54 = param_1;
  local_60 = FUN_10228350(100);
  local_18 = 1;
  local_66 = 1;
  FUN_100cb4fc(&local_54);
  local_18 = 2;
  local_65 = 1;
  FUN_100cb59e(local_50,param_2,param_3);
  local_64 = local_60;
  local_65 = 0;
  local_18 = 0xffffffff;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0x10))(local_2c != local_50);
  }
  local_66 = 0;
  local_18 = 3;
  local_64 = 0;
  iVar1 = *(int *)(local_58 + 0x110);
  *(undefined4 *)(local_58 + 0x110) = local_60;
  if (iVar1 != 0) {
    FUN_10043be8(iVar1);
  }
  local_18 = 0xffffffff;
  if (local_64 != 0) {
    FUN_10043be8(local_64);
  }
  FUN_1022c200(local_5c);
  ExceptionList = local_20;
  return;
}

