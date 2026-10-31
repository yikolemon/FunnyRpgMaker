/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007c8e6 */

uint * FUN_1007c8e6(undefined4 param_1,uint *param_2,uint param_3,char ***param_4,int param_5,
                   char param_6,char *param_7,char ****param_8)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  char ****ppppcVar8;
  char ***local_74;
  int *local_70;
  uint local_60;
  char ***local_5c;
  char ***local_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint local_40;
  char ***local_3c;
  char ***local_38;
  uint local_34;
  char ***local_30;
  char ***local_2c;
  char ***local_28;
  char ***local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_74;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2e30;
  local_1c = ExceptionList;
  local_2c = (char ***)param_8;
  if (param_8 == (char ****)0x0) {
    local_28 = (char ***)0x0;
  }
  else if (*param_7 == '+') {
    local_28 = (char ***)0x1;
  }
  else {
    local_28 = (char ***)(uint)(*param_7 == '-');
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) &&
       ((char ****)((int)local_28 + 2U) <= param_8)) && (param_7[(int)local_28] == '0')) &&
     ((byte)((param_7 + 1)[(int)local_28] | 0x20U) == 0x78)) {
    local_28 = (char ***)((int)local_28 + 2U);
  }
  piStack_54 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  ExceptionList = &local_1c;
  (**(code **)(*piStack_54 + 4))();
  local_14 = 0;
  piVar2 = (int *)FUN_1001c23e(&local_58);
  local_14 = 0xffffffff;
  if ((piStack_54 != (int *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*piStack_54 + 8))(), puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  local_48 = 0;
  local_58 = (char ***)0x0;
  piStack_54 = (int *)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_10062152(0,param_8);
  local_14 = 1;
  ppppcVar6 = &local_58;
  if (0xf < local_48._4_4_) {
    ppppcVar6 = (char ****)local_58;
  }
  (**(code **)(*piVar2 + 0x1c))(param_7,(char *)((int)param_8 + (int)param_7),ppppcVar6);
  local_70 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  (**(code **)(*local_70 + 4))();
  local_14 = 2;
  local_30 = (char ***)&local_74;
  piVar2 = (int *)FUN_1000c417(local_30);
  local_14 = 0xffffffff;
  if ((local_70 != (int *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*local_70 + 8))(), puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  local_14 = 1;
  local_24 = (char ***)piVar2;
  (**(code **)(*piVar2 + 0x14))(&local_74);
  local_14 = 3;
  if (0xf < local_60) {
    local_30 = local_74;
  }
  if ((byte)(*(char *)local_30 - 1U) < 0x7e) {
    cVar1 = (**(code **)((int)*local_24 + 0x10))();
    local_24 = (char ***)(int)cVar1;
    while ((cVar1 = *(char *)local_30, (byte)(cVar1 - 1U) < 0x7e &&
           ((uint)(int)cVar1 < (uint)((int)local_2c - (int)local_28)))) {
      local_2c = (char ***)((int)local_2c - (int)cVar1);
      FUN_1007ce2a(local_2c,1,local_24);
      if ('\0' < *(char *)((int)local_30 + 1)) {
        local_30 = (char ***)((int)local_30 + 1);
      }
    }
  }
  uVar4 = *(uint *)(param_5 + 0x20);
  local_40 = (uint)local_48;
  local_38 = (char ***)(uVar4 - (uint)local_48);
  if (uVar4 < (uint)local_48) {
    local_38 = (char ***)0x0;
  }
  local_24 = (char ***)(char ****)0x0;
  if ((int)(uint)(uVar4 == 0) <= *(int *)(param_5 + 0x24)) {
    local_24 = local_38;
  }
  uVar4 = *(uint *)(param_5 + 0x14) & 0x1c0;
  local_34 = param_3;
  local_2c = (char ***)CONCAT31(local_2c._1_3_,(char)param_3);
  local_30 = param_4;
  if (uVar4 == 0x40) {
    if ((char ****)local_28 != (char ****)0x0) {
      ppppcVar6 = (char ****)local_58;
      ppppcVar8 = (char ****)local_28;
      if (local_48._4_4_ < 0x10) {
        ppppcVar6 = &local_58;
      }
      do {
        ppppcVar7 = ppppcVar8;
        if (param_4 == (char ***)0x0) {
LAB_1007cc6f:
          local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_3c = (char ***)ppppcVar8;
          local_38 = (char ***)ppppcVar6;
          local_14 = 3;
          iVar5 = FUN_1007a612((int)*(char *)ppppcVar6);
          ppppcVar6 = (char ****)local_38;
          ppppcVar7 = (char ****)local_3c;
          param_4 = local_30;
          if (iVar5 == -1) goto LAB_1007cc6f;
        }
        ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
        ppppcVar8 = (char ****)((int)ppppcVar7 - 1U);
      } while ((char ****)((int)ppppcVar7 - 1U) != (char ****)0x0);
    }
    local_34 = local_34 & 0xffffff00 | (uint)local_2c & 0xff;
    goto LAB_1007ccd2;
  }
  if (uVar4 == 0x100) {
    if ((char ****)local_28 != (char ****)0x0) {
      ppppcVar6 = (char ****)local_58;
      ppppcVar8 = (char ****)local_28;
      if (local_48._4_4_ < 0x10) {
        ppppcVar6 = &local_58;
      }
      do {
        ppppcVar7 = ppppcVar8;
        if (param_4 == (char ***)0x0) {
LAB_1007cbe6:
          local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_5c = (char ***)ppppcVar8;
          local_3c = (char ***)ppppcVar6;
          local_14 = 3;
          iVar5 = FUN_1007a612((int)*(char *)ppppcVar6);
          ppppcVar6 = (char ****)local_3c;
          ppppcVar7 = (char ****)local_5c;
          param_4 = local_30;
          if (iVar5 == -1) goto LAB_1007cbe6;
        }
        ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
        ppppcVar8 = (char ****)((int)ppppcVar7 - 1U);
      } while ((char ****)((int)ppppcVar7 - 1U) != (char ****)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((char ****)local_24 == (char ****)0x0) goto LAB_1007cc34;
    local_24 = (char ***)(int)param_6;
    do {
      if (param_4 == (char ***)0x0) {
LAB_1007cc25:
        local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
      }
      else {
        local_14 = 3;
        iVar5 = FUN_1007a612(local_24);
        param_4 = local_30;
        if (iVar5 == -1) goto LAB_1007cc25;
      }
      local_38 = (char ***)((int)local_38 - 1);
    } while ((char ****)local_38 != (char ****)0x0);
LAB_1007ccc2:
  }
  else {
    if ((char ****)local_24 != (char ****)0x0) {
      local_24 = (char ***)(int)param_6;
      do {
        if (param_4 == (char ***)0x0) {
LAB_1007cb82:
          local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_14 = 3;
          iVar5 = FUN_1007a612(local_24);
          param_4 = local_30;
          if (iVar5 == -1) goto LAB_1007cb82;
        }
        local_38 = (char ***)((int)local_38 - 1);
      } while ((char ****)local_38 != (char ****)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((char ****)local_28 != (char ****)0x0) {
      local_24 = local_58;
      ppppcVar6 = (char ****)local_28;
      if (local_48._4_4_ < 0x10) {
        local_24 = (char ***)&local_58;
      }
      do {
        ppppcVar8 = ppppcVar6;
        if (param_4 == (char ***)0x0) {
LAB_1007ccba:
          local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
        }
        else {
          local_38 = (char ***)ppppcVar6;
          local_14 = 3;
          iVar5 = FUN_1007a612((int)*(char *)local_24);
          ppppcVar8 = (char ****)local_38;
          param_4 = local_30;
          if (iVar5 == -1) goto LAB_1007ccba;
        }
        local_24 = (char ***)((int)local_24 + 1);
        ppppcVar6 = (char ****)((int)ppppcVar8 - 1U);
      } while ((char ****)((int)ppppcVar8 - 1U) != (char ****)0x0);
      goto LAB_1007ccc2;
    }
LAB_1007cc34:
  }
  local_34 = local_34 | (byte)local_2c;
  local_24 = (char ***)0x0;
LAB_1007ccd2:
  local_40 = local_40 - (int)local_28;
  local_2c = (char ***)CONCAT31(local_2c._1_3_,(char)local_34);
  local_30 = param_4;
  if (local_40 != 0) {
    ppppcVar6 = (char ****)local_58;
    if (local_48._4_4_ < 0x10) {
      ppppcVar6 = &local_58;
    }
    ppppcVar6 = (char ****)((int)ppppcVar6 + (int)local_28);
    do {
      if (param_4 == (char ***)0x0) {
LAB_1007cd26:
        local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
      }
      else {
        local_28 = (char ***)ppppcVar6;
        local_14 = 3;
        iVar5 = FUN_1007a612((int)*(char *)ppppcVar6);
        ppppcVar6 = (char ****)local_28;
        param_4 = local_30;
        if (iVar5 == -1) goto LAB_1007cd26;
      }
      ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
  if ((char ****)local_24 != (char ****)0x0) {
    local_28 = (char ***)(int)param_6;
    do {
      if (param_4 == (char ***)0x0) {
LAB_1007cd66:
        local_2c = (char ***)CONCAT31(local_2c._1_3_,1);
      }
      else {
        local_14 = 3;
        iVar5 = FUN_1007a612(local_28);
        param_4 = local_30;
        if (iVar5 == -1) goto LAB_1007cd66;
      }
      local_24 = (char ***)((int)local_24 - 1);
    } while ((char ****)local_24 != (char ****)0x0);
  }
  *param_2 = (uint)local_2c & 0xff | local_34 & 0xffffff00;
  param_2[1] = (uint)param_4;
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_2;
}

