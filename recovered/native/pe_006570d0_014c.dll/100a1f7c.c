/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a1f7c */

undefined4 ** __thiscall
FUN_100a1f7c(int *param_1,undefined4 **param_2,uint param_3,undefined4 *param_4,int param_5,
            ushort param_6,byte param_7)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 **local_88;
  undefined8 local_84;
  int local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  uint local_68 [6];
  undefined4 **local_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 **local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_88;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4090;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if ((*(byte *)(param_5 + 0x15) & 0x40) == 0) {
    local_74 = (uint)param_7;
    local_84 = CONCAT44(param_4,param_3);
    local_78 = (uint)param_6;
    local_7c = param_5;
    local_88 = param_2;
    local_70 = local_84;
    local_20 = (undefined1 *)&local_88;
    (**(code **)(*param_1 + 0x24))();
    ExceptionList = local_1c;
  }
  else {
    piStack_4c = *(int **)(*(int *)(param_5 + 0x30) + 4);
    (**(code **)(*piStack_4c + 4))();
    local_14 = 0;
    local_88 = &local_50;
    local_30 = local_88;
    piVar3 = (int *)FUN_100470ba();
    local_14 = 0xffffffff;
    if ((piStack_4c != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*piStack_4c + 8))(), puVar4 != (undefined4 *)0x0)) {
      local_88 = (undefined4 **)0x1;
      (**(code **)*puVar4)();
    }
    local_50 = (undefined4 ***)0x0;
    piStack_4c = (int *)0x0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = 0;
    local_3c = 7;
    local_14 = 1;
    if (param_7 == 0) {
      local_88 = (undefined4 **)local_68;
      (**(code **)(*piVar3 + 0x18))();
      local_14 = 2;
      FUN_100128b2(local_68);
      local_14 = 0xffffffff;
      FUN_10001134();
    }
    else {
      local_88 = (undefined4 **)local_68;
      (**(code **)(*piVar3 + 0x1c))();
      local_14 = 3;
      FUN_100128b2(local_68);
      local_14 = 0xffffffff;
      FUN_10001134();
    }
    uVar1 = *(uint *)(param_5 + 0x20);
    local_28 = local_40;
    local_2c = uVar1 - local_40;
    if (uVar1 < local_40) {
      local_2c = 0;
    }
    uVar5 = 0;
    if ((int)(uint)(uVar1 == 0) <= *(int *)(param_5 + 0x24)) {
      uVar5 = local_2c;
    }
    local_38 = (uint)param_4;
    if ((*(uint *)(param_5 + 0x14) & 0x1c0) != 0x40) {
      local_34 = param_3;
      local_24 = CONCAT31(local_24._1_3_,(char)param_3);
      if (uVar5 != 0) {
        local_28 = (uint)param_6;
        do {
          if (param_4 == (undefined4 *)0x0) {
LAB_100a215b:
            local_24 = CONCAT31(local_24._1_3_,1);
          }
          else {
            local_14 = 1;
            sVar2 = FUN_100a14d0(local_28);
            param_4 = (undefined4 *)local_38;
            if (sVar2 == -1) goto LAB_100a215b;
          }
          local_2c = local_2c + -1;
        } while (local_2c != 0);
        local_2c = 0;
      }
      param_3 = local_34 & 0xffffff00 | local_24 & 0xff;
      local_24 = 0;
      local_28 = local_40;
      uVar5 = local_24;
    }
    local_24 = uVar5;
    local_2c = CONCAT31(local_2c._1_3_,(char)param_3);
    local_40 = local_28;
    local_34 = param_3;
    if (local_28 != 0) {
      if (7 < local_3c) {
        local_30 = local_50;
      }
      do {
        if (param_4 == (undefined4 *)0x0) {
LAB_100a21c2:
          local_2c = CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 1;
          sVar2 = FUN_100a14d0(*(undefined2 *)local_30);
          param_4 = (undefined4 *)local_38;
          if (sVar2 == -1) goto LAB_100a21c2;
        }
        local_30 = (undefined4 **)((int)local_30 + 2);
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    *(undefined4 *)(param_5 + 0x24) = 0;
    *(undefined4 *)(param_5 + 0x20) = 0;
    if (local_24 != 0) {
      local_30 = (undefined4 **)(uint)param_6;
      do {
        if (param_4 == (undefined4 *)0x0) {
LAB_100a220c:
          local_2c = CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 1;
          sVar2 = FUN_100a14d0(local_30);
          param_4 = (undefined4 *)local_38;
          if (sVar2 == -1) goto LAB_100a220c;
        }
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    *param_2 = (undefined4 *)(local_2c & 0xff | local_34 & 0xffffff00);
    param_2[1] = param_4;
    local_14 = 0xffffffff;
    FUN_10001134();
    ExceptionList = local_1c;
  }
  return param_2;
}

