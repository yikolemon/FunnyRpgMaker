/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009936e */

void __thiscall FUN_1009936e(undefined1 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *local_3c;
  undefined1 *local_38;
  int local_34 [4];
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3bb0;
  local_1c = ExceptionList;
  local_34[0] = CONCAT31(local_34[0]._1_3_,1);
  ExceptionList = &local_1c;
  FUN_1007e5fc(local_34);
  puVar1 = *(undefined1 **)((int)param_1 + 0x34);
  for (puVar2 = *(undefined1 **)((int)param_1 + 0x30); local_24 = param_1, puVar2 != puVar1;
      puVar2 = puVar2 + 1) {
    local_34[0]._1_3_ = (undefined3)((uint)local_34[0] >> 8);
    local_34[0] = CONCAT31(local_34[0]._1_3_,*puVar2);
    FUN_1007e5fc(local_34);
    param_1 = local_24;
  }
  FUN_1007e5fc((int)param_1 + 0x3c);
  local_34[0] = *(int *)((int)param_1 + 0x44) - *(int *)((int)param_1 + 0x40) >> 4;
  FUN_1008b9b2(local_34);
  puVar2 = *(undefined1 **)((int)param_1 + 0x40);
  local_38 = *(undefined1 **)((int)param_1 + 0x44);
  if (puVar2 != local_38) {
    do {
      local_34[0] = CONCAT31(local_34[0]._1_3_,*puVar2);
      local_24 = puVar2 + 4;
      local_34[1] = 0;
      local_34[2] = 0;
      local_34[3] = 0;
      local_3c = puVar2 + 8;
      FUN_10061af0(*(int *)(puVar2 + 8) - *(int *)(puVar2 + 4) >> 2,local_24,local_3c);
      local_14 = 2;
      FUN_1009a0c8(param_2);
      local_14 = 0xffffffff;
      FUN_10004eae();
      puVar2 = local_3c + 8;
    } while (puVar2 != local_38);
  }
  ExceptionList = local_1c;
  return;
}

