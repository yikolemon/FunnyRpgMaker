/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007c506 */

char *** __thiscall
FUN_1007c506(int *param_1,char ***param_2,uint param_3,char **param_4,int param_5,char param_6,
            byte param_7)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char ***local_88;
  undefined8 local_84;
  int local_7c;
  int local_78;
  uint local_74;
  undefined8 local_70;
  char ***local_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char ***local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  char *local_38;
  uint local_34;
  char ***local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_88;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2e20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if ((*(byte *)(param_5 + 0x15) & 0x40) == 0) {
    local_74 = (uint)param_7;
    local_84 = CONCAT44(param_4,param_3);
    local_78 = (int)param_6;
    local_7c = param_5;
    local_88 = param_2;
    local_70 = local_84;
    local_20 = (undefined1 *)&local_88;
    (**(code **)(*param_1 + 0x24))();
    ExceptionList = local_1c;
  }
  else {
    piStack_64 = *(int **)(*(int *)(param_5 + 0x30) + 4);
    (**(code **)(*piStack_64 + 4))();
    local_14 = 0;
    local_88 = (char ***)&local_68;
    local_30 = local_88;
    piVar2 = (int *)FUN_1000c417();
    local_14 = 0xffffffff;
    if ((piStack_64 != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*piStack_64 + 8))(), puVar3 != (undefined4 *)0x0)) {
      local_88 = (char ***)0x1;
      (**(code **)*puVar3)();
    }
    local_68 = (char ***)0x0;
    piStack_64 = (int *)0x0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_58 = 0xf00000000;
    local_14 = 1;
    if (param_7 == 0) {
      local_88 = (char ***)&local_50;
      (**(code **)(*piVar2 + 0x18))();
      local_14 = 2;
      FUN_10004e60();
      local_58 = CONCAT44(uStack_3c,local_40);
      local_68 = local_50;
      piStack_64 = (int *)uStack_4c;
      uStack_60 = uStack_48;
      uStack_5c = uStack_44;
      local_40 = 0;
      uStack_3c = 0xf;
      local_50 = (char ***)((uint)local_50 & 0xffffff00);
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    else {
      local_88 = (char ***)&local_50;
      (**(code **)(*piVar2 + 0x1c))();
      local_14 = 3;
      FUN_10004e60();
      local_58 = CONCAT44(uStack_3c,local_40);
      local_68 = local_50;
      piStack_64 = (int *)uStack_4c;
      uStack_60 = uStack_48;
      uStack_5c = uStack_44;
      local_40 = 0;
      uStack_3c = 0xf;
      local_50 = (char ***)((uint)local_50 & 0xffffff00);
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    uVar1 = *(uint *)(param_5 + 0x20);
    local_28 = (uint)local_58;
    local_2c = uVar1 - (uint)local_58;
    if (uVar1 < (uint)local_58) {
      local_2c = 0;
    }
    uVar5 = 0;
    if ((int)(uint)(uVar1 == 0) <= *(int *)(param_5 + 0x24)) {
      uVar5 = local_2c;
    }
    local_38 = (char *)param_4;
    if ((*(uint *)(param_5 + 0x14) & 0x1c0) != 0x40) {
      local_34 = param_3;
      local_24 = CONCAT31(local_24._1_3_,(char)param_3);
      if (uVar5 != 0) {
        local_28 = (uint)param_6;
        do {
          if (param_4 == (char **)0x0) {
LAB_1007c71c:
            local_24 = CONCAT31(local_24._1_3_,1);
          }
          else {
            local_14 = 1;
            iVar4 = FUN_1007a612(local_28);
            param_4 = (char **)local_38;
            if (iVar4 == -1) goto LAB_1007c71c;
          }
          local_2c = local_2c + -1;
        } while (local_2c != 0);
        local_28 = (uint)local_58;
        local_2c = 0;
      }
      param_3 = local_34 & 0xffffff00 | local_24 & 0xff;
      local_24 = 0;
      uVar5 = local_24;
    }
    local_24 = uVar5;
    local_2c = CONCAT31(local_2c._1_3_,(char)param_3);
    local_34 = param_3;
    if (local_28 != 0) {
      if (0xf < local_58._4_4_) {
        local_30 = local_68;
      }
      do {
        if (param_4 == (char **)0x0) {
LAB_1007c782:
          local_2c = CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 1;
          iVar4 = FUN_1007a612((int)*(char *)local_30);
          param_4 = (char **)local_38;
          if (iVar4 == -1) goto LAB_1007c782;
        }
        local_30 = (char ***)((int)local_30 + 1);
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    *(undefined4 *)(param_5 + 0x24) = 0;
    *(undefined4 *)(param_5 + 0x20) = 0;
    if (local_24 != 0) {
      local_30 = (char ***)(int)param_6;
      do {
        if (param_4 == (char **)0x0) {
LAB_1007c7ca:
          local_2c = CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 1;
          iVar4 = FUN_1007a612(local_30);
          param_4 = (char **)local_38;
          if (iVar4 == -1) goto LAB_1007c7ca;
        }
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    *param_2 = (char **)(local_2c & 0xff | local_34 & 0xffffff00);
    param_2[1] = param_4;
    local_14 = 0xffffffff;
    FUN_10001fee();
    ExceptionList = local_1c;
  }
  return param_2;
}

