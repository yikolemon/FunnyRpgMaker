/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a22be */

uint * FUN_100a22be(undefined4 param_1,uint *param_2,uint param_3,char ***param_4,int param_5,
                   ushort param_6,char *param_7,undefined4 ****param_8)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****ppppuVar7;
  undefined4 ****ppppuVar8;
  char ***local_74;
  int *local_70;
  uint local_60;
  undefined4 ***local_5c;
  undefined4 ***local_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint local_40;
  undefined4 ***local_3c;
  undefined4 ***local_38;
  uint local_34;
  char ***local_30;
  undefined4 ***local_2c;
  undefined4 ***local_28;
  undefined4 ***local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_74;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c40a0;
  local_1c = ExceptionList;
  local_2c = param_8;
  if (param_8 == (undefined4 ****)0x0) {
    local_28 = (undefined4 ****)0x0;
  }
  else if (*param_7 == '+') {
    local_28 = (undefined4 ****)0x1;
  }
  else {
    local_28 = (undefined4 ***)(uint)(*param_7 == '-');
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) &&
       ((undefined4 ****)((int)local_28 + 2U) <= param_8)) && (param_7[(int)local_28] == '0')) &&
     ((byte)((param_7 + 1)[(int)local_28] | 0x20U) == 0x78)) {
    local_28 = (undefined4 ****)((int)local_28 + 2U);
  }
  piStack_54 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  ExceptionList = &local_1c;
  (**(code **)(*piStack_54 + 4))();
  local_14 = 0;
  piVar3 = (int *)FUN_10091ec2(&local_58);
  local_14 = 0xffffffff;
  if ((piStack_54 != (int *)0x0) &&
     (puVar4 = (undefined4 *)(**(code **)(*piStack_54 + 8))(), puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(1);
  }
  local_48 = 0;
  local_58 = (undefined4 ****)0x0;
  piStack_54 = (int *)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_10005b1e(0,param_8);
  local_14 = 1;
  ppppuVar6 = &local_58;
  if (7 < local_48._4_4_) {
    ppppuVar6 = (undefined4 ****)local_58;
  }
  (**(code **)(*piVar3 + 0x2c))(param_7,(char *)((int)param_8 + (int)param_7),ppppuVar6);
  local_70 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  (**(code **)(*local_70 + 4))();
  local_14 = 2;
  local_30 = (char ***)&local_74;
  piVar3 = (int *)FUN_100470ba(local_30);
  local_14 = 0xffffffff;
  if ((local_70 != (int *)0x0) &&
     (puVar4 = (undefined4 *)(**(code **)(*local_70 + 8))(), puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(1);
  }
  local_14 = 1;
  local_24 = (undefined4 ***)piVar3;
  (**(code **)(*piVar3 + 0x14))(&local_74);
  local_14 = 3;
  if (0xf < local_60) {
    local_30 = local_74;
  }
  if ((byte)(*(char *)local_30 - 1U) < 0x7e) {
    uVar5 = (**(code **)((int)*local_24 + 0x10))();
    local_24 = (undefined4 ***)(uVar5 & 0xffff);
    while ((cVar1 = *(char *)local_30, (byte)(cVar1 - 1U) < 0x7e &&
           ((uint)(int)cVar1 < (uint)((int)local_2c - (int)local_28)))) {
      local_2c = (undefined4 ***)((int)local_2c - (int)cVar1);
      FUN_100a2816(local_2c,1,local_24);
      if ('\0' < *(char *)((int)local_30 + 1)) {
        local_30 = (char ***)((int)local_30 + 1);
      }
    }
  }
  uVar5 = *(uint *)(param_5 + 0x20);
  local_40 = (uint)local_48;
  local_38 = (undefined4 ***)(uVar5 - (uint)local_48);
  if (uVar5 < (uint)local_48) {
    local_38 = (undefined4 ****)0x0;
  }
  local_24 = (undefined4 ****)0x0;
  if ((int)(uint)(uVar5 == 0) <= *(int *)(param_5 + 0x24)) {
    local_24 = local_38;
  }
  uVar5 = *(uint *)(param_5 + 0x14) & 0x1c0;
  local_34 = param_3;
  local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,(char)param_3);
  local_30 = param_4;
  if (uVar5 == 0x40) {
    if ((undefined4 ****)local_28 != (undefined4 ****)0x0) {
      ppppuVar6 = (undefined4 ****)local_58;
      ppppuVar8 = (undefined4 ****)local_28;
      if (local_48._4_4_ < 8) {
        ppppuVar6 = &local_58;
      }
      do {
        ppppuVar7 = ppppuVar8;
        if (param_4 == (char ***)0x0) {
LAB_100a2650:
          local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_3c = ppppuVar8;
          local_38 = ppppuVar6;
          local_14 = 3;
          sVar2 = FUN_100a14d0(*(undefined2 *)ppppuVar6);
          ppppuVar6 = (undefined4 ****)local_38;
          ppppuVar7 = (undefined4 ****)local_3c;
          param_4 = local_30;
          if (sVar2 == -1) goto LAB_100a2650;
        }
        ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 2);
        ppppuVar8 = (undefined4 ****)((int)ppppuVar7 - 1U);
      } while ((undefined4 ****)((int)ppppuVar7 - 1U) != (undefined4 ****)0x0);
    }
    local_34 = local_34 & 0xffffff00 | (uint)local_2c & 0xff;
    goto LAB_100a26b8;
  }
  if (uVar5 == 0x100) {
    if ((undefined4 ****)local_28 != (undefined4 ****)0x0) {
      ppppuVar6 = (undefined4 ****)local_58;
      ppppuVar8 = (undefined4 ****)local_28;
      if (local_48._4_4_ < 8) {
        ppppuVar6 = &local_58;
      }
      do {
        ppppuVar7 = ppppuVar8;
        if (param_4 == (char ***)0x0) {
LAB_100a25c3:
          local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_5c = ppppuVar8;
          local_3c = ppppuVar6;
          local_14 = 3;
          sVar2 = FUN_100a14d0(*(undefined2 *)ppppuVar6);
          ppppuVar6 = (undefined4 ****)local_3c;
          ppppuVar7 = (undefined4 ****)local_5c;
          param_4 = local_30;
          if (sVar2 == -1) goto LAB_100a25c3;
        }
        ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 2);
        ppppuVar8 = (undefined4 ****)((int)ppppuVar7 - 1U);
      } while ((undefined4 ****)((int)ppppuVar7 - 1U) != (undefined4 ****)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((undefined4 ****)local_24 == (undefined4 ****)0x0) goto LAB_100a2614;
    local_24 = (undefined4 ***)(uint)param_6;
    do {
      if (param_4 == (char ***)0x0) {
LAB_100a2605:
        local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
      }
      else {
        local_14 = 3;
        sVar2 = FUN_100a14d0(local_24);
        param_4 = local_30;
        if (sVar2 == -1) goto LAB_100a2605;
      }
      local_38 = (undefined4 ***)((int)local_38 - 1);
    } while ((undefined4 ****)local_38 != (undefined4 ****)0x0);
LAB_100a26a8:
  }
  else {
    if ((undefined4 ****)local_24 != (undefined4 ****)0x0) {
      local_24 = (undefined4 ***)(uint)param_6;
      do {
        if (param_4 == (char ***)0x0) {
LAB_100a255e:
          local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 3;
          sVar2 = FUN_100a14d0(local_24);
          param_4 = local_30;
          if (sVar2 == -1) goto LAB_100a255e;
        }
        local_38 = (undefined4 ***)((int)local_38 - 1);
      } while ((undefined4 ****)local_38 != (undefined4 ****)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((undefined4 ****)local_28 != (undefined4 ****)0x0) {
      local_24 = local_58;
      ppppuVar6 = (undefined4 ****)local_28;
      if (local_48._4_4_ < 8) {
        local_24 = &local_58;
      }
      do {
        ppppuVar8 = ppppuVar6;
        if (param_4 == (char ***)0x0) {
LAB_100a269e:
          local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_38 = ppppuVar6;
          local_14 = 3;
          sVar2 = FUN_100a14d0(*(undefined2 *)local_24);
          ppppuVar8 = (undefined4 ****)local_38;
          param_4 = local_30;
          if (sVar2 == -1) goto LAB_100a269e;
        }
        local_24 = (undefined4 ****)((int)local_24 + 2);
        ppppuVar6 = (undefined4 ****)((int)ppppuVar8 - 1U);
      } while ((undefined4 ****)((int)ppppuVar8 - 1U) != (undefined4 ****)0x0);
      goto LAB_100a26a8;
    }
LAB_100a2614:
  }
  local_34 = local_34 | (byte)local_2c;
  local_24 = (undefined4 ****)0x0;
LAB_100a26b8:
  local_40 = local_40 - (int)local_28;
  local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,(char)local_34);
  local_30 = param_4;
  if (local_40 != 0) {
    ppppuVar6 = (undefined4 ****)local_58;
    if (local_48._4_4_ < 8) {
      ppppuVar6 = &local_58;
    }
    ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + (int)local_28 * 2);
    do {
      if (param_4 == (char ***)0x0) {
LAB_100a2710:
        local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
      }
      else {
        local_28 = ppppuVar6;
        local_14 = 3;
        sVar2 = FUN_100a14d0(*(undefined2 *)ppppuVar6);
        ppppuVar6 = (undefined4 ****)local_28;
        param_4 = local_30;
        if (sVar2 == -1) goto LAB_100a2710;
      }
      ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 2);
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
  if ((undefined4 ****)local_24 != (undefined4 ****)0x0) {
    local_28 = (undefined4 ***)(uint)param_6;
    do {
      if (param_4 == (char ***)0x0) {
LAB_100a2753:
        local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,1);
      }
      else {
        local_14 = 3;
        sVar2 = FUN_100a14d0(local_28);
        param_4 = local_30;
        if (sVar2 == -1) goto LAB_100a2753;
      }
      local_24 = (undefined4 ***)((int)local_24 - 1);
    } while ((undefined4 ****)local_24 != (undefined4 ****)0x0);
  }
  *param_2 = (uint)local_2c & 0xff | local_34 & 0xffffff00;
  param_2[1] = (uint)param_4;
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001134();
  ExceptionList = local_1c;
  return param_2;
}

