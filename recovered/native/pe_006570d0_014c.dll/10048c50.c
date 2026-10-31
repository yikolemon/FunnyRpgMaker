/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10048c50 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_10048c50(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  char ******ppppppcVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  char *******local_f0;
  int local_ec;
  char ******local_e8;
  char ******local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  char ******local_d4;
  byte local_d0 [4];
  int *local_cc;
  char *local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  char *******local_b8;
  undefined4 *puStack_b4;
  uint *puStack_b0;
  char **ppcStack_ac;
  byte *local_a8;
  int *piStack_a4;
  int *local_a0;
  char ******local_9c;
  char *******local_98;
  undefined4 *local_94;
  char *******local_90;
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
  local_1c = &LAB_1005a730;
  local_20 = ExceptionList;
  local_74 = param_4;
  local_78 = param_3;
  local_f0 = (char *******)(param_7 & 0xff);
  ExceptionList = &local_20;
  if (local_f0 == (char *******)0x63) {
    if (param_4 < (param_3 < 0x10000)) {
      param_7 = param_7 & 0xffffff;
      local_28 = &stack0xfffffffc;
      local_24 = (undefined1 *)&local_f0;
      FUN_10047026(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10);
      ExceptionList = local_20;
      return param_1;
    }
    local_28 = &stack0xfffffffc;
    local_24 = (undefined1 *)&local_f0;
                    /* WARNING: Subroutine does not return */
    FUN_10006198("integral cannot be stored in wchar_t");
  }
  local_e8._0_1_ = param_7._2_1_;
  if (param_7._2_1_ == '\0') {
    param_7._0_3_ = CONCAT12(2,(undefined2)param_7);
    local_e8._0_1_ = '\x02';
  }
  uVar1 = 10;
  local_bc = param_4;
  if (local_f0 < (char *******)0x62) {
    if (local_f0 == (char *******)0x42) {
LAB_10048d51:
      uVar1 = 2;
    }
    else if (local_f0 == (char *******)0x58) goto LAB_10048d4a;
  }
  else if (local_f0 == (char *******)0x78) {
LAB_10048d4a:
    uVar1 = 0x10;
  }
  else if (local_f0 == (char *******)0x6f) {
    uVar1 = 8;
  }
  else if (local_f0 == (char *******)0x62) goto LAB_10048d51;
  local_c0 = param_3;
  local_e4 = (char ******)FUN_10007234(local_69,&local_28,param_3,param_4,uVar1);
  local_e0 = (int)local_e4 - (int)local_69;
  if ((int)param_4 < 0) {
    local_d4 = (char ******)(local_69 + 1);
  }
  else {
    local_d4 = (char ******)local_69;
    if ((char)local_e8 != '\x02') {
      local_e0 = local_e0 + 1;
    }
  }
  ppppppcVar2 = local_d4;
  if (local_d4 != local_e4 && (char)local_f0 == 'X') {
    do {
      if ((byte)(*(char *)ppppppcVar2 + 0x9fU) < 0x1a) {
        *(char *)ppppppcVar2 = *(char *)ppppppcVar2 + -0x20;
      }
      ppppppcVar2 = (char ******)((int)ppppppcVar2 + 1);
    } while (ppppppcVar2 != local_e4);
  }
  local_c8 = (char *)0x0;
  local_c4 = 0;
  if (param_7._3_1_ != '\x01') goto code_r0x10048e60;
  uVar5 = (uint)local_f0 & 0xff;
  local_c4 = 2;
  if (uVar5 < 0x62) {
    if (uVar5 == 0x42) {
      local_c8 = "0B";
    }
    else if (uVar5 == 0x58) {
      local_c8 = "0X";
    }
    else {
LAB_10048e3f:
      local_c8 = (char *)0x0;
      local_c4 = 0;
    }
  }
  else if (uVar5 == 0x62) {
    local_c8 = "0b";
  }
  else if (uVar5 == 0x6f) {
    local_c0 = local_c0 | param_4;
    local_c4 = (uint)(local_c0 != 0);
    local_c8 = "0";
    if (local_c0 == 0) {
      local_c8 = (char *)0x0;
    }
  }
  else {
    if (uVar5 != 0x78) goto LAB_10048e3f;
    local_c8 = "0x";
  }
  local_e0 = local_e0 + local_c4;
code_r0x10048e60:
  local_d8 = 0;
  local_90 = (char *******)0x0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0xf00000000;
  local_18 = 0;
  local_e8 = local_d4;
  if ((char)param_8 == '\x01') {
    local_ec = local_e0;
    if (local_dc == 0) {
      local_cc = (int *)FUN_1022bce0(1);
    }
    else {
      local_cc = *(int **)(local_dc + 4);
      (**(code **)(*local_cc + 4))();
    }
    local_18 = 1;
    piVar3 = (int *)FUN_100470ba(local_d0);
    (**(code **)(*piVar3 + 0x14))(&local_b8);
    local_18 = 2;
    FUN_10004e60();
    local_80 = CONCAT44(piStack_a4,local_a8);
    local_90 = local_b8;
    uStack_8c = puStack_b4;
    uStack_88 = puStack_b0;
    uStack_84 = ppcStack_ac;
    local_a8 = (byte *)0x0;
    piStack_a4 = (int *)0xf;
    local_b8 = (char *******)((uint)local_b8 & 0xffffff00);
    local_18 = 0xffffffff;
    FUN_10001fee();
    if ((local_cc != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_cc + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    pppppppcVar7 = (char *******)&local_90;
    if (0xf < local_80._4_4_) {
      pppppppcVar7 = local_90;
    }
    local_d8 = 0;
    if ((char *******)local_80 != (char *******)0x0) {
      uVar5 = (int)local_e4 - (int)local_e8;
      uVar6 = (uint)*(char *)pppppppcVar7;
      local_f0 = (char *******)local_80;
      if (uVar6 < uVar5) {
        local_f0 = (char *******)((int)(char *******)local_80 + (int)pppppppcVar7);
        local_d8 = 0;
        do {
          uVar5 = uVar5 - uVar6;
          local_d8 = local_d8 + 1;
          pppppppcVar8 = (char *******)((int)pppppppcVar7 + 1);
          if ((char *******)((int)pppppppcVar7 + 1) == local_f0) {
            pppppppcVar8 = pppppppcVar7;
          }
          uVar6 = (uint)*(char *)pppppppcVar8;
          pppppppcVar7 = pppppppcVar8;
        } while (uVar6 < uVar5);
      }
    }
    local_e0 = local_ec + local_d8;
  }
  puStack_b4 = &param_5;
  local_d0[0] = param_7._1_1_ == '\0' & param_8._1_1_;
  local_a8 = local_d0;
  local_b8 = (char *******)local_e4;
  puStack_b0 = &local_78;
  ppcStack_ac = &local_c8;
  piStack_a4 = &local_e0;
  local_a0 = &local_d8;
  local_9c = (char ******)&local_d4;
  local_98 = (char *******)&local_90;
  local_94 = &param_10;
  local_18 = 0;
  local_ec = local_e0;
  if (local_d0[0] == 1) {
    FUN_1004909a(param_1,param_2);
  }
  else {
    FUN_10049243(param_1,param_2,local_e0,puStack_b4,2,&local_b8);
  }
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return param_1;
}

