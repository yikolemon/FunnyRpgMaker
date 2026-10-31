/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000e778 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1000e778(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  undefined4 uVar2;
  char ******ppppppcVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  undefined1 auStack_f0 [4];
  char *******local_ec;
  int local_e8;
  char ******local_e4;
  char ******local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  char ******local_cc;
  byte local_c8 [4];
  int *local_c4;
  char *local_c0;
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
  local_24 = auStack_f0;
  local_d4 = param_10;
  local_18 = 0xffffffff;
  local_1c = &LAB_10012ac0;
  local_20 = ExceptionList;
  local_74 = param_4;
  local_78 = param_3;
  local_ec = (char *******)(param_7 & 0xff);
  ExceptionList = &local_20;
  if (local_ec == (char *******)0x63) {
    if ((int)(char)param_3 >> 0x1f == param_4 && (int)(char)param_3 == param_3) {
      param_7 = param_7 & 0xffffff;
      local_28 = &stack0xfffffffc;
      local_24 = auStack_f0;
      FUN_1000c384(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10);
      ExceptionList = local_20;
      return param_1;
    }
    local_28 = &stack0xfffffffc;
    local_24 = auStack_f0;
                    /* WARNING: Subroutine does not return */
    FUN_10006198("integral cannot be stored in char");
  }
  local_d8 = param_3;
  cVar1 = param_7._2_1_;
  if (param_7._2_1_ == '\0') {
    param_7._0_3_ = CONCAT12(2,(undefined2)param_7);
    cVar1 = '\x02';
  }
  local_e4 = (char ******)CONCAT31(local_e4._1_3_,cVar1);
  uVar2 = 10;
  if (local_ec < (char *******)0x62) {
    if (local_ec == (char *******)0x42) {
LAB_1000e881:
      uVar2 = 2;
    }
    else if (local_ec == (char *******)0x58) goto LAB_1000e87a;
  }
  else if (local_ec == (char *******)0x78) {
LAB_1000e87a:
    uVar2 = 0x10;
  }
  else if (local_ec == (char *******)0x6f) {
    uVar2 = 8;
  }
  else if (local_ec == (char *******)0x62) goto LAB_1000e881;
  local_e0 = (char ******)FUN_10007234(local_69,&local_28,param_3,param_4,uVar2);
  local_dc = (int)local_e0 - (int)local_69;
  if ((int)param_4 < 0) {
    local_cc = (char ******)(local_69 + 1);
  }
  else {
    local_cc = (char ******)local_69;
    if ((char)local_e4 != '\x02') {
      local_dc = local_dc + 1;
    }
  }
  ppppppcVar3 = local_cc;
  if (local_cc != local_e0 && (char)local_ec == 'X') {
    do {
      if ((byte)(*(char *)ppppppcVar3 + 0x9fU) < 0x1a) {
        *(char *)ppppppcVar3 = *(char *)ppppppcVar3 + -0x20;
      }
      ppppppcVar3 = (char ******)((int)ppppppcVar3 + 1);
    } while (ppppppcVar3 != local_e0);
  }
  local_c0 = (char *)0x0;
  local_bc = 0;
  if (param_7._3_1_ != '\x01') goto code_r0x1000e994;
  uVar6 = (uint)local_ec & 0xff;
  local_bc = 2;
  if (uVar6 < 0x62) {
    if (uVar6 == 0x42) {
      local_c0 = "0B";
    }
    else if (uVar6 == 0x58) {
      local_c0 = "0X";
    }
    else {
LAB_1000e973:
      local_c0 = (char *)0x0;
      local_bc = 0;
    }
  }
  else if (uVar6 == 0x62) {
    local_c0 = "0b";
  }
  else if (uVar6 == 0x6f) {
    local_d8 = local_d8 | param_4;
    local_bc = (uint)(local_d8 != 0);
    local_c0 = "0";
    if (local_d8 == 0) {
      local_c0 = (char *)0x0;
    }
  }
  else {
    if (uVar6 != 0x78) goto LAB_1000e973;
    local_c0 = "0x";
  }
  local_dc = local_dc + local_bc;
code_r0x1000e994:
  local_d0 = 0;
  local_90 = (char *******)0x0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0xf00000000;
  local_18 = 0;
  local_e4 = local_cc;
  if ((char)param_8 == '\x01') {
    local_e8 = local_dc;
    if (local_d4 == 0) {
      local_c4 = (int *)FUN_1022bce0(1);
    }
    else {
      local_c4 = *(int **)(local_d4 + 4);
      (**(code **)(*local_c4 + 4))();
    }
    local_18 = 1;
    piVar4 = (int *)FUN_1000c417(local_c8);
    (**(code **)(*piVar4 + 0x14))(&local_b8);
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
    if ((local_c4 != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_c4 + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    pppppppcVar8 = (char *******)&local_90;
    if (0xf < local_80._4_4_) {
      pppppppcVar8 = local_90;
    }
    local_d0 = 0;
    if ((char *******)local_80 != (char *******)0x0) {
      uVar6 = (int)local_e0 - (int)local_e4;
      uVar7 = (uint)*(char *)pppppppcVar8;
      local_ec = (char *******)local_80;
      if (uVar7 < uVar6) {
        local_ec = (char *******)((int)(char *******)local_80 + (int)pppppppcVar8);
        local_d0 = 0;
        do {
          uVar6 = uVar6 - uVar7;
          local_d0 = local_d0 + 1;
          pppppppcVar9 = (char *******)((int)pppppppcVar8 + 1);
          if ((char *******)((int)pppppppcVar8 + 1) == local_ec) {
            pppppppcVar9 = pppppppcVar8;
          }
          uVar7 = (uint)*(char *)pppppppcVar9;
          pppppppcVar8 = pppppppcVar9;
        } while (uVar7 < uVar6);
      }
    }
    local_dc = local_e8 + local_d0;
  }
  puStack_b4 = &param_5;
  local_c8[0] = param_7._1_1_ == '\0' & param_8._1_1_;
  local_a8 = local_c8;
  local_b8 = (char *******)local_e0;
  puStack_b0 = &local_78;
  ppcStack_ac = &local_c0;
  piStack_a4 = &local_dc;
  local_a0 = &local_d0;
  local_9c = (char ******)&local_cc;
  local_98 = (char *******)&local_90;
  local_94 = &param_10;
  local_18 = 0;
  local_e8 = local_dc;
  if (local_c8[0] == 1) {
    FUN_1000ebd2(param_1,param_2);
  }
  else {
    FUN_1000ed79(param_1,param_2,local_dc,puStack_b4,2,&local_b8);
  }
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return param_1;
}

