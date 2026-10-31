/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10046c2e */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_10046c2e(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  undefined4 uVar2;
  char ******ppppppcVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  undefined1 auStack_d0 [3];
  undefined1 local_cd [65];
  char *******local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  char *******local_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  char **ppcStack_68;
  byte *local_64;
  int *piStack_60;
  int *local_5c;
  char ******local_58;
  char *******local_54;
  undefined4 *local_50;
  char *local_4c;
  uint local_48;
  byte local_44 [4];
  int *local_40;
  char ******local_3c;
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
  
  uVar6 = param_6;
  uVar7 = param_3;
  local_20 = auStack_d0;
  local_34 = param_9;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a6a0;
  local_1c = ExceptionList;
  cVar1 = (char)param_6;
  uVar8 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar8 == 99) {
    if (param_3 < 0x10000) {
      param_6 = param_6 & 0xffffff;
      local_20 = auStack_d0;
      FUN_10047026(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      ExceptionList = local_1c;
      return param_1;
    }
    local_20 = auStack_d0;
                    /* WARNING: Subroutine does not return */
    FUN_10006198("integral cannot be stored in wchar_t");
  }
  local_28._0_1_ = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    local_28._0_1_ = '\x02';
  }
  uVar2 = 10;
  if (uVar8 < 0x62) {
    if (uVar8 == 0x42) {
LAB_10046d08:
      uVar2 = 2;
    }
    else if (uVar8 == 0x58) goto LAB_10046d01;
  }
  else if (uVar8 == 0x78) {
LAB_10046d01:
    uVar2 = 0x10;
  }
  else if (uVar8 == 0x6f) {
    uVar2 = 8;
  }
  else if (uVar8 == 0x62) goto LAB_10046d08;
  local_2c = (char ******)FUN_10006c28(local_cd,&local_8c,param_3,uVar2);
  local_24 = (int)local_2c - (int)local_cd;
  if ((int)uVar7 < 0) {
    local_3c = (char ******)(local_cd + 1);
  }
  else {
    local_3c = (char ******)local_cd;
    if ((char)local_28 != '\x02') {
      local_24 = local_24 + 1;
    }
  }
  ppppppcVar3 = local_3c;
  if (local_3c != local_2c && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)ppppppcVar3 + 0x9fU) < 0x1a) {
        *(char *)ppppppcVar3 = *(char *)ppppppcVar3 + -0x20;
      }
      ppppppcVar3 = (char ******)((int)ppppppcVar3 + 1);
    } while (ppppppcVar3 != local_2c);
  }
  local_4c = (char *)0x0;
  local_48 = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x10046e0a;
  uVar6 = uVar6 & 0xff;
  local_48 = 2;
  if (uVar6 < 0x62) {
    if (uVar6 == 0x42) {
      local_4c = "0B";
    }
    else if (uVar6 == 0x58) {
      local_4c = "0X";
    }
    else {
LAB_10046dec:
      local_4c = (char *)0x0;
      local_48 = 0;
    }
  }
  else if (uVar6 == 0x62) {
    local_4c = "0b";
  }
  else if (uVar6 == 0x6f) {
    local_48 = (uint)(uVar7 != 0);
    local_4c = "0";
    if (uVar7 == 0) {
      local_4c = (char *)0x0;
    }
  }
  else {
    if (uVar6 != 0x78) goto LAB_10046dec;
    local_4c = "0x";
  }
  local_24 = local_24 + local_48;
code_r0x10046e0a:
  local_38 = 0;
  local_8c = (char *******)0x0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = 0xf00000000;
  local_14 = 0;
  local_28 = local_3c;
  if ((char)param_7 == '\x01') {
    local_30 = local_24;
    if (local_34 == 0) {
      local_40 = (int *)FUN_1022bce0(1);
    }
    else {
      local_40 = *(int **)(local_34 + 4);
      (**(code **)(*local_40 + 4))();
    }
    local_14 = 1;
    piVar4 = (int *)FUN_100470ba(local_44);
    (**(code **)(*piVar4 + 0x14))(&local_74);
    local_14 = 2;
    FUN_10004e60();
    local_7c = CONCAT44(piStack_60,local_64);
    local_8c = local_74;
    uStack_88 = puStack_70;
    uStack_84 = puStack_6c;
    uStack_80 = ppcStack_68;
    local_64 = (byte *)0x0;
    piStack_60 = (int *)0xf;
    local_74 = (char *******)((uint)local_74 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_10001fee();
    if ((local_40 != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_40 + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    pppppppcVar9 = (char *******)&local_8c;
    if (0xf < local_7c._4_4_) {
      pppppppcVar9 = local_8c;
    }
    local_38 = 0;
    if ((int)local_7c != 0) {
      uVar7 = (int)local_2c - (int)local_28;
      uVar6 = (uint)*(char *)pppppppcVar9;
      if (uVar6 < uVar7) {
        local_38 = 0;
        pppppppcVar10 = pppppppcVar9;
        do {
          uVar7 = uVar7 - uVar6;
          local_38 = local_38 + 1;
          pppppppcVar11 = (char *******)((int)pppppppcVar10 + 1);
          if ((char *******)((int)pppppppcVar10 + 1) ==
              (char *******)((int)pppppppcVar9 + (int)local_7c)) {
            pppppppcVar11 = pppppppcVar10;
          }
          uVar6 = (uint)*(char *)pppppppcVar11;
          pppppppcVar10 = pppppppcVar11;
        } while (uVar6 < uVar7);
      }
    }
    local_24 = local_24 + local_38;
  }
  puStack_70 = &param_4;
  local_44[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  local_64 = local_44;
  local_74 = (char *******)local_2c;
  puStack_6c = &param_3;
  ppcStack_68 = &local_4c;
  piStack_60 = &local_30;
  local_5c = &local_38;
  local_58 = (char ******)&local_3c;
  local_54 = (char *******)&local_8c;
  local_50 = &param_9;
  local_14 = 0;
  local_30 = local_24;
  if (local_44[0] == 1) {
    FUN_100471cc(param_1,param_2);
  }
  else {
    FUN_10047373(param_1,param_2,local_24,puStack_70,2,&local_74);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

