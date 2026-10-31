/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10048829 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_10048829(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char ******ppppppcVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char ******ppppppcVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  char *******pppppppcVar12;
  bool bVar13;
  undefined1 auStack_cc [3];
  char *****local_c9 [16];
  char *******local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char ******local_70;
  uint local_6c;
  char *******local_68;
  undefined4 *puStack_64;
  char **ppcStack_60;
  byte *pbStack_5c;
  int *local_58;
  int *piStack_54;
  char ******local_50;
  char *******local_4c;
  undefined4 *local_48;
  char *local_44;
  uint local_40;
  byte local_3c [4];
  int *local_38;
  int local_34;
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
  local_30 = param_9;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a720;
  local_1c = ExceptionList;
  cVar1 = (char)param_6;
  uVar8 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar8 == 99) {
    if (param_3 < 0x10000) {
      param_6 = param_6 & 0xffffff;
      local_20 = auStack_cc;
      FUN_10047026(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      ExceptionList = local_1c;
      return param_1;
    }
    local_20 = auStack_cc;
                    /* WARNING: Subroutine does not return */
    FUN_10006198("integral cannot be stored in wchar_t");
  }
  cVar2 = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    cVar2 = '\x02';
  }
  local_28 = (char ******)CONCAT31(local_28._1_3_,cVar2);
  uVar3 = 10;
  if (uVar8 < 0x62) {
    if (uVar8 == 0x42) {
LAB_10048901:
      uVar3 = 2;
    }
    else if (uVar8 == 0x58) goto LAB_100488fa;
  }
  else if (uVar8 == 0x78) {
LAB_100488fa:
    uVar3 = 0x10;
  }
  else if (uVar8 == 0x6f) {
    uVar3 = 8;
  }
  else if (uVar8 == 0x62) goto LAB_10048901;
  ppppppcVar9 = local_c9;
  ppppppcVar4 = (char ******)FUN_10006ef8(ppppppcVar9,&local_88,param_3,uVar3);
  bVar13 = (char)local_28 != '\x02';
  local_28 = ppppppcVar4;
  local_6c = (int)ppppppcVar4 - (int)ppppppcVar9;
  local_70 = ppppppcVar9;
  local_24 = local_6c + bVar13;
  local_2c = local_24;
  if (local_6c != 0 && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)ppppppcVar9 + 0x9fU) < 0x1a) {
        *(char *)ppppppcVar9 = *(char *)ppppppcVar9 + -0x20;
      }
      ppppppcVar9 = (char ******)((int)ppppppcVar9 + 1);
    } while (ppppppcVar9 != local_28);
  }
  local_44 = (char *)0x0;
  local_40 = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x100489ed;
  uVar7 = uVar7 & 0xff;
  local_40 = 2;
  if (uVar7 < 0x62) {
    if (uVar7 == 0x42) {
      local_44 = "0B";
    }
    else if (uVar7 == 0x58) {
      local_44 = "0X";
    }
    else {
LAB_100489cf:
      local_44 = (char *)0x0;
      local_40 = 0;
    }
  }
  else if (uVar7 == 0x62) {
    local_44 = "0b";
  }
  else if (uVar7 == 0x6f) {
    local_40 = (uint)(param_3 != 0);
    local_44 = "0";
    if (param_3 == 0) {
      local_44 = (char *)0x0;
    }
  }
  else {
    if (uVar7 != 0x78) goto LAB_100489cf;
    local_44 = "0x";
  }
  local_2c = local_24 + local_40;
  local_24 = local_2c;
code_r0x100489ed:
  local_34 = 0;
  local_88 = (char *******)0x0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = 0xf00000000;
  local_14 = 0;
  if ((char)param_7 == '\x01') {
    if (local_30 == 0) {
      local_38 = (int *)FUN_1022bce0(1);
    }
    else {
      local_38 = *(int **)(local_30 + 4);
      (**(code **)(*local_38 + 4))();
    }
    local_14 = 1;
    piVar5 = (int *)FUN_100470ba(local_3c);
    (**(code **)(*piVar5 + 0x14))(&local_68);
    local_14 = 2;
    FUN_10004e60();
    local_78 = CONCAT44(piStack_54,local_58);
    local_88 = local_68;
    uStack_84 = puStack_64;
    uStack_80 = ppcStack_60;
    uStack_7c = pbStack_5c;
    local_58 = (int *)0x0;
    piStack_54 = (int *)0xf;
    local_68 = (char *******)((uint)local_68 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_10001fee();
    if ((local_38 != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(*local_38 + 8))(), puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    pppppppcVar10 = (char *******)&local_88;
    if (0xf < local_78._4_4_) {
      pppppppcVar10 = local_88;
    }
    local_34 = 0;
    if (((int)local_78 != 0) && (uVar7 = (uint)*(char *)pppppppcVar10, uVar7 < local_6c)) {
      local_34 = 0;
      uVar8 = local_6c;
      pppppppcVar11 = pppppppcVar10;
      do {
        uVar8 = uVar8 - uVar7;
        local_34 = local_34 + 1;
        pppppppcVar12 = (char *******)((int)pppppppcVar11 + 1);
        if ((char *******)((int)pppppppcVar11 + 1) ==
            (char *******)((int)pppppppcVar10 + (int)local_78)) {
          pppppppcVar12 = pppppppcVar11;
        }
        uVar7 = (uint)*(char *)pppppppcVar12;
        pppppppcVar11 = pppppppcVar12;
      } while (uVar7 < uVar8);
    }
    local_2c = local_24 + local_34;
    local_24 = local_2c;
  }
  puStack_64 = &param_4;
  local_3c[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  pbStack_5c = local_3c;
  local_68 = (char *******)local_28;
  ppcStack_60 = &local_44;
  local_58 = &local_2c;
  piStack_54 = &local_34;
  local_50 = (char ******)&local_70;
  local_4c = (char *******)&local_88;
  local_48 = &param_9;
  local_14 = 0;
  if (local_3c[0] == 1) {
    FUN_100478c6(param_1,param_2);
  }
  else {
    FUN_10047a67(param_1,param_2,local_24,puStack_64,2,&local_68);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

