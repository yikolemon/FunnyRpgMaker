/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400304b8 */

undefined8 FUN_1400304b8(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(ulonglong *)(param_2 + 0x10) < 3) {
    if (*(ulonglong *)(param_2 + 0x10) != 2) goto code_r0x00014003058e;
    pcVar4 = *(char **)param_2;
    uVar7 = *(ulonglong *)(param_2 + 0x18);
  }
  else {
    pcVar4 = *(char **)param_2;
    uVar7 = *(ulonglong *)(param_2 + 0x18);
    pcVar6 = param_2;
    if (0xf < uVar7) {
      pcVar6 = pcVar4;
    }
    if ((*pcVar6 == '-') && (pcVar6[1] == '-')) {
      FUN_1400191d4(local_158,param_2,2,0xffffffffffffffff,&local_f8);
      uVar3 = FUN_140030cdc(param_1,local_158);
      return uVar3;
    }
  }
  if (uVar7 < 0x10) {
    pcVar4 = param_2;
  }
  if (*pcVar4 == '-') {
    FUN_1400191d4(local_138,param_2,1,0xffffffffffffffff,&local_f8);
    uVar3 = FUN_140030de8(param_1,local_138);
    return uVar3;
  }
code_r0x00014003058e:
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140006874(&local_f8,param_1 + 0x88);
    FUN_140006874(&local_118,param_2);
    if (*(char *)(param_1 + 0x22) == '\x01') {
      puVar5 = &local_98;
      FUN_140006874(puVar5,&local_f8);
      if (0xf < local_80) {
        puVar5 = (uint *)CONCAT44(uStack_94,local_98);
      }
      lVar8 = local_88 + (longlong)puVar5;
      local_31 = 0x5f;
      FUN_14000d6fa(&local_58,puVar5,lVar8);
      lVar1 = CONCAT44(uStack_54,local_58);
      if (local_80 < 0x10) {
        puVar5 = &local_98;
      }
      else {
        puVar5 = (uint *)CONCAT44(uStack_94,local_98);
      }
      uVar9 = lVar8 - lVar1;
      uVar7 = local_88 - (lVar1 - (longlong)puVar5);
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      lVar8 = local_88 - uVar7;
      FUN_140135ff0(lVar1,uVar7 + lVar1,(lVar8 - (lVar1 - (longlong)puVar5)) + 1);
      local_58 = local_98;
      uStack_54 = uStack_94;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      uStack_40 = local_80;
      local_88 = 0;
      local_80 = 0xf;
      local_98 = local_98 & 0xffffff00;
      local_48 = lVar8;
      FUN_1400017de(&local_98);
      FUN_1400065bc(&local_f8);
      local_e8 = (undefined4)local_48;
      uStack_e4 = local_48._4_4_;
      uStack_e0 = (undefined4)uStack_40;
      uStack_dc = uStack_40._4_4_;
      local_f8 = local_58;
      uStack_f4 = uStack_54;
      uStack_f0 = uStack_50;
      uStack_ec = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
      FUN_1400017de(&local_58);
      puVar5 = &local_78;
      FUN_140006874(puVar5,&local_118);
      if (0xf < local_60) {
        puVar5 = (uint *)CONCAT44(uStack_74,local_78);
      }
      lVar8 = local_68 + (longlong)puVar5;
      local_31 = 0x5f;
      FUN_14000d6fa(&local_58,puVar5,lVar8);
      lVar1 = CONCAT44(uStack_54,local_58);
      if (local_60 < 0x10) {
        puVar5 = &local_78;
      }
      else {
        puVar5 = (uint *)CONCAT44(uStack_74,local_78);
      }
      uVar9 = lVar8 - lVar1;
      uVar7 = local_68 - (lVar1 - (longlong)puVar5);
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      lVar8 = local_68 - uVar7;
      FUN_140135ff0(lVar1,uVar7 + lVar1,(lVar8 - (lVar1 - (longlong)puVar5)) + 1);
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      uStack_40 = local_60;
      local_68 = 0;
      local_60 = 0xf;
      local_78 = local_78 & 0xffffff00;
      local_48 = lVar8;
      FUN_1400017de(&local_78);
      FUN_1400065bc(&local_118);
      local_108 = (undefined4)local_48;
      uStack_104 = local_48._4_4_;
      uStack_100 = (undefined4)uStack_40;
      uStack_fc = uStack_40._4_4_;
      local_118 = local_58;
      uStack_114 = uStack_54;
      uStack_110 = uStack_50;
      uStack_10c = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
      FUN_1400017de(&local_58);
    }
    if (*(char *)(param_1 + 0x21) == '\x01') {
      puVar5 = &local_d8;
      FUN_140006874(puVar5,&local_f8);
      if (0xf < uStack_c0) {
        puVar5 = (uint *)CONCAT44(uStack_d4,local_d8);
      }
      FUN_140017bc5(&local_58,puVar5,local_c8 + (longlong)puVar5,puVar5);
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      local_48._0_4_ = (undefined4)local_c8;
      local_48._4_4_ = local_c8._4_4_;
      uStack_40._0_4_ = (undefined4)uStack_c0;
      uStack_40._4_4_ = uStack_c0._4_4_;
      local_c8 = 0;
      uStack_c0 = 0xf;
      local_d8 = local_d8 & 0xffffff00;
      FUN_1400017de(&local_d8);
      FUN_1400065bc(&local_f8);
      local_e8 = (undefined4)local_48;
      uStack_e4 = local_48._4_4_;
      uStack_e0 = (undefined4)uStack_40;
      uStack_dc = uStack_40._4_4_;
      local_f8 = local_58;
      uStack_f4 = uStack_54;
      uStack_f0 = uStack_50;
      uStack_ec = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
      FUN_1400017de(&local_58);
      puVar5 = &local_b8;
      FUN_140006874(puVar5,&local_118);
      if (0xf < uStack_a0) {
        puVar5 = (uint *)CONCAT44(uStack_b4,local_b8);
      }
      FUN_140017bc5(&local_58,puVar5,local_a8 + (longlong)puVar5,puVar5);
      local_58 = local_b8;
      uStack_54 = uStack_b4;
      uStack_50 = uStack_b0;
      uStack_4c = uStack_ac;
      local_48._0_4_ = (undefined4)local_a8;
      local_48._4_4_ = local_a8._4_4_;
      uStack_40._0_4_ = (undefined4)uStack_a0;
      uStack_40._4_4_ = uStack_a0._4_4_;
      local_a8 = 0;
      uStack_a0 = 0xf;
      local_b8 = local_b8 & 0xffffff00;
      FUN_1400017de(&local_b8);
      FUN_1400065bc(&local_118);
      local_108 = (undefined4)local_48;
      uStack_104 = local_48._4_4_;
      uStack_100 = (undefined4)uStack_40;
      uStack_fc = uStack_40._4_4_;
      local_118 = local_58;
      uStack_114 = uStack_54;
      uStack_110 = uStack_50;
      uStack_10c = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
      FUN_1400017de(&local_58);
    }
    cVar2 = FUN_1400170b4(&local_118,&local_f8);
    FUN_1400017de(&local_118);
    FUN_1400017de(&local_f8);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1400170b4(param_2,param_1 + 0xa8);
  }
  return uVar3;
}

