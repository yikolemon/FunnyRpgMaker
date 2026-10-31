/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00409c68 */

uint * __thiscall
FUN_00409c68(void *this,uint *param_1,uint param_2,void *param_3,int param_4,ushort param_5,
            char param_6)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_68 [6];
  undefined4 **local_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  void *local_38;
  uint local_34;
  undefined4 **local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = &stack0xffffff78;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418160;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if ((*(byte *)(param_4 + 0x15) & 0x40) == 0) {
    local_20 = &stack0xffffff78;
    (**(code **)(*(int *)this + 0x24))();
    ExceptionList = local_1c;
  }
  else {
    piStack_4c = *(int **)(*(int *)(param_4 + 0x30) + 4);
    (**(code **)(*piStack_4c + 4))();
    local_14 = 0;
    local_30 = &local_50;
    piVar3 = FUN_0040a572(local_30);
    local_14 = 0xffffffff;
    if ((piStack_4c != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*piStack_4c + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)();
    }
    local_50 = (undefined4 ***)0x0;
    piStack_4c = (int *)0x0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = 0;
    local_3c = 7;
    local_14 = 1;
    if (param_6 == '\0') {
      (**(code **)(*piVar3 + 0x18))();
      local_14 = 2;
      FUN_004076fa(&local_50,local_68);
      local_14 = 0xffffffff;
      FUN_0040226e(local_68);
    }
    else {
      (**(code **)(*piVar3 + 0x1c))();
      local_14 = 3;
      FUN_004076fa(&local_50,local_68);
      local_14 = 0xffffffff;
      FUN_0040226e(local_68);
    }
    uVar1 = *(uint *)(param_4 + 0x20);
    local_28 = local_40;
    local_2c = uVar1 - local_40;
    if (uVar1 < local_40) {
      local_2c = 0;
    }
    uVar5 = 0;
    if ((int)(uint)(uVar1 == 0) <= *(int *)(param_4 + 0x24)) {
      uVar5 = local_2c;
    }
    local_38 = param_3;
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      local_34 = param_2;
      local_24 = CONCAT31(local_24._1_3_,(char)param_2);
      if (uVar5 != 0) {
        local_28 = (uint)param_5;
        do {
          if (param_3 == (void *)0x0) {
LAB_00409e47:
            local_24 = CONCAT31(local_24._1_3_,1);
          }
          else {
            local_14 = 1;
            sVar2 = FUN_00405198(param_3,(short)local_28);
            param_3 = local_38;
            if (sVar2 == -1) goto LAB_00409e47;
          }
          local_2c = local_2c + -1;
        } while (local_2c != 0);
        local_2c = 0;
      }
      param_2 = local_34 & 0xffffff00 | local_24 & 0xff;
      local_24 = 0;
      local_28 = local_40;
      uVar5 = local_24;
    }
    local_24 = uVar5;
    local_2c = CONCAT31(local_2c._1_3_,(char)param_2);
    local_40 = local_28;
    local_34 = param_2;
    if (local_28 != 0) {
      if (7 < local_3c) {
        local_30 = local_50;
      }
      do {
        if (param_3 == (void *)0x0) {
LAB_00409eae:
          local_2c = CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 1;
          sVar2 = FUN_00405198(param_3,*(undefined2 *)local_30);
          param_3 = local_38;
          if (sVar2 == -1) goto LAB_00409eae;
        }
        local_30 = (undefined4 **)((int)local_30 + 2);
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x20) = 0;
    if (local_24 != 0) {
      local_30 = (undefined4 **)(uint)param_5;
      do {
        if (param_3 == (void *)0x0) {
LAB_00409ef8:
          local_2c = CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 1;
          sVar2 = FUN_00405198(param_3,(short)local_30);
          param_3 = local_38;
          if (sVar2 == -1) goto LAB_00409ef8;
        }
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    *param_1 = local_2c & 0xff | local_34 & 0xffffff00;
    param_1[1] = (uint)param_3;
    local_14 = 0xffffffff;
    FUN_0040226e(&local_50);
    ExceptionList = local_1c;
  }
  return param_1;
}

