/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100499e9 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_100499e9(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  char ******ppppppcVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  char ******ppppppcVar12;
  bool bVar13;
  undefined1 auStack_cc [3];
  char *****local_c9 [16];
  char *******local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char ******local_70;
  int local_6c;
  uint local_68;
  char *******local_64;
  undefined4 *puStack_60;
  char **ppcStack_5c;
  byte *pbStack_58;
  int *local_54;
  int *piStack_50;
  char ******local_4c;
  char *******local_48;
  undefined4 *local_44;
  char *local_40;
  uint local_3c;
  byte local_38 [4];
  int *local_34;
  int local_30;
  int local_2c;
  char ******local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar7 = param_6;
  local_20 = auStack_cc;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a770;
  local_1c = ExceptionList;
  cVar1 = (char)param_6;
  uVar8 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar8 == 99) {
    param_6 = param_6 & 0xffffff;
    local_20 = auStack_cc;
    FUN_10047026(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    ExceptionList = local_1c;
    return param_1;
  }
  local_6c = param_9;
  cVar5 = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    cVar5 = '\x02';
  }
  local_28 = (char ******)CONCAT31(local_28._1_3_,cVar5);
  uVar6 = 10;
  if (uVar8 < 0x62) {
    if (uVar8 == 0x42) {
LAB_10049ab4:
      uVar6 = 2;
    }
    else if (uVar8 == 0x58) goto LAB_10049aad;
  }
  else if (uVar8 == 0x78) {
LAB_10049aad:
    uVar6 = 0x10;
  }
  else if (uVar8 == 0x6f) {
    uVar6 = 8;
  }
  else if (uVar8 == 0x62) goto LAB_10049ab4;
  ppppppcVar12 = local_c9;
  ppppppcVar2 = (char ******)FUN_1000ced4(ppppppcVar12,&local_88,param_3,uVar6);
  bVar13 = (char)local_28 != '\x02';
  local_28 = ppppppcVar2;
  local_68 = (int)ppppppcVar2 - (int)ppppppcVar12;
  local_70 = ppppppcVar12;
  local_24 = local_68 + bVar13;
  local_2c = local_24;
  if (local_68 != 0 && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)ppppppcVar12 + 0x9fU) < 0x1a) {
        *(char *)ppppppcVar12 = *(char *)ppppppcVar12 + -0x20;
      }
      ppppppcVar12 = (char ******)((int)ppppppcVar12 + 1);
    } while (ppppppcVar12 != local_28);
  }
  local_40 = (char *)0x0;
  local_3c = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x10049ba3;
  uVar7 = uVar7 & 0xff;
  local_3c = 2;
  if (uVar7 < 0x62) {
    if (uVar7 == 0x42) {
      local_40 = "0B";
    }
    else if (uVar7 == 0x58) {
      local_40 = "0X";
    }
    else {
LAB_10049b85:
      local_40 = (char *)0x0;
      local_3c = 0;
    }
  }
  else if (uVar7 == 0x62) {
    local_40 = "0b";
  }
  else if (uVar7 == 0x6f) {
    local_3c = (uint)(param_3 != '\0');
    local_40 = "0";
    if (param_3 == '\0') {
      local_40 = (char *)0x0;
    }
  }
  else {
    if (uVar7 != 0x78) goto LAB_10049b85;
    local_40 = "0x";
  }
  local_2c = local_24 + local_3c;
  local_24 = local_2c;
code_r0x10049ba3:
  local_30 = 0;
  local_88 = (char *******)0x0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = 0xf00000000;
  local_14 = 0;
  if ((char)param_7 == '\x01') {
    if (local_6c == 0) {
      local_34 = (int *)FUN_1022bce0(1);
    }
    else {
      local_34 = *(int **)(local_6c + 4);
      (**(code **)(*local_34 + 4))();
    }
    local_14 = 1;
    piVar3 = (int *)FUN_100470ba(local_38);
    (**(code **)(*piVar3 + 0x14))(&local_64);
    local_14 = 2;
    FUN_10004e60();
    local_78 = CONCAT44(piStack_50,local_54);
    local_88 = local_64;
    uStack_84 = puStack_60;
    uStack_80 = ppcStack_5c;
    uStack_7c = pbStack_58;
    local_54 = (int *)0x0;
    piStack_50 = (int *)0xf;
    local_64 = (char *******)((uint)local_64 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_10001fee();
    if ((local_34 != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_34 + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    pppppppcVar9 = (char *******)&local_88;
    if (0xf < local_78._4_4_) {
      pppppppcVar9 = local_88;
    }
    local_30 = 0;
    if (((int)local_78 != 0) && (uVar7 = (uint)*(char *)pppppppcVar9, uVar7 < local_68)) {
      local_30 = 0;
      uVar8 = local_68;
      pppppppcVar10 = pppppppcVar9;
      do {
        uVar8 = uVar8 - uVar7;
        local_30 = local_30 + 1;
        pppppppcVar11 = (char *******)((int)pppppppcVar10 + 1);
        if ((char *******)((int)pppppppcVar10 + 1) ==
            (char *******)((int)pppppppcVar9 + (int)local_78)) {
          pppppppcVar11 = pppppppcVar10;
        }
        uVar7 = (uint)*(char *)pppppppcVar11;
        pppppppcVar10 = pppppppcVar11;
      } while (uVar7 < uVar8);
    }
    local_2c = local_24 + local_30;
    local_24 = local_2c;
  }
  puStack_60 = &param_4;
  local_38[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  pbStack_58 = local_38;
  local_64 = (char *******)local_28;
  ppcStack_5c = &local_40;
  local_54 = &local_2c;
  piStack_50 = &local_30;
  local_4c = (char ******)&local_70;
  local_48 = (char *******)&local_88;
  local_44 = &param_9;
  local_14 = 0;
  if (local_38[0] == 1) {
    FUN_100478c6(param_1,param_2);
  }
  else {
    FUN_10047a67(param_1,param_2,local_24,puStack_60,2,&local_64);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

