/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413c64 */

undefined4 * __cdecl
FUN_00413c64(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int ******ppppppiVar10;
  int *****pppppiVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined1 auStack_d0 [3];
  int ***local_cd [16];
  int *****local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  int ****local_74;
  uint local_70;
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
  
  uVar6 = param_7;
  local_20 = auStack_d0;
  local_30 = param_10;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418290;
  local_1c = ExceptionList;
  cVar1 = (char)param_7;
  uVar7 = param_7 & 0xff;
  ExceptionList = &local_1c;
  if (uVar7 == 99) {
    if (param_4 < (param_3 < 0x10000)) {
      param_7 = param_7 & 0xffffff;
      local_20 = auStack_d0;
      FUN_00411cbe(param_1,param_2,(ushort)param_3,param_5,param_6,param_7,param_8,param_9,param_10)
      ;
      ExceptionList = local_1c;
      return param_1;
    }
    local_20 = auStack_d0;
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x502f32);
  }
  cVar2 = param_7._2_1_;
  if (param_7._2_1_ == '\0') {
    param_7._0_3_ = CONCAT12(2,(undefined2)param_7);
    cVar2 = '\x02';
  }
  local_28 = (int ****)CONCAT31(local_28._1_3_,cVar2);
  uVar3 = 10;
  if (uVar7 < 0x62) {
    if (uVar7 == 0x42) {
LAB_00413d42:
      uVar3 = 2;
    }
    else if (uVar7 == 0x58) goto LAB_00413d3b;
  }
  else if (uVar7 == 0x78) {
LAB_00413d3b:
    uVar3 = 0x10;
  }
  else if (uVar7 == 0x6f) {
    uVar3 = 8;
  }
  else if (uVar7 == 0x62) goto LAB_00413d42;
  pppppiVar11 = (int *****)local_cd;
  local_6c = param_3;
  uVar13 = FUN_0040cef8((uint *)pppppiVar11,(int)&local_8c,param_3,param_4,uVar3);
  bVar12 = (char)local_28 != '\x02';
  local_28 = (int ****)(int *****)uVar13;
  local_70 = (int)(int *****)uVar13 - (int)pppppiVar11;
  local_74 = (int ****)pppppiVar11;
  local_24 = local_70 + bVar12;
  local_2c = local_24;
  if (local_70 != 0 && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)pppppiVar11 + 0x9fU) < 0x1a) {
        *(char *)pppppiVar11 = *(char *)pppppiVar11 + -0x20;
      }
      pppppiVar11 = (int *****)((int)pppppiVar11 + 1);
    } while (pppppiVar11 != (int *****)local_28);
  }
  local_44 = (undefined *)0x0;
  local_40 = 0;
  if (param_7._3_1_ != '\x01') goto code_r0x00413e35;
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
LAB_00413e17:
      local_44 = (undefined *)0x0;
      local_40 = 0;
    }
  }
  else if (uVar6 == 0x62) {
    local_44 = &DAT_00504274;
  }
  else if (uVar6 == 0x6f) {
    local_40 = (uint)(local_6c != 0 || param_4 != 0);
    local_44 = &DAT_00504912;
    if (local_6c == 0 && param_4 == 0) {
      local_44 = (undefined *)0x0;
    }
  }
  else {
    if (uVar6 != 0x78) goto LAB_00413e17;
    local_44 = &DAT_00502a58;
  }
  local_2c = local_24 + local_40;
  local_24 = local_2c;
code_r0x00413e35:
  local_34 = 0;
  local_8c = (int *****)0x0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = 0xf00000000;
  local_14 = 0;
  if ((char)param_8 == '\x01') {
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
    FUN_00404c20((int *)&local_8c);
    local_7c = CONCAT44(piStack_54,local_58);
    local_8c = local_68;
    uStack_88 = piStack_64;
    uStack_84 = ppuStack_60;
    uStack_80 = pbStack_5c;
    local_58 = (int *)0x0;
    piStack_54 = (int *)0xf;
    local_68 = (int *****)((uint)local_68 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_0040230a((int *)&local_68);
    if ((local_38 != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_38 + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    ppppppiVar8 = &local_8c;
    if (0xf < local_7c._4_4_) {
      ppppppiVar8 = (int ******)local_8c;
    }
    local_34 = 0;
    if (((int)local_7c != 0) && (uVar6 = (uint)*(char *)ppppppiVar8, uVar6 < local_70)) {
      local_34 = 0;
      uVar7 = local_70;
      ppppppiVar9 = ppppppiVar8;
      do {
        uVar7 = uVar7 - uVar6;
        local_34 = local_34 + 1;
        ppppppiVar10 = (int ******)((int)ppppppiVar9 + 1);
        if ((int ******)((int)ppppppiVar9 + 1) == (int ******)((int)local_7c + (int)ppppppiVar8)) {
          ppppppiVar10 = ppppppiVar9;
        }
        uVar6 = (uint)*(char *)ppppppiVar10;
        ppppppiVar9 = ppppppiVar10;
      } while (uVar6 < uVar7);
    }
    local_2c = local_24 + local_34;
    local_24 = local_2c;
  }
  piStack_64 = &param_5;
  local_3c[0] = param_7._1_1_ == '\0' & param_8._1_1_;
  pbStack_5c = local_3c;
  local_68 = (int *****)local_28;
  ppuStack_60 = &local_44;
  local_58 = &local_2c;
  piStack_54 = &local_34;
  local_50 = (int ****)&local_74;
  local_4c = (int *****)&local_8c;
  local_48 = &param_10;
  local_14 = 0;
  if (local_3c[0] == 1) {
    FUN_0041244c(&local_68,param_1,param_2);
  }
  else {
    FUN_004125ed(param_1,param_2,local_24,piStack_64,'\x02',&local_68);
  }
  local_14 = 0xffffffff;
  FUN_0040230a((int *)&local_8c);
  ExceptionList = local_1c;
  return param_1;
}

