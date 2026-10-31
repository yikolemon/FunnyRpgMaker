/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413527 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * __cdecl
FUN_00413527(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  uint uVar1;
  int ******ppppppiVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  undefined8 uVar8;
  int *******local_f0;
  int local_ec;
  int ******local_e8;
  int ******local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int ******local_d4;
  byte local_d0 [4];
  int *local_cc;
  undefined *local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int *******local_b8;
  int *piStack_b4;
  uint *puStack_b0;
  undefined **ppuStack_ac;
  byte *local_a8;
  int *piStack_a4;
  int *local_a0;
  int ******local_9c;
  int *******local_98;
  int *local_94;
  int *******local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  undefined1 local_69 [65];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_f0;
  local_dc = param_10;
  local_18 = 0xffffffff;
  local_1c = &LAB_00418270;
  local_20 = ExceptionList;
  local_74 = param_4;
  local_78 = param_3;
  local_f0 = (int *******)(param_7 & 0xff);
  ExceptionList = &local_20;
  if (local_f0 == (int *******)0x63) {
    if (param_4 < (param_3 < 0x10000)) {
      param_7 = param_7 & 0xffffff;
      local_28 = &stack0xfffffffc;
      local_24 = (undefined1 *)&local_f0;
      FUN_00411cbe(param_1,param_2,(ushort)param_3,param_5,param_6,param_7,param_8,param_9,param_10)
      ;
      ExceptionList = local_20;
      return param_1;
    }
    local_28 = &stack0xfffffffc;
    local_24 = (undefined1 *)&local_f0;
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x502f32);
  }
  local_e8._0_1_ = param_7._2_1_;
  if (param_7._2_1_ == '\0') {
    param_7._0_3_ = CONCAT12(2,(undefined2)param_7);
    local_e8._0_1_ = '\x02';
  }
  uVar1 = 10;
  local_bc = param_4;
  if (local_f0 < (int *******)0x62) {
    if (local_f0 == (int *******)0x42) {
LAB_00413628:
      uVar1 = 2;
    }
    else if (local_f0 == (int *******)0x58) goto LAB_00413621;
  }
  else if (local_f0 == (int *******)0x78) {
LAB_00413621:
    uVar1 = 0x10;
  }
  else if (local_f0 == (int *******)0x6f) {
    uVar1 = 8;
  }
  else if (local_f0 == (int *******)0x62) goto LAB_00413628;
  local_c0 = param_3;
  uVar8 = FUN_0040cad8((uint *)local_69,(uint *)&local_28,param_3,param_4,uVar1);
  local_e4 = (int ******)uVar8;
  local_e0 = (int)local_e4 - (int)local_69;
  if ((int)param_4 < 0) {
    local_d4 = (int ******)(local_69 + 1);
  }
  else {
    local_d4 = (int ******)local_69;
    if ((char)local_e8 != '\x02') {
      local_e0 = local_e0 + 1;
    }
  }
  ppppppiVar2 = local_d4;
  if (local_d4 != local_e4 && (char)local_f0 == 'X') {
    do {
      if ((byte)(*(char *)ppppppiVar2 + 0x9fU) < 0x1a) {
        *(char *)ppppppiVar2 = *(char *)ppppppiVar2 + -0x20;
      }
      ppppppiVar2 = (int ******)((int)ppppppiVar2 + 1);
    } while (ppppppiVar2 != local_e4);
  }
  local_c8 = (undefined *)0x0;
  local_c4 = 0;
  if (param_7._3_1_ != '\x01') goto code_r0x00413737;
  uVar1 = (uint)local_f0 & 0xff;
  local_c4 = 2;
  if (uVar1 < 0x62) {
    if (uVar1 == 0x42) {
      local_c8 = &DAT_00504775;
    }
    else if (uVar1 == 0x58) {
      local_c8 = &DAT_00504372;
    }
    else {
LAB_00413716:
      local_c8 = (undefined *)0x0;
      local_c4 = 0;
    }
  }
  else if (uVar1 == 0x62) {
    local_c8 = &DAT_00504274;
  }
  else if (uVar1 == 0x6f) {
    local_c0 = local_c0 | param_4;
    local_c4 = (uint)(local_c0 != 0);
    local_c8 = &DAT_00504912;
    if (local_c0 == 0) {
      local_c8 = (undefined *)0x0;
    }
  }
  else {
    if (uVar1 != 0x78) goto LAB_00413716;
    local_c8 = &DAT_00502a58;
  }
  local_e0 = local_e0 + local_c4;
