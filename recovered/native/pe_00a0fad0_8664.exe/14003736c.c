/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003736c */

undefined4 FUN_14003736c(longlong param_1,uint *param_2)

{
  longlong lVar1;
  char cVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  longlong local_140;
  ulonglong uStack_138;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  ulonglong local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  ulonglong local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_84;
  uint *local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar9 = param_1 + 8;
  local_80 = param_2;
  FUN_140006874(&local_198,lVar9);
  local_f0 = param_1;
  if (*(char *)(param_1 + 0x319) == '\x01') {
    puVar3 = &local_e8;
    FUN_140006874(puVar3,lVar9);
    if (0xf < local_d0) {
      puVar3 = (uint *)CONCAT44(uStack_e4,local_e8);
    }
    lVar5 = local_d8 + (longlong)puVar3;
    local_a8._0_1_ = 0x5f;
    FUN_14000d6fa(&local_78,puVar3,lVar5);
    lVar7 = CONCAT44(uStack_74,local_78);
    if (local_d0 < 0x10) {
      puVar3 = &local_e8;
    }
    else {
      puVar3 = (uint *)CONCAT44(uStack_e4,local_e8);
    }
    uVar6 = lVar5 - lVar7;
    uVar4 = local_d8 - (lVar7 - (longlong)puVar3);
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    lVar5 = local_d8 - uVar4;
    FUN_140135ff0(lVar7,uVar4 + lVar7,(lVar5 - (lVar7 - (longlong)puVar3)) + 1);
    local_78 = local_e8;
    uStack_74 = uStack_e4;
    uStack_70 = uStack_e0;
    uStack_6c = uStack_dc;
    uStack_60 = local_d0;
    local_d8 = 0;
    local_d0 = 0xf;
    local_e8 = local_e8 & 0xffffff00;
    local_68 = lVar5;
    FUN_1400017de(&local_e8);
    FUN_1400065bc(&local_198);
    local_188 = (undefined4)local_68;
    uStack_184 = local_68._4_4_;
    uStack_180 = (undefined4)uStack_60;
    uStack_17c = uStack_60._4_4_;
    local_198 = local_78;
    uStack_194 = uStack_74;
    uStack_190 = uStack_70;
    uStack_18c = uStack_6c;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = local_78 & 0xffffff00;
    FUN_1400017de(&local_78);
    puVar3 = &local_c8;
    FUN_140006874(puVar3,local_80);
    if (0xf < local_b0) {
      puVar3 = (uint *)CONCAT44(uStack_c4,local_c8);
    }
    lVar5 = local_b8 + (longlong)puVar3;
    local_a8 = CONCAT31(local_a8._1_3_,0x5f);
    FUN_14000d6fa(&local_78,puVar3,lVar5);
    lVar7 = CONCAT44(uStack_74,local_78);
    if (local_b0 < 0x10) {
      puVar3 = &local_c8;
    }
    else {
      puVar3 = (uint *)CONCAT44(uStack_c4,local_c8);
    }
    uVar6 = lVar5 - lVar7;
    uVar4 = local_b8 - (lVar7 - (longlong)puVar3);
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    lVar5 = local_b8 - uVar4;
    FUN_140135ff0(lVar7,uVar4 + lVar7,(lVar5 - (lVar7 - (longlong)puVar3)) + 1);
    local_78 = local_c8;
    uStack_74 = uStack_c4;
    uStack_70 = uStack_c0;
    uStack_6c = uStack_bc;
    uStack_60 = local_b0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = local_c8 & 0xffffff00;
    local_68 = lVar5;
    FUN_1400017de(&local_c8);
    puVar3 = local_80;
    if (local_80 != &local_78) {
      FUN_1400065bc(local_80);
      *(longlong *)(puVar3 + 4) = local_68;
      *(ulonglong *)(puVar3 + 6) = uStack_60;
      *puVar3 = local_78;
      puVar3[1] = uStack_74;
      puVar3[2] = uStack_70;
      puVar3[3] = uStack_6c;
      local_68 = 0;
      uStack_60 = 0xf;
      local_78 = local_78 & 0xffffff00;
    }
    FUN_1400017de(&local_78);
  }
  if (*(char *)(local_f0 + 0x318) == '\x01') {
    puVar3 = &local_170;
    FUN_140006874(puVar3,lVar9);
    if (0xf < uStack_158) {
      puVar3 = (uint *)CONCAT44(uStack_16c,local_170);
    }
    FUN_140017bc5(&local_78,puVar3,local_160 + (longlong)puVar3,puVar3);
    local_78 = local_170;
    uStack_74 = uStack_16c;
    uStack_70 = uStack_168;
    uStack_6c = uStack_164;
    local_68._0_4_ = (undefined4)local_160;
    local_68._4_4_ = local_160._4_4_;
    uStack_60._0_4_ = (undefined4)uStack_158;
    uStack_60._4_4_ = uStack_158._4_4_;
    local_160 = 0;
    uStack_158 = 0xf;
    local_170 = local_170 & 0xffffff00;
    FUN_1400017de(&local_170);
    FUN_1400065bc(&local_198);
    local_188 = (undefined4)local_68;
    uStack_184 = local_68._4_4_;
    uStack_180 = (undefined4)uStack_60;
    uStack_17c = uStack_60._4_4_;
    local_198 = local_78;
    uStack_194 = uStack_74;
    uStack_190 = uStack_70;
    uStack_18c = uStack_6c;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = local_78 & 0xffffff00;
    FUN_1400017de(&local_78);
    puVar3 = &local_150;
    FUN_140006874(puVar3,local_80);
    if (0xf < uStack_138) {
      puVar3 = (uint *)CONCAT44(uStack_14c,local_150);
    }
    FUN_140017bc5(&local_78,puVar3,local_140 + (longlong)puVar3,puVar3);
    local_78 = local_150;
    uStack_74 = uStack_14c;
    uStack_70 = uStack_148;
    uStack_6c = uStack_144;
    local_68 = local_140;
    uStack_60 = uStack_138;
    local_140 = 0;
    uStack_138 = 0xf;
    local_150 = local_150 & 0xffffff00;
    FUN_1400017de(&local_150);
    puVar3 = local_80;
    if (local_80 != &local_78) {
      FUN_1400065bc(local_80);
      *(longlong *)(puVar3 + 4) = local_68;
      *(ulonglong *)(puVar3 + 6) = uStack_60;
      *puVar3 = local_78;
      puVar3[1] = uStack_74;
      puVar3[2] = uStack_70;
      puVar3[3] = uStack_6c;
      local_68 = 0;
      uStack_60 = 0xf;
      local_78 = local_78 & 0xffffff00;
    }
    FUN_1400017de(&local_78);
  }
  lVar9 = local_f0;
  puVar3 = &local_198;
  cVar2 = FUN_1400170b4(puVar3,local_80);
  local_84 = (undefined4)CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  if (cVar2 == '\0') {
    lVar7 = *(longlong *)(lVar9 + 0x370);
    lVar5 = *(longlong *)(lVar9 + 0x378);
    do {
      if (lVar7 == lVar5) {
        local_84 = 0;
        break;
      }
      FUN_140006874(&local_78,lVar7);
      if (*(char *)(lVar9 + 0x319) == '\x01') {
        FUN_140006874(&local_110,&local_78);
        puVar3 = &local_110;
        if (0xf < local_f8) {
          puVar3 = (uint *)CONCAT44(uStack_10c,local_110);
        }
        lVar9 = local_100 + (longlong)puVar3;
        local_49 = 0x5f;
        FUN_14000d6fa(&local_a8,puVar3,lVar9,&local_49);
        puVar3 = &local_110;
        if (0xf < local_f8) {
          puVar3 = (uint *)CONCAT44(uStack_10c,local_110);
        }
        lVar1 = CONCAT44(uStack_a4,local_a8);
        uVar6 = lVar9 - lVar1;
        uVar4 = local_100 - (lVar1 - (longlong)puVar3);
        if (uVar6 <= uVar4) {
          uVar4 = uVar6;
        }
        lVar8 = local_100 - uVar4;
        FUN_140135ff0(lVar1,uVar4 + lVar1,(lVar8 - (lVar1 - (longlong)puVar3)) + 1);
        lVar9 = local_f0;
        local_a8 = local_110;
        uStack_a4 = uStack_10c;
        uStack_a0 = uStack_108;
        uStack_9c = uStack_104;
        uStack_90 = local_f8;
        local_100 = 0;
        local_f8 = 0xf;
        local_110 = local_110 & 0xffffff00;
        local_98 = lVar8;
        FUN_1400017de(&local_110);
        FUN_1400065bc(&local_78);
        local_68 = local_98;
        uStack_60 = uStack_90;
        local_78 = local_a8;
        uStack_74 = uStack_a4;
        uStack_70 = uStack_a0;
        uStack_6c = uStack_9c;
        local_98 = 0;
        uStack_90 = 0xf;
        local_a8 = local_a8 & 0xffffff00;
        FUN_1400017de(&local_a8);
      }
      if (*(char *)(lVar9 + 0x318) == '\x01') {
        FUN_140006874(&local_130,&local_78);
        puVar3 = &local_130;
        if (0xf < uStack_118) {
          puVar3 = (uint *)CONCAT44(uStack_12c,local_130);
        }
        FUN_140017bc5(&local_a8,puVar3,local_120 + (longlong)puVar3,puVar3);
        local_a8 = local_130;
        uStack_a4 = uStack_12c;
        uStack_a0 = uStack_128;
        uStack_9c = uStack_124;
        local_98._0_4_ = (undefined4)local_120;
        local_98._4_4_ = local_120._4_4_;
        uStack_90._0_4_ = (undefined4)uStack_118;
        uStack_90._4_4_ = uStack_118._4_4_;
        local_120 = 0;
        uStack_118 = 0xf;
        local_130 = local_130 & 0xffffff00;
        FUN_1400017de(&local_130);
        FUN_1400065bc(&local_78);
        local_68 = CONCAT44(local_98._4_4_,(undefined4)local_98);
        uStack_60 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
        local_78 = local_a8;
        uStack_74 = uStack_a4;
        uStack_70 = uStack_a0;
        uStack_6c = uStack_9c;
        local_98 = 0;
        uStack_90 = 0xf;
        local_a8 = local_a8 & 0xffffff00;
        FUN_1400017de(&local_a8);
      }
      cVar2 = FUN_1400170b4(&local_78,local_80);
      FUN_1400017de(&local_78);
      lVar7 = lVar7 + 0x20;
    } while (cVar2 == '\0');
  }
  FUN_1400017de(&local_198);
  FUN_1400017de(local_80);
  return local_84;
}

