/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00411ff2 */

undefined4 * __cdecl
FUN_00411ff2(undefined4 *param_1,undefined4 *param_2,ushort param_3,int param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int ******ppppppiVar10;
  int *****pppppiVar11;
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
  int local_6c;
  uint local_68;
  int *****local_64;
  int *piStack_60;
  undefined **ppuStack_5c;
  byte *pbStack_58;
  int *local_54;
  int *piStack_50;
  int ****local_4c;
  int *****local_48;
  int *local_44;
  undefined *local_40;
  uint local_3c;
  byte local_38 [4];
  int *local_34;
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
  local_14 = 0xffffffff;
  local_18 = &LAB_00418240;
  local_1c = ExceptionList;
  cVar1 = (char)param_6;
  uVar7 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar7 == 99) {
    param_6 = param_6 & 0xffffff;
    local_20 = auStack_cc;
    FUN_00411cbe(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    ExceptionList = local_1c;
    return param_1;
  }
  local_6c = param_9;
  cVar4 = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    cVar4 = '\x02';
  }
  local_28 = (int ****)CONCAT31(local_28._1_3_,cVar4);
  uVar5 = 10;
  if (uVar7 < 0x62) {
    if (uVar7 == 0x42) {
LAB_004120bd:
      uVar5 = 2;
    }
    else if (uVar7 == 0x58) goto LAB_004120b6;
  }
  else if (uVar7 == 0x78) {
LAB_004120b6:
    uVar5 = 0x10;
  }
  else if (uVar7 == 0x6f) {
    uVar5 = 8;
  }
  else if (uVar7 == 0x62) goto LAB_004120bd;
  pppppiVar11 = (int *****)local_c9;
  uVar13 = FUN_004126e8((uint *)pppppiVar11,(int)&local_88,param_3,uVar5);
  bVar12 = (char)local_28 != '\x02';
  local_28 = (int ****)(int *****)uVar13;
  local_68 = (int)(int *****)uVar13 - (int)pppppiVar11;
  local_70 = (int ****)pppppiVar11;
  local_24 = local_68 + bVar12;
  local_2c = local_24;
  if (local_68 != 0 && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)pppppiVar11 + 0x9fU) < 0x1a) {
        *(char *)pppppiVar11 = *(char *)pppppiVar11 + -0x20;
      }
      pppppiVar11 = (int *****)((int)pppppiVar11 + 1);
    } while (pppppiVar11 != (int *****)local_28);
  }
  local_40 = (undefined *)0x0;
  local_3c = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x004121ad;
  uVar6 = uVar6 & 0xff;
  local_3c = 2;
  if (uVar6 < 0x62) {
    if (uVar6 == 0x42) {
      local_40 = &DAT_00504775;
    }
    else if (uVar6 == 0x58) {
      local_40 = &DAT_00504372;
    }
    else {
LAB_0041218f:
      local_40 = (undefined *)0x0;
      local_3c = 0;
    }
  }
  else if (uVar6 == 0x62) {
    local_40 = &DAT_00504274;
  }
  else if (uVar6 == 0x6f) {
    local_3c = (uint)(param_3 != 0);
    local_40 = &DAT_00504912;
    if (param_3 == 0) {
      local_40 = (undefined *)0x0;
    }
  }
  else {
    if (uVar6 != 0x78) goto LAB_0041218f;
    local_40 = &DAT_00502a58;
  }
  local_2c = local_24 + local_3c;
  local_24 = local_2c;
code_r0x004121ad:
  local_30 = 0;
  local_88 = (int *****)0x0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = 0xf00000000;
  local_14 = 0;
  if ((char)param_7 == '\x01') {
    if (local_6c == 0) {
      local_34 = FUN_0047f650('\x01');
    }
    else {
      local_34 = *(int **)(local_6c + 4);
      (**(code **)(*local_34 + 4))();
    }
    local_14 = 1;
    piVar2 = FUN_0040a572(local_38);
    (**(code **)(*piVar2 + 0x14))(&local_64);
    local_14 = 2;
    FUN_00404c20((int *)&local_88);
    local_78 = CONCAT44(piStack_50,local_54);
    local_88 = local_64;
    uStack_84 = piStack_60;
    uStack_80 = ppuStack_5c;
    uStack_7c = pbStack_58;
    local_54 = (int *)0x0;
    piStack_50 = (int *)0xf;
    local_64 = (int *****)((uint)local_64 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_0040230a((int *)&local_64);
    if ((local_34 != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*local_34 + 8))(), puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    ppppppiVar8 = &local_88;
    if (0xf < local_78._4_4_) {
      ppppppiVar8 = (int ******)local_88;
    }
    local_30 = 0;
    if (((int)local_78 != 0) && (uVar6 = (uint)*(char *)ppppppiVar8, uVar6 < local_68)) {
      local_30 = 0;
      uVar7 = local_68;
      ppppppiVar9 = ppppppiVar8;
      do {
        uVar7 = uVar7 - uVar6;
        local_30 = local_30 + 1;
        ppppppiVar10 = (int ******)((int)ppppppiVar9 + 1);
        if ((int ******)((int)ppppppiVar9 + 1) == (int ******)((int)local_78 + (int)ppppppiVar8)) {
          ppppppiVar10 = ppppppiVar9;
        }
        uVar6 = (uint)*(char *)ppppppiVar10;
        ppppppiVar9 = ppppppiVar10;
      } while (uVar6 < uVar7);
    }
    local_2c = local_24 + local_30;
    local_24 = local_2c;
  }
  piStack_60 = &param_4;
  local_38[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  pbStack_58 = local_38;
  local_64 = (int *****)local_28;
  ppuStack_5c = &local_40;
  local_54 = &local_2c;
  piStack_50 = &local_30;
  local_4c = (int ****)&local_70;
  local_48 = (int *****)&local_88;
  local_44 = &param_9;
  local_14 = 0;
  if (local_38[0] == 1) {
    FUN_0041244c(&local_64,param_1,param_2);
  }
  else {
    FUN_004125ed(param_1,param_2,local_24,piStack_60,'\x02',&local_64);
  }
  local_14 = 0xffffffff;
  FUN_0040230a((int *)&local_88);
  ExceptionList = local_1c;
  return param_1;
}