code_r0x00413737:
  local_d8 = 0;
  local_90 = (int *******)0x0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0xf00000000;
  local_18 = 0;
  local_e8 = local_d4;
  if ((char)param_8 == '\x01') {
    local_ec = local_e0;
    if (local_dc == 0) {
      local_cc = FUN_0047f650('\x01');
    }
    else {
      local_cc = *(int **)(local_dc + 4);
      (**(code **)(*local_cc + 4))();
    }
    local_18 = 1;
    piVar3 = FUN_0040a572(local_d0);
    (**(code **)(*piVar3 + 0x14))(&local_b8);
    local_18 = 2;
    FUN_00404c20((int *)&local_90);
    local_80 = CONCAT44(piStack_a4,local_a8);
    local_90 = local_b8;
    uStack_8c = piStack_b4;
    uStack_88 = puStack_b0;
    uStack_84 = ppuStack_ac;
    local_a8 = (byte *)0x0;
    piStack_a4 = (int *)0xf;
    local_b8 = (int *******)((uint)local_b8 & 0xffffff00);
    local_18 = 0xffffffff;
    FUN_0040230a((int *)&local_b8);
    if ((local_cc != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_cc + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    pppppppiVar6 = (int *******)&local_90;
    if (0xf < local_80._4_4_) {
      pppppppiVar6 = local_90;
    }
    local_d8 = 0;
    if ((int *******)local_80 != (int *******)0x0) {
      uVar1 = (int)local_e4 - (int)local_e8;
      uVar5 = (uint)*(char *)pppppppiVar6;
      local_f0 = (int *******)local_80;
      if (uVar5 < uVar1) {
        local_f0 = (int *******)((int)(int *******)local_80 + (int)pppppppiVar6);
        local_d8 = 0;
        do {
          uVar1 = uVar1 - uVar5;
          local_d8 = local_d8 + 1;
          pppppppiVar7 = (int *******)((int)pppppppiVar6 + 1);
          if ((int *******)((int)pppppppiVar6 + 1) == local_f0) {
            pppppppiVar7 = pppppppiVar6;
          }
          uVar5 = (uint)*(char *)pppppppiVar7;
          pppppppiVar6 = pppppppiVar7;
        } while (uVar5 < uVar1);
      }
    }
    local_e0 = local_ec + local_d8;
  }
  piStack_b4 = &param_5;
  local_d0[0] = param_7._1_1_ == '\0' & param_8._1_1_;
  local_a8 = local_d0;
  local_b8 = (int *******)local_e4;
  puStack_b0 = &local_78;
  ppuStack_ac = &local_c8;
  piStack_a4 = &local_e0;
  local_a0 = &local_d8;
  local_9c = (int ******)&local_d4;
  local_98 = (int *******)&local_90;
  local_94 = &param_10;
  local_18 = 0;
  local_ec = local_e0;
  if (local_d0[0] == 1) {
    FUN_00413972(&local_b8,param_1,param_2);
  }
  else {
    FUN_00413b1b(param_1,param_2,local_e0,piStack_b4,'\x02',&local_b8);
  }
  local_18 = 0xffffffff;
  FUN_0040230a((int *)&local_90);
  ExceptionList = local_20;
  return param_1;
}

