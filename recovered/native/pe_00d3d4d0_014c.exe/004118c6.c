/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004118c6 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * __cdecl
FUN_004118c6(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  uint uVar2;
  int ******ppppppiVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [3];
  undefined1 local_cd [65];
  int *******local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  int *******local_74;
  int *piStack_70;
  uint *puStack_6c;
  undefined **ppuStack_68;
  byte *local_64;
  int *piStack_60;
  int *local_5c;
  int ******local_58;
  int *******local_54;
  int *local_50;
  undefined *local_4c;
  uint local_48;
  byte local_44 [4];
  int *local_40;
  int ******local_3c;
  int local_38;
  int local_34;
  int local_30;
  int ******local_2c;
  int ******local_28;
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
  local_18 = &LAB_00418220;
  local_1c = ExceptionList;
  cVar1 = (char)param_6;
  uVar8 = param_6 & 0xff;
  ExceptionList = &local_1c;
  if (uVar8 == 99) {
    if (param_3 < 0x10000) {
      param_6 = param_6 & 0xffffff;
      local_20 = auStack_d0;
      FUN_00411cbe(param_1,param_2,(ushort)param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      ExceptionList = local_1c;
      return param_1;
    }
    local_20 = auStack_d0;
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x502f32);
  }
  local_28._0_1_ = param_6._2_1_;
  if (param_6._2_1_ == '\0') {
    param_6._0_3_ = CONCAT12(2,(undefined2)param_6);
    local_28._0_1_ = '\x02';
  }
  uVar2 = 10;
  if (uVar8 < 0x62) {
    if (uVar8 == 0x42) {
LAB_004119a0:
      uVar2 = 2;
    }
    else if (uVar8 == 0x58) goto LAB_00411999;
  }
  else if (uVar8 == 0x78) {
LAB_00411999:
    uVar2 = 0x10;
  }
  else if (uVar8 == 0x6f) {
    uVar2 = 8;
  }
  else if (uVar8 == 0x62) goto LAB_004119a0;
  uVar12 = FUN_0040c4cc((uint *)local_cd,(uint *)&local_8c,param_3,uVar2);
  local_2c = (int ******)uVar12;
  local_24 = (int)local_2c - (int)local_cd;
  if ((int)uVar7 < 0) {
    local_3c = (int ******)(local_cd + 1);
  }
  else {
    local_3c = (int ******)local_cd;
    if ((char)local_28 != '\x02') {
      local_24 = local_24 + 1;
    }
  }
  ppppppiVar3 = local_3c;
  if (local_3c != local_2c && cVar1 == 'X') {
    do {
      if ((byte)(*(char *)ppppppiVar3 + 0x9fU) < 0x1a) {
        *(char *)ppppppiVar3 = *(char *)ppppppiVar3 + -0x20;
      }
      ppppppiVar3 = (int ******)((int)ppppppiVar3 + 1);
    } while (ppppppiVar3 != local_2c);
  }
  local_4c = (undefined *)0x0;
  local_48 = 0;
  if (param_6._3_1_ != '\x01') goto code_r0x00411aa2;
  uVar6 = uVar6 & 0xff;
  local_48 = 2;
  if (uVar6 < 0x62) {
    if (uVar6 == 0x42) {
      local_4c = &DAT_00504775;
    }
    else if (uVar6 == 0x58) {
      local_4c = &DAT_00504372;
    }
    else {
LAB_00411a84:
      local_4c = (undefined *)0x0;
      local_48 = 0;
    }
  }
  else if (uVar6 == 0x62) {
    local_4c = &DAT_00504274;
  }
  else if (uVar6 == 0x6f) {
    local_48 = (uint)(uVar7 != 0);
    local_4c = &DAT_00504912;
    if (uVar7 == 0) {
      local_4c = (undefined *)0x0;
    }
  }
  else {
    if (uVar6 != 0x78) goto LAB_00411a84;
    local_4c = &DAT_00502a58;
  }
  local_24 = local_24 + local_48;
code_r0x00411aa2:
  local_38 = 0;
  local_8c = (int *******)0x0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = 0xf00000000;
  local_14 = 0;
  local_28 = local_3c;
  if ((char)param_7 == '\x01') {
    local_30 = local_24;
    if (local_34 == 0) {
      local_40 = FUN_0047f650('\x01');
    }
    else {
      local_40 = *(int **)(local_34 + 4);
      (**(code **)(*local_40 + 4))();
    }
    local_14 = 1;
    piVar4 = FUN_0040a572(local_44);
    (**(code **)(*piVar4 + 0x14))(&local_74);
    local_14 = 2;
    FUN_00404c20((int *)&local_8c);
    local_7c = CONCAT44(piStack_60,local_64);
    local_8c = local_74;
    uStack_88 = piStack_70;
    uStack_84 = puStack_6c;
    uStack_80 = ppuStack_68;
    local_64 = (byte *)0x0;
    piStack_60 = (int *)0xf;
    local_74 = (int *******)((uint)local_74 & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_0040230a((int *)&local_74);
    if ((local_40 != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_40 + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    pppppppiVar9 = (int *******)&local_8c;
    if (0xf < local_7c._4_4_) {
      pppppppiVar9 = local_8c;
    }
    local_38 = 0;
    if ((int)local_7c != 0) {
      uVar7 = (int)local_2c - (int)local_28;
      uVar6 = (uint)*(char *)pppppppiVar9;
      if (uVar6 < uVar7) {
        local_38 = 0;
        pppppppiVar10 = pppppppiVar9;
        do {
          uVar7 = uVar7 - uVar6;
          local_38 = local_38 + 1;
          pppppppiVar11 = (int *******)((int)pppppppiVar10 + 1);
          if ((int *******)((int)pppppppiVar10 + 1) ==
              (int *******)((int)local_7c + (int)pppppppiVar9)) {
            pppppppiVar11 = pppppppiVar10;
          }
          uVar6 = (uint)*(char *)pppppppiVar11;
          pppppppiVar10 = pppppppiVar11;
        } while (uVar6 < uVar7);
      }
    }
    local_24 = local_24 + local_38;
  }
  piStack_70 = &param_4;
  local_44[0] = param_6._1_1_ == '\0' & param_7._1_1_;
  local_64 = local_44;
  local_74 = (int *******)local_2c;
  puStack_6c = &param_3;
  ppuStack_68 = &local_4c;
  piStack_60 = &local_30;
  local_5c = &local_38;
  local_58 = (int ******)&local_3c;
  local_54 = (int *******)&local_8c;
  local_50 = &param_9;
  local_14 = 0;
  local_30 = local_24;
  if (local_44[0] == 1) {
    FUN_00411d52(&local_74,param_1,param_2);
  }
  else {
    FUN_00411ef9(param_1,param_2,local_24,piStack_70,'\x02',&local_74);
  }
  local_14 = 0xffffffff;
  FUN_0040230a((int *)&local_8c);
  ExceptionList = local_1c;
  return param_1;
}

