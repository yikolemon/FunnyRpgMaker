/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413100 */

undefined4 * __cdecl
FUN_00413100(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *****pppppiVar8;
  int ******ppppppiVar9;
  int ******ppppppiVar10;
  int ******ppppppiVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined1 auStack_cc [3];
  int ***local_c9 [16];
  int *****local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int ****local_70;
  uint local_6c;
  int *****local_68;
  int *piStack_64;
  undefined **ppuStack_60;
  byte *pbStack_5c;
  int *local_58;
  int *piStack_54;
  int ****local_50;
  int *****local_4c;
  int *local_48;
  undefined *local_44;
  uint local_40;
  byte local_3c [4];
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int ****local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar6 = param_6;
  local_20 = auStack_cc;
  local_30 = param_9;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418260;
  local_1c = ExceptionList;
  cVar1 = (char)param_6;
  uVar7 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar7 == 99) {
    if (param_3 < 0x10000) {
      param_6 = param_6 & 0xffffff;
      local_20 = auStack_cc;
      FUN_00411cbe(param_1,param_2,(ushort)param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      ExceptionList = local_1c;
      return param_1;
    }
    local_20 = auStack_cc;
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x502f32);
  }
  cVar2 = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    cVar2 = '\x02';
  }
  local_28 = (int ****)CONCAT31(local_28._1_3_,cVar2);
  uVar3 = 10;
  if (uVar7 < 0x62) {
    if (uVar7 == 0x42) {
LAB_004131d8:
      uVar3 = 2;
    }
    else if (uVar7 == 0x58) goto LAB_004131d1;
  }
  else if (uVar7 == 0x78) {
LAB_004131d1:
    uVar3 = 0x10;
  }
  else if (uVar7 == 0x6f) {
    uVar3 = 8;
  }
  else if (uVar7 == 0x62) goto LAB_004131d8;
  pppppiVar8 = (int *****)local_c9;
  uVar13 = FUN_0040c79c((uint *)pppppiVar8,(int)&local_88,param_3,uVar3);
  bVar12 = (char)local_28 != '\x02';
  local_28 = (int ****)(int *****)uVar13;
  local_6c = (int)(int *****)uVar13 - (int)pppppiVar8;
  local_70 = (int ****)pppppiVar8;
  local_24 = local_6c + bVar12;
  local_2c = local_24;
  if (local_6c != 0 && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)pppppiVar8 + 0x9fU) < 0x1a) {
        *(char *)pppppiVar8 = *(char *)pppppiVar8 + -0x20;
      }
      pppppiVar8 = (int *****)((int)pppppiVar8 + 1);
    } while (pppppiVar8 != (int *****)local_28);
  }
  local_44 = (undefined *)0x0;
  local_40 = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x004132c4;
  uVar6 = uVar6 & 0xff;
  local_40 = 2;
  if (uVar6 < 0x62) {
    if (uVar6 == 0x42) {
      local_44 = &DAT_00504775;
    }
    else if (uVar6 == 0x58) {
      local_44 = &DAT_00504372;
    }
    else {
LAB_004132a6:
      local_44 = (undefined *)0x0;
      local_40 = 0;
    }
  }
  else if (uVar6 == 0x62) {
    local_44 = &DAT_00504274;
  }
  else if (uVar6 == 0x6f) {
    local_40 = (uint)(param_3 != 0);
    local_44 = &DAT_00504912;
    if (param_3 == 0) {
      local_44 = (undefined *)0x0;
    }
  }
  else {
    if (uVar6 != 0x78) goto LAB_004132a6;
    local_44 = &DAT_00502a58;
  }
  local_2c = local_24 + local_40;
  local_24 = local_2c;
code_r0x004132c4:
  local_34 = 0;
  local_88 = (int *****)0x0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = 0xf00000000;
  local_14 = 0;
  if ((char)param_7 == '\x01') {
    if (local_30 == 0) {
      local_38 = FUN_0047f650('\x01');
    }
    else {
      local_38 = *(int **)(local_30 + 4);
      (**(code **)(*local_38 + 4))();
    }
    local_14 = 1;
    piVar4 = FUN_0040a572(local_3c);
    (**(code **)(*piVar4 + 0x14))(&local_68);
    local_14 = 2;
    FUN_00404c20((int *)&local_88);
    local_78 = CONCAT44(piStack_54,local_58);
    local_88 = local_68;
    uStack_84 = piStack_64;
    uStack_80 = ppuStack_60;
    uStack_7c = pbStack_5c;
    local_58 = (int *)0x0;
    piStack_54 = (int *)0xf;
    local_68 = (int *****)((uint)local_68 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_0040230a((int *)&local_68);
    if ((local_38 != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_38 + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    ppppppiVar9 = &local_88;
    if (0xf < local_78._4_4_) {
      ppppppiVar9 = (int ******)local_88;
    }
    local_34 = 0;
    if (((int)local_78 != 0) && (uVar6 = (uint)*(char *)ppppppiVar9, uVar6 < local_6c)) {
      local_34 = 0;
      uVar7 = local_6c;
      ppppppiVar10 = ppppppiVar9;
      do {
        uVar7 = uVar7 - uVar6;
        local_34 = local_34 + 1;
        ppppppiVar11 = (int ******)((int)ppppppiVar10 + 1);
        if ((int ******)((int)ppppppiVar10 + 1) == (int ******)((int)local_78 + (int)ppppppiVar9)) {
          ppppppiVar11 = ppppppiVar10;
        }
        uVar6 = (uint)*(char *)ppppppiVar11;
        ppppppiVar10 = ppppppiVar11;
      } while (uVar6 < uVar7);
    }
    local_2c = local_24 + local_34;
    local_24 = local_2c;
  }
  piStack_64 = &param_4;
  local_3c[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  pbStack_5c = local_3c;
  local_68 = (int *****)local_28;
  ppuStack_60 = &local_44;
  local_58 = &local_2c;
  piStack_54 = &local_34;
  local_50 = (int ****)&local_70;
  local_4c = (int *****)&local_88;
  local_48 = &param_9;
  local_14 = 0;
  if (local_3c[0] == 1) {
    FUN_0041244c(&local_68,param_1,param_2);
  }
  else {
    FUN_004125ed(param_1,param_2,local_24,piStack_64,'\x02',&local_68);
  }
  local_14 = 0xffffffff;
  FUN_0040230a((int *)&local_88);
  ExceptionList = local_1c;
  return param_1;
}

