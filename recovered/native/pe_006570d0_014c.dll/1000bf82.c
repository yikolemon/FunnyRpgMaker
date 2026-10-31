/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000bf82 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1000bf82(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char ******ppppppcVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  undefined1 auStack_d4 [3];
  undefined1 local_d1 [65];
  char *******local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  char *******local_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  char **ppcStack_6c;
  byte *local_68;
  int *piStack_64;
  int *local_60;
  char ******local_5c;
  char *******local_58;
  undefined4 *local_54;
  char *local_50;
  uint local_4c;
  byte local_48 [4];
  int *local_44;
  char ******local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char ******local_2c;
  char ******local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar7 = param_6;
  iVar1 = param_3;
  local_20 = auStack_d4;
  local_38 = param_9;
  local_14 = 0xffffffff;
  local_18 = &LAB_100129e0;
  local_1c = ExceptionList;
  cVar2 = (char)param_6;
  uVar8 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar8 == 99) {
    if ((char)param_3 == param_3) {
      param_6 = param_6 & 0xffffff;
      local_20 = auStack_d4;
      FUN_1000c384(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      ExceptionList = local_1c;
      return param_1;
    }
    local_20 = auStack_d4;
                    /* WARNING: Subroutine does not return */
    FUN_10006198("integral cannot be stored in char");
  }
  local_34 = param_3;
  local_28._0_1_ = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    local_28._0_1_ = '\x02';
  }
  uVar3 = 10;
  if (uVar8 < 0x62) {
    if (uVar8 == 0x42) {
LAB_1000c05e:
      uVar3 = 2;
    }
    else if (uVar8 == 0x58) goto LAB_1000c057;
  }
  else if (uVar8 == 0x78) {
LAB_1000c057:
    uVar3 = 0x10;
  }
  else if (uVar8 == 0x6f) {
    uVar3 = 8;
  }
  else if (uVar8 == 0x62) goto LAB_1000c05e;
  local_2c = (char ******)FUN_10006c28(local_d1,&local_90,param_3,uVar3);
  local_24 = (int)local_2c - (int)local_d1;
  if (iVar1 < 0) {
    local_40 = (char ******)(local_d1 + 1);
  }
  else {
    local_40 = (char ******)local_d1;
    if ((char)local_28 != '\x02') {
      local_24 = local_24 + 1;
    }
  }
  ppppppcVar4 = local_40;
  if (local_40 != local_2c && cVar2 == 'X') {
    do {
      if ((byte)(*(char *)ppppppcVar4 + 0x9fU) < 0x1a) {
        *(char *)ppppppcVar4 = *(char *)ppppppcVar4 + -0x20;
      }
      ppppppcVar4 = (char ******)((int)ppppppcVar4 + 1);
    } while (ppppppcVar4 != local_2c);
  }
  local_50 = (char *)0x0;
  local_4c = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x1000c168;
  uVar7 = uVar7 & 0xff;
  local_4c = 2;
  if (uVar7 < 0x62) {
    if (uVar7 == 0x42) {
      local_50 = "0B";
    }
    else if (uVar7 == 0x58) {
      local_50 = "0X";
    }
    else {
LAB_1000c14a:
      local_50 = (char *)0x0;
      local_4c = 0;
    }
  }
  else if (uVar7 == 0x62) {
    local_50 = "0b";
  }
  else if (uVar7 == 0x6f) {
    local_4c = (uint)(local_34 != 0);
    local_50 = "0";
    if (local_34 == 0) {
      local_50 = (char *)0x0;
    }
  }
  else {
    if (uVar7 != 0x78) goto LAB_1000c14a;
    local_50 = "0x";
  }
  local_24 = local_24 + local_4c;
code_r0x1000c168:
  local_3c = 0;
  local_90 = (char *******)0x0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0xf00000000;
  local_14 = 0;
  local_28 = local_40;
  if ((char)param_7 == '\x01') {
    local_30 = local_24;
    if (local_38 == 0) {
      local_44 = (int *)FUN_1022bce0(1);
    }
    else {
      local_44 = *(int **)(local_38 + 4);
      (**(code **)(*local_44 + 4))();
    }
    local_14 = 1;
    piVar5 = (int *)FUN_1000c417(local_48);
    (**(code **)(*piVar5 + 0x14))(&local_78);
    local_14 = 2;
    FUN_10004e60();
    local_80 = CONCAT44(piStack_64,local_68);
    local_90 = local_78;
    uStack_8c = puStack_74;
    uStack_88 = puStack_70;
    uStack_84 = ppcStack_6c;
    local_68 = (byte *)0x0;
    piStack_64 = (int *)0xf;
    local_78 = (char *******)((uint)local_78 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_10001fee();
    if ((local_44 != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(*local_44 + 8))(), puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    pppppppcVar9 = (char *******)&local_90;
    if (0xf < local_80._4_4_) {
      pppppppcVar9 = local_90;
    }
    local_3c = 0;
    if ((int)local_80 != 0) {
      uVar7 = (int)local_2c - (int)local_28;
      uVar8 = (uint)*(char *)pppppppcVar9;
      if (uVar8 < uVar7) {
        local_3c = 0;
        pppppppcVar10 = pppppppcVar9;
        do {
          uVar7 = uVar7 - uVar8;
          local_3c = local_3c + 1;
          pppppppcVar11 = (char *******)((int)pppppppcVar10 + 1);
          if ((char *******)((int)pppppppcVar10 + 1) ==
              (char *******)((int)pppppppcVar9 + (int)local_80)) {
            pppppppcVar11 = pppppppcVar10;
          }
          uVar8 = (uint)*(char *)pppppppcVar11;
          pppppppcVar10 = pppppppcVar11;
        } while (uVar8 < uVar7);
      }
    }
    local_24 = local_24 + local_3c;
  }
  puStack_74 = &param_4;
  local_48[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  local_68 = local_48;
  local_78 = (char *******)local_2c;
  puStack_70 = &param_3;
  ppcStack_6c = &local_50;
  piStack_64 = &local_30;
  local_60 = &local_3c;
  local_5c = (char ******)&local_40;
  local_58 = (char *******)&local_90;
  local_54 = &param_9;
  local_14 = 0;
  local_30 = local_24;
  if (local_48[0] == 1) {
    FUN_1000c52a(param_1,param_2);
  }
  else {
    FUN_1000c6cf(param_1,param_2,local_24,puStack_74,2,&local_78);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

