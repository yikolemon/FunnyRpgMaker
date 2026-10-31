/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a6b8c */

void __thiscall FUN_100a6b8c(int param_1,int param_2)

{
  int iVar1;
  int local_90 [24];
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c42f0;
  local_1c = ExceptionList;
  local_90[0] = -1;
  ExceptionList = &local_1c;
  FUN_1008bcec(param_1 + 0x34,local_90);
  FUN_1008b9b2(param_1);
  FUN_1008b536(param_1 + 4);
  FUN_1008b9b2(param_1 + 0x1c);
  FUN_1008b9b2(param_1 + 0x20);
  local_90[0] = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 5) * -0x55555555;
  FUN_1008b9b2(local_90);
  local_90[0] = -1;
  local_28 = param_2 + 0x38;
  FUN_1008bcec(param_1 + 0x40,local_90);
  iVar1 = *(int *)(param_1 + 0x24);
  local_2c = *(int *)(param_1 + 0x28);
  if (iVar1 != local_2c) {
    do {
      local_30 = iVar1;
      FUN_100a5d70(iVar1);
      local_14 = 0;
      local_21 = 0x79;
      FUN_1007e5fc(&local_21);
      FUN_100a6cd8(param_2);
      local_14 = 0xffffffff;
      FUN_100a4b06();
      iVar1 = local_30 + 0x60;
    } while (iVar1 != local_2c);
  }
  local_90[0] = CONCAT31(local_90[0]._1_3_,0x70);
  FUN_1007e5fc(local_90);
  ExceptionList = local_1c;
  return;
}

