/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d0c2 */

uint * FUN_1007d0c2(uint *param_1,uint param_2,char ***param_3,int param_4,char param_5,
                   char *param_6,char ****param_7,char param_8)

{
  undefined1 uVar1;
  char cVar2;
  char ****ppppcVar3;
  lconv *plVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  char *_Control;
  char ****ppppcVar9;
  char ****ppppcVar10;
  char ***local_78;
  int *local_74;
  uint local_64;
  char local_5e [2];
  char ***local_5c;
  char ***local_58;
  char ***local_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
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
  
  local_20 = (undefined1 *)&local_78;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2e40;
  local_1c = ExceptionList;
  if (param_7 == (char ****)0x0) {
    ppppcVar3 = (char ****)0x0;
  }
  else if (*param_6 == '+') {
    ppppcVar3 = (char ****)0x1;
  }
  else {
    ppppcVar3 = (char ****)(uint)(*param_6 == '-');
  }
  _Control = "eE";
  if ((~*(uint *)(param_4 + 0x14) & 0x3000) == 0) {
    _Control = "pP";
    if (((param_7 < (char ****)((int)ppppcVar3 + 2U)) || (param_6[(int)ppppcVar3] != '0')) ||
       (local_2c = (char ***)((int)ppppcVar3 + 2U),
       (byte)((param_6 + 1)[(int)ppppcVar3] | 0x20U) != 0x78)) goto LAB_1007d14f;
  }
  else {
LAB_1007d14f:
    local_2c = (char ***)ppppcVar3;
  }
  ExceptionList = &local_1c;
  local_28 = (char ***)_strcspn(param_6,_Control);
  local_5e[0] = '.';
  local_5e[1] = '\0';
  plVar4 = _localeconv();
  local_5e[0] = *plVar4->decimal_point;
  local_3c = (char ***)_strcspn(param_6,local_5e);
  piStack_50 = *(int **)(*(int *)(param_4 + 0x30) + 4);
  (**(code **)(*piStack_50 + 4))();
  local_14 = 0;
  piVar5 = (int *)FUN_1001c23e(&local_54);
  local_14 = 0xffffffff;
  if ((piStack_50 != (int *)0x0) &&
     (puVar6 = (undefined4 *)(**(code **)(*piStack_50 + 8))(), puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  local_44 = 0;
  local_54 = (char ***)0x0;
  piStack_50 = (int *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_10062152(0,param_7);
  local_14 = 1;
  ppppcVar3 = &local_54;
  if (0xf < local_44._4_4_) {
    ppppcVar3 = (char ****)local_54;
  }
  (**(code **)(*piVar5 + 0x1c))(param_6,(char *)((int)param_7 + (int)param_6),ppppcVar3);
  local_74 = *(int **)(*(int *)(param_4 + 0x30) + 4);
  (**(code **)(*local_74 + 4))();
  local_14 = 2;
  local_30 = (char ***)&local_78;
  local_24 = (char ***)FUN_1000c417(local_30);
  local_14 = 0xffffffff;
  if ((local_74 != (int *)0x0) &&
     (puVar6 = (undefined4 *)(**(code **)(*local_74 + 8))(), puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  local_14 = 1;
  (**(code **)((int)*local_24 + 0x14))(&local_78);
  local_14 = 3;
  uVar1 = (**(code **)((int)*local_24 + 0x10))();
  local_38 = (char ***)CONCAT31(local_38._1_3_,uVar1);
  if ((char ****)local_3c != param_7) {
    cVar2 = (**(code **)((int)*local_24 + 0xc))();
    ppppcVar3 = (char ****)local_54;
    if (local_44._4_4_ < 0x10) {
      ppppcVar3 = &local_54;
    }
    *(char *)((int)ppppcVar3 + (int)local_3c) = cVar2;
  }
  if (param_8 != '\0') {
    if ((char ****)local_3c != param_7) {
      local_28 = local_3c;
    }
    if (0xf < local_64) {
      local_30 = local_78;
    }
    local_24 = (char ***)(int)(char)local_38;
    while ((cVar2 = *(char *)local_30, (byte)(cVar2 - 1U) < 0x7e &&
           ((uint)(int)cVar2 < (uint)((int)local_28 - (int)local_2c)))) {
      local_28 = (char ***)((int)local_28 - (int)cVar2);
      FUN_1007ce2a(local_28,1,local_24);
      if ('\0' < *(char *)((int)local_30 + 1)) {
        local_30 = (char ***)((int)local_30 + 1);
      }
    }
  }
  uVar7 = *(uint *)(param_4 + 0x20);
  local_3c = (char ***)(uint)local_44;
  local_38 = (char ***)(uVar7 - (uint)local_44);
  if (uVar7 < (uint)local_44) {
    local_38 = (char ***)0x0;
  }
  local_24 = (char ***)(char ****)0x0;
  if ((int)(uint)(uVar7 == 0) <= *(int *)(param_4 + 0x24)) {
    local_24 = local_38;
  }
  uVar7 = *(uint *)(param_4 + 0x14) & 0x1c0;
  local_34 = param_2;
  local_28 = (char ***)CONCAT31(local_28._1_3_,(char)param_2);
  local_30 = param_3;
  if (uVar7 == 0x40) {
    if ((char ****)local_2c != (char ****)0x0) {
      ppppcVar3 = (char ****)local_54;
      ppppcVar10 = (char ****)local_2c;
      if (local_44._4_4_ < 0x10) {
        ppppcVar3 = &local_54;
      }
      do {
        ppppcVar9 = ppppcVar10;
        if (param_3 == (char ***)0x0) {
LAB_1007d4ac:
          local_28 = (char ***)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_58 = (char ***)ppppcVar10;
          local_38 = (char ***)ppppcVar3;
          local_14 = 3;
          iVar8 = FUN_1007a612((int)*(char *)ppppcVar3);
          ppppcVar3 = (char ****)local_38;
          ppppcVar9 = (char ****)local_58;
          param_3 = local_30;
          if (iVar8 == -1) goto LAB_1007d4ac;
        }
        ppppcVar3 = (char ****)((int)ppppcVar3 + 1);
        ppppcVar10 = (char ****)((int)ppppcVar9 - 1U);
      } while ((char ****)((int)ppppcVar9 - 1U) != (char ****)0x0);
    }
    local_34 = local_34 & 0xffffff00 | (uint)local_28 & 0xff;
    goto LAB_1007d50f;
  }
  if (uVar7 == 0x100) {
    if ((char ****)local_2c != (char ****)0x0) {
      ppppcVar3 = (char ****)local_54;
      ppppcVar10 = (char ****)local_2c;
      if (local_44._4_4_ < 0x10) {
        ppppcVar3 = &local_54;
      }
      do {
        ppppcVar9 = ppppcVar10;
        if (param_3 == (char ***)0x0) {
LAB_1007d423:
          local_28 = (char ***)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_5c = (char ***)ppppcVar10;
          local_58 = (char ***)ppppcVar3;
          local_14 = 3;
          iVar8 = FUN_1007a612((int)*(char *)ppppcVar3);
          ppppcVar3 = (char ****)local_58;
          ppppcVar9 = (char ****)local_5c;
          param_3 = local_30;
          if (iVar8 == -1) goto LAB_1007d423;
        }
        ppppcVar3 = (char ****)((int)ppppcVar3 + 1);
        ppppcVar10 = (char ****)((int)ppppcVar9 - 1U);
      } while ((char ****)((int)ppppcVar9 - 1U) != (char ****)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((char ****)local_24 == (char ****)0x0) goto LAB_1007d471;
    local_24 = (char ***)(int)param_5;
    do {
      if (param_3 == (char ***)0x0) {
LAB_1007d462:
        local_28 = (char ***)CONCAT31(local_28._1_3_,1);
      }
      else {
        local_14 = 3;
        iVar8 = FUN_1007a612(local_24);
        param_3 = local_30;
        if (iVar8 == -1) goto LAB_1007d462;
      }
      local_38 = (char ***)((int)local_38 - 1);
    } while ((char ****)local_38 != (char ****)0x0);
LAB_1007d4ff:
  }
  else {
    if ((char ****)local_24 != (char ****)0x0) {
      local_24 = (char ***)(int)param_5;
      do {
        if (param_3 == (char ***)0x0) {
LAB_1007d3bf:
          local_28 = (char ***)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_14 = 3;
          iVar8 = FUN_1007a612(local_24);
          param_3 = local_30;
          if (iVar8 == -1) goto LAB_1007d3bf;
        }
        local_38 = (char ***)((int)local_38 - 1);
      } while ((char ****)local_38 != (char ****)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((char ****)local_2c != (char ****)0x0) {
      local_24 = local_54;
      ppppcVar3 = (char ****)local_2c;
      if (local_44._4_4_ < 0x10) {
        local_24 = (char ***)&local_54;
      }
      do {
        ppppcVar10 = ppppcVar3;
        if (param_3 == (char ***)0x0) {
LAB_1007d4f7:
          local_28 = (char ***)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_38 = (char ***)ppppcVar3;
          local_14 = 3;
          iVar8 = FUN_1007a612((int)*(char *)local_24);
          ppppcVar10 = (char ****)local_38;
          param_3 = local_30;
          if (iVar8 == -1) goto LAB_1007d4f7;
        }
        local_24 = (char ***)((int)local_24 + 1);
        ppppcVar3 = (char ****)((int)ppppcVar10 - 1U);
      } while ((char ****)((int)ppppcVar10 - 1U) != (char ****)0x0);
      goto LAB_1007d4ff;
    }
LAB_1007d471:
  }
  local_34 = local_34 | (byte)local_28;
  local_24 = (char ***)0x0;
LAB_1007d50f:
  local_3c = (char ***)((int)local_3c - (int)local_2c);
  local_28 = (char ***)CONCAT31(local_28._1_3_,(char)local_34);
  local_30 = param_3;
  if (local_3c != (char ***)0x0) {
    ppppcVar3 = (char ****)local_54;
    if (local_44._4_4_ < 0x10) {
      ppppcVar3 = &local_54;
    }
    ppppcVar3 = (char ****)((int)ppppcVar3 + (int)local_2c);
    do {
      if (param_3 == (char ***)0x0) {
LAB_1007d563:
        local_28 = (char ***)CONCAT31(local_28._1_3_,1);
      }
      else {
        local_2c = (char ***)ppppcVar3;
        local_14 = 3;
        iVar8 = FUN_1007a612((int)*(char *)ppppcVar3);
        ppppcVar3 = (char ****)local_2c;
        param_3 = local_30;
        if (iVar8 == -1) goto LAB_1007d563;
      }
      ppppcVar3 = (char ****)((int)ppppcVar3 + 1);
      local_3c = (char ***)((int)local_3c + -1);
    } while (local_3c != (char ***)0x0);
  }
  *(undefined4 *)(param_4 + 0x24) = 0;
  *(undefined4 *)(param_4 + 0x20) = 0;
  if ((char ****)local_24 != (char ****)0x0) {
    local_2c = (char ***)(int)param_5;
    do {
      if (param_3 == (char ***)0x0) {
LAB_1007d5a3:
        local_28 = (char ***)CONCAT31(local_28._1_3_,1);
      }
      else {
        local_14 = 3;
        iVar8 = FUN_1007a612(local_2c);
        param_3 = local_30;
        if (iVar8 == -1) goto LAB_1007d5a3;
      }
      local_24 = (char ***)((int)local_24 - 1);
    } while ((char ****)local_24 != (char ****)0x0);
  }
  *param_1 = (uint)local_28 & 0xff | local_34 & 0xffffff00;
  param_1[1] = (uint)param_3;
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

