/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040ac22 */

uint * FUN_0040ac22(uint *param_1,uint param_2,char ***param_3,int param_4,ushort param_5,
                   char *param_6,undefined4 ****param_7,char param_8)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 *******pppppppuVar4;
  lconv *plVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *******pppppppuVar10;
  char *_Control;
  char ***local_78;
  int *local_74;
  uint local_64;
  char local_5e [2];
  undefined4 ******local_5c;
  undefined4 ******local_58;
  undefined4 ******local_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined4 ****local_3c;
  undefined4 ******local_38;
  uint local_34;
  char ***local_30;
  undefined4 ******local_2c;
  undefined4 ****local_28;
  undefined4 ******local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_78;
  local_14 = 0xffffffff;
  local_18 = &LAB_004181c0;
  local_1c = ExceptionList;
  if (param_7 == (undefined4 ****)0x0) {
    pppppppuVar4 = (undefined4 *******)0x0;
  }
  else if (*param_6 == '+') {
    pppppppuVar4 = (undefined4 *******)0x1;
  }
  else {
    pppppppuVar4 = (undefined4 *******)(uint)(*param_6 == '-');
  }
  _Control = "eE";
  if ((~*(uint *)(param_4 + 0x14) & 0x3000) == 0) {
    _Control = "pP";
    if (((param_7 < (undefined4 *******)((int)pppppppuVar4 + 2U)) ||
        (param_6[(int)pppppppuVar4] != '0')) ||
       (local_2c = (undefined4 *******)((int)pppppppuVar4 + 2U),
       (byte)((param_6 + 1)[(int)pppppppuVar4] | 0x20U) != 0x78)) goto LAB_0040acaf;
  }
  else {
LAB_0040acaf:
    local_2c = pppppppuVar4;
  }
  ExceptionList = &local_1c;
  local_28 = (undefined4 ****)_strcspn(param_6,_Control);
  local_5e[0] = '.';
  local_5e[1] = '\0';
  plVar5 = _localeconv();
  local_5e[0] = *plVar5->decimal_point;
  local_3c = (undefined4 ****)_strcspn(param_6,local_5e);
  piStack_50 = *(int **)(*(int *)(param_4 + 0x30) + 4);
  (**(code **)(*piStack_50 + 4))();
  local_14 = 0;
  piVar6 = FUN_00405085(&local_54);
  local_14 = 0xffffffff;
  if ((piStack_50 != (int *)0x0) &&
     (puVar7 = (undefined4 *)(**(code **)(*piStack_50 + 8))(), puVar7 != (undefined4 *)0x0)) {
    (**(code **)*puVar7)(1);
  }
  local_44 = 0;
  local_54 = (undefined4 *******)0x0;
  piStack_50 = (int *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_00408582(&local_54,0,(uint)param_7);
  local_14 = 1;
  pppppppuVar4 = &local_54;
  if (7 < local_44._4_4_) {
    pppppppuVar4 = (undefined4 *******)local_54;
  }
  (**(code **)(*piVar6 + 0x2c))(param_6,(char *)((int)param_7 + (int)param_6),pppppppuVar4);
  local_74 = *(int **)(*(int *)(param_4 + 0x30) + 4);
  (**(code **)(*local_74 + 4))();
  local_14 = 2;
  local_30 = (char ***)&local_78;
  local_24 = (undefined4 ******)FUN_0040a572(local_30);
  local_14 = 0xffffffff;
  if ((local_74 != (int *)0x0) &&
     (puVar7 = (undefined4 *)(**(code **)(*local_74 + 8))(), puVar7 != (undefined4 *)0x0)) {
    (**(code **)*puVar7)(1);
  }
  local_14 = 1;
  (**(code **)((int)*local_24 + 0x14))(&local_78);
  local_14 = 3;
  uVar2 = (**(code **)((int)*local_24 + 0x10))();
  local_38 = (undefined4 ******)CONCAT22(local_38._2_2_,uVar2);
  if (local_3c != param_7) {
    uVar2 = (**(code **)((int)*local_24 + 0xc))();
    pppppppuVar4 = (undefined4 *******)local_54;
    if (local_44._4_4_ < 8) {
      pppppppuVar4 = &local_54;
    }
    *(undefined2 *)((int)pppppppuVar4 + (int)local_3c * 2) = uVar2;
  }
  if (param_8 != '\0') {
    if (local_3c != param_7) {
      local_28 = local_3c;
    }
    if (0xf < local_64) {
      local_30 = local_78;
    }
    local_24 = (undefined4 ******)((uint)local_38 & 0xffff);
    while ((cVar1 = *(char *)local_30, (byte)(cVar1 - 1U) < 0x7e &&
           ((uint)(int)cVar1 < (uint)((int)local_28 - (int)local_2c)))) {
      local_28 = (undefined4 ****)((int)local_28 - (int)cVar1);
      FUN_0040866c(&local_54,(uint)local_28,1,(short)local_24);
      if ('\0' < *(char *)((int)local_30 + 1)) {
        local_30 = (char ***)((int)local_30 + 1);
      }
    }
  }
  uVar8 = *(uint *)(param_4 + 0x20);
  local_3c = (undefined4 ****)(uint)local_44;
  local_38 = (undefined4 ******)(uVar8 - (uint)local_44);
  if (uVar8 < (uint)local_44) {
    local_38 = (undefined4 *******)0x0;
  }
  local_24 = (undefined4 *******)0x0;
  if ((int)(uint)(uVar8 == 0) <= *(int *)(param_4 + 0x24)) {
    local_24 = local_38;
  }
  uVar8 = *(uint *)(param_4 + 0x14) & 0x1c0;
  local_34 = param_2;
  local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,(char)param_2);
  local_30 = param_3;
  if (uVar8 == 0x40) {
    if ((undefined4 *******)local_2c != (undefined4 *******)0x0) {
      pppppppuVar4 = (undefined4 *******)local_2c;
      pppppppuVar10 = (undefined4 *******)local_54;
      if (local_44._4_4_ < 8) {
        pppppppuVar10 = &local_54;
      }
      do {
        pppppppuVar9 = pppppppuVar4;
        if (param_3 == (char ***)0x0) {
LAB_0040b017:
          local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_58 = pppppppuVar4;
          local_38 = pppppppuVar10;
          local_14 = 3;
          sVar3 = FUN_00405198(param_3,*(undefined2 *)pppppppuVar10);
          pppppppuVar9 = (undefined4 *******)local_58;
          pppppppuVar10 = (undefined4 *******)local_38;
          param_3 = local_30;
          if (sVar3 == -1) goto LAB_0040b017;
        }
        pppppppuVar4 = (undefined4 *******)((int)pppppppuVar9 - 1U);
        pppppppuVar10 = (undefined4 *******)((int)pppppppuVar10 + 2);
      } while ((undefined4 *******)((int)pppppppuVar9 - 1U) != (undefined4 *******)0x0);
    }
    local_34 = local_34 & 0xffffff00 | (uint)local_28 & 0xff;
    goto LAB_0040b07f;
  }
  if (uVar8 == 0x100) {
    if ((undefined4 *******)local_2c != (undefined4 *******)0x0) {
      pppppppuVar4 = (undefined4 *******)local_2c;
      pppppppuVar10 = (undefined4 *******)local_54;
      if (local_44._4_4_ < 8) {
        pppppppuVar10 = &local_54;
      }
      do {
        pppppppuVar9 = pppppppuVar4;
        if (param_3 == (char ***)0x0) {
LAB_0040af8a:
          local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_5c = pppppppuVar4;
          local_58 = pppppppuVar10;
          local_14 = 3;
          sVar3 = FUN_00405198(param_3,*(undefined2 *)pppppppuVar10);
          pppppppuVar9 = (undefined4 *******)local_5c;
          pppppppuVar10 = (undefined4 *******)local_58;
          param_3 = local_30;
          if (sVar3 == -1) goto LAB_0040af8a;
        }
        pppppppuVar4 = (undefined4 *******)((int)pppppppuVar9 - 1U);
        pppppppuVar10 = (undefined4 *******)((int)pppppppuVar10 + 2);
      } while ((undefined4 *******)((int)pppppppuVar9 - 1U) != (undefined4 *******)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((undefined4 *******)local_24 == (undefined4 *******)0x0) goto LAB_0040afdb;
    local_24 = (undefined4 ******)(uint)param_5;
    do {
      if (param_3 == (char ***)0x0) {
LAB_0040afcc:
        local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
      }
      else {
        local_14 = 3;
        sVar3 = FUN_00405198(param_3,(short)local_24);
        param_3 = local_30;
        if (sVar3 == -1) goto LAB_0040afcc;
      }
      local_38 = (undefined4 ******)((int)local_38 - 1);
    } while ((undefined4 *******)local_38 != (undefined4 *******)0x0);
LAB_0040b06f:
  }
  else {
    if ((undefined4 *******)local_24 != (undefined4 *******)0x0) {
      local_24 = (undefined4 ******)(uint)param_5;
      do {
        if (param_3 == (char ***)0x0) {
LAB_0040af25:
          local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_14 = 3;
          sVar3 = FUN_00405198(param_3,(short)local_24);
          param_3 = local_30;
          if (sVar3 == -1) goto LAB_0040af25;
        }
        local_38 = (undefined4 ******)((int)local_38 - 1);
      } while ((undefined4 *******)local_38 != (undefined4 *******)0x0);
    }
    local_34 = local_34 & 0xffffff00;
    if ((undefined4 *******)local_2c != (undefined4 *******)0x0) {
      pppppppuVar4 = (undefined4 *******)local_2c;
      local_24 = local_54;
      if (local_44._4_4_ < 8) {
        local_24 = &local_54;
      }
      do {
        pppppppuVar10 = pppppppuVar4;
        if (param_3 == (char ***)0x0) {
LAB_0040b065:
          local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
        }
        else {
          local_38 = pppppppuVar4;
          local_14 = 3;
          sVar3 = FUN_00405198(param_3,*(undefined2 *)local_24);
          pppppppuVar10 = (undefined4 *******)local_38;
          param_3 = local_30;
          if (sVar3 == -1) goto LAB_0040b065;
        }
        pppppppuVar4 = (undefined4 *******)((int)pppppppuVar10 - 1U);
        local_24 = (undefined4 *******)((int)local_24 + 2);
      } while ((undefined4 *******)((int)pppppppuVar10 - 1U) != (undefined4 *******)0x0);
      goto LAB_0040b06f;
    }
LAB_0040afdb:
  }
  local_34 = local_34 | (byte)local_28;
  local_24 = (undefined4 *******)0x0;
LAB_0040b07f:
  local_3c = (undefined4 ****)((int)local_3c - (int)local_2c);
  local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,(char)local_34);
  local_30 = param_3;
  if (local_3c != (undefined4 ****)0x0) {
    pppppppuVar4 = (undefined4 *******)local_54;
    if (local_44._4_4_ < 8) {
      pppppppuVar4 = &local_54;
    }
    pppppppuVar4 = (undefined4 *******)((int)pppppppuVar4 + (int)local_2c * 2);
    do {
      if (param_3 == (char ***)0x0) {
LAB_0040b0d7:
        local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
      }
      else {
        local_2c = pppppppuVar4;
        local_14 = 3;
        sVar3 = FUN_00405198(param_3,*(undefined2 *)pppppppuVar4);
        pppppppuVar4 = (undefined4 *******)local_2c;
        param_3 = local_30;
        if (sVar3 == -1) goto LAB_0040b0d7;
      }
      pppppppuVar4 = (undefined4 *******)((int)pppppppuVar4 + 2);
      local_3c = (undefined4 ****)((int)local_3c + -1);
    } while (local_3c != (undefined4 ****)0x0);
  }
  *(undefined4 *)(param_4 + 0x24) = 0;
  *(undefined4 *)(param_4 + 0x20) = 0;
  if ((undefined4 *******)local_24 != (undefined4 *******)0x0) {
    local_2c = (undefined4 ******)(uint)param_5;
    do {
      if (param_3 == (char ***)0x0) {
LAB_0040b11a:
        local_28 = (undefined4 ****)CONCAT31(local_28._1_3_,1);
      }
      else {
        local_14 = 3;
        sVar3 = FUN_00405198(param_3,(short)local_2c);
        param_3 = local_30;
        if (sVar3 == -1) goto LAB_0040b11a;
      }
      local_24 = (undefined4 ******)((int)local_24 - 1);
    } while ((undefined4 *******)local_24 != (undefined4 *******)0x0);
  }
  *param_1 = (uint)local_28 & 0xff | local_34 & 0xffffff00;
  param_1[1] = (uint)param_3;
  local_14 = 0xffffffff;
  FUN_0040230a((int *)&local_78);
  FUN_0040226e(&local_54);
  ExceptionList = local_1c;
  return param_1;
}

