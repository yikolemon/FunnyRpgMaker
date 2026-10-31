/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a6cd8 */

void __thiscall FUN_100a6cd8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4300;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1008b9b2(param_1 + 4);
  FUN_1008b536(param_1 + 8);
  FUN_1007e5fc(param_1 + 0x20);
  FUN_1007e5fc(param_1 + 0x21);
  FUN_1007e5fc(param_1 + 0x22);
  FUN_1007e5fc(param_1 + 0x23);
  local_30 = -1;
  FUN_1008bcec(param_1 + 0x24,&local_30);
  local_30 = -1;
  FUN_1008bcec(param_1 + 0x30,&local_30);
  FUN_1007e5fc(param_1 + 0x3c);
  FUN_1007e5fc(param_1 + 0x3d);
  local_30 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 4;
  local_38 = param_2 + 0x38;
  FUN_1008b9b2(&local_30);
  puVar3 = *(undefined1 **)(param_1 + 0x40);
  local_3c = *(undefined1 **)(param_1 + 0x44);
  local_34 = param_1;
  if (puVar3 != local_3c) {
    do {
      local_30 = CONCAT31(local_30._1_3_,*puVar3);
      local_44 = puVar3 + 4;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_40 = puVar3 + 8;
      FUN_10061af0(*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4) >> 2,local_44,local_40);
      local_14 = 2;
      FUN_1009a0c8(param_2);
      local_14 = 0xffffffff;
      FUN_10004eae();
      puVar3 = local_40 + 8;
    } while (puVar3 != local_3c);
  }
  iVar4 = local_34;
  local_30 = *(int *)(local_34 + 0x50) - *(int *)(local_34 + 0x4c) >> 3;
  FUN_1008b9b2(&local_30);
  iVar1 = *(int *)(iVar4 + 0x50);
  iVar2 = local_34;
  for (iVar4 = *(int *)(iVar4 + 0x4c); local_34 = iVar2, iVar4 != iVar1; iVar4 = iVar4 + 8) {
    FUN_1009c280(param_2);
    iVar2 = local_34;
  }
  FUN_1008b9b2(iVar2 + 0x58);
  FUN_1007e5fc(iVar2 + 0x5c);
  FUN_1007e5fc(iVar2 + 0x5d);
  FUN_1007e5fc(iVar2 + 0x5e);
  if (3 < *(uint *)(iVar2 + 0x58)) {
    FUN_1007e5fc(iVar2 + 0x5f);
  }
  local_30 = CONCAT31(local_30._1_3_,0x7a);
  FUN_1007e5fc(&local_30);
  ExceptionList = local_1c;
  return;
}

