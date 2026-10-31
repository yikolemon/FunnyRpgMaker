/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006cb64 */

uint FUN_1006cb64(uint *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 ****ppppuVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 ***local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2610;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_1[4] == 0) {
    iVar1 = FUN_10002303();
    *param_2 = 3;
    param_2[1] = iVar1;
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    local_20 = (undefined1 *)&local_48;
    iVar1 = FUN_10002303();
    param_2[1] = iVar1;
    local_38 = 0;
    local_48 = (undefined4 ****)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_34 = 7;
    local_14 = 0;
    uVar5 = param_1[4];
    if (7 < uVar5) {
      FUN_10004404(uVar5,local_30);
      uVar5 = param_1[4];
    }
    local_38 = 0;
    if (7 < param_1[5]) {
      param_1 = (uint *)*param_1;
    }
    local_24 = (uint *)((int)param_1 + uVar5 * 2);
    local_28 = param_1;
    puVar2 = (uint *)FUN_100020d5(param_1,local_24);
    local_2c = puVar2;
    if (((puVar2 != local_28) && (4 < (int)local_24 - (int)puVar2)) &&
       ((*puVar2 & 0xffffffdf) - 0x3a0041 < 0x1a)) {
      if ((short)puVar2[1] == 0x2f) {
        local_2c = puVar2 + 1;
      }
      if ((short)puVar2[1] == 0x5c) {
        local_2c = puVar2 + 1;
      }
    }
    FUN_100048de(local_28,(int)local_2c - (int)local_28 >> 1);
    uVar6 = 0;
    puVar2 = (uint *)0;
    while( true ) {
      local_28 = puVar2;
      puVar2 = local_2c;
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
      uVar5 = (uint)uVar6;
      puVar4 = local_2c;
      if (local_2c == local_24) break;
      do {
        if (((short)*puVar4 != 0x5c) && ((short)*puVar4 != 0x2f)) break;
        puVar4 = (uint *)((int)puVar4 + 2);
      } while (puVar4 != local_24);
      for (; ((puVar4 != local_24 && ((short)*puVar4 != 0x2f)) && ((short)*puVar4 != 0x5c));
          puVar4 = (uint *)((int)puVar4 + 2)) {
      }
      iVar1 = (int)puVar4 - (int)local_2c;
      local_14 = 0;
      local_2c = puVar4;
      FUN_100048de(puVar2,iVar1 >> 1);
      ppppuVar3 = &local_48;
      if (7 < local_34) {
        ppppuVar3 = (undefined4 ****)local_48;
      }
      uVar6 = FUN_102292e0(ppppuVar3);
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
      puVar2 = local_28;
      if (iVar1 != 0) {
        if (iVar1 < 0x7b) {
          if (((1 < iVar1 - 2U) && (iVar1 != 0x35)) && (puVar2 = (uint *)iVar1, iVar1 == 0x40)) {
            puVar2 = local_28;
          }
        }
        else if (((iVar1 != 0x7b) && (iVar1 != 0xa1)) && (puVar2 = (uint *)iVar1, iVar1 == 0x10b)) {
          puVar2 = local_28;
        }
      }
    }
    puVar2 = local_28;
    if (local_28 == (uint *)0x0) {
      puVar2 = (uint *)iVar1;
    }
    if (iVar1 == 0) {
      puVar2 = (uint *)iVar1;
    }
    iVar1 = FUN_10002303();
    *param_2 = (int)puVar2;
    param_2[1] = iVar1;
    local_14 = 0xffffffff;
    FUN_10001134();
  }
  ExceptionList = local_1c;
  return uVar5 & 0xffffff01;
}

