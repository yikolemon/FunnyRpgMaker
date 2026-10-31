/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c306 */

void __fastcall FUN_1009c306(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_40 [6];
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3d80;
  local_1c = ExceptionList;
  local_40[0] = CONCAT31(local_40[0]._1_3_,
                         (char)((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) >> 2) + '\x01'
                        );
  ExceptionList = &local_1c;
  FUN_1007e5fc(local_40);
  local_40[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_1008b9b2(local_40);
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); local_24 = param_1, puVar2 != puVar1;
      puVar2 = puVar2 + 1) {
    local_40[0] = *puVar2;
    FUN_1008b9b2(local_40);
    param_1 = local_24;
  }
  FUN_1007e5fc(param_1 + 0x20);
  local_40[0] = CONCAT31(local_40[0]._1_3_,
                         (char)((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) >> 3) *
                         -0x55);
  FUN_1007e5fc(local_40);
  local_24 = *(int *)(param_1 + 0x14);
  local_28 = *(int *)(param_1 + 0x18);
  if (local_24 != local_28) {
    do {
      FUN_10003728(local_24);
      local_14 = 0;
      FUN_1008b536(local_40);
      local_14 = 0xffffffff;
      FUN_10001134();
      local_24 = local_24 + 0x18;
    } while (local_24 != local_28);
  }
  ExceptionList = local_1c;
  return;
}

