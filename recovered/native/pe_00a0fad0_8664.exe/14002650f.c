/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002650f */

longlong FUN_14002650f(uint *param_1,longlong *param_2,char param_3,char param_4)

{
  char cVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  ulonglong uStack_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  ulonglong uStack_b0;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  longlong local_90;
  ulonglong local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  ulonglong uStack_40;
  uint *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60 = param_2;
  local_38 = param_1;
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      lVar7 = *param_2;
      lVar4 = param_2[1];
      while ((lVar6 = lVar4, lVar7 != lVar4 &&
             (cVar1 = FUN_1400170b4(lVar7,local_38), lVar6 = lVar7, cVar1 == '\0'))) {
        lVar7 = lVar7 + 0x20;
      }
    }
    else {
      puVar2 = &local_80;
      FUN_140006874(puVar2,param_1);
      if (0xf < local_68) {
        puVar2 = (uint *)CONCAT44(uStack_7c,local_80);
      }
      lVar4 = local_70 + (longlong)puVar2;
      local_29 = 0x5f;
      FUN_14000d6fa(&local_58,puVar2,lVar4);
      lVar7 = CONCAT44(uStack_54,local_58);
      if (local_68 < 0x10) {
        puVar2 = &local_80;
      }
      else {
        puVar2 = (uint *)CONCAT44(uStack_7c,local_80);
      }
      uVar5 = lVar4 - lVar7;
      uVar3 = local_70 - (lVar7 - (longlong)puVar2);
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      lVar4 = local_70 - uVar3;
      FUN_140135ff0(lVar7,uVar3 + lVar7,(lVar4 - (lVar7 - (longlong)puVar2)) + 1);
      local_58 = local_80;
      uStack_54 = uStack_7c;
      uStack_50 = uStack_78;
      uStack_4c = uStack_74;
      uStack_40 = local_68;
      local_70 = 0;
      local_68 = 0xf;
      local_80 = local_80 & 0xffffff00;
      local_48 = lVar4;
      FUN_1400017de(&local_80);
      puVar2 = local_38;
      if (local_38 != &local_58) {
        FUN_1400065bc(local_38);
        *(longlong *)(puVar2 + 4) = local_48;
        *(ulonglong *)(puVar2 + 6) = uStack_40;
        *puVar2 = local_58;
        puVar2[1] = uStack_54;
        puVar2[2] = uStack_50;
        puVar2[3] = uStack_4c;
        local_48 = 0;
        uStack_40 = 0xf;
        local_58 = local_58 & 0xffffff00;
      }
      FUN_1400017de(&local_58);
      FUN_140026ce4(&local_58,*local_60,local_60[1],local_38);
      lVar6 = CONCAT44(uStack_54,local_58);
    }
  }
  else if (param_4 == '\0') {
    puVar2 = &local_e8;
    FUN_140006874(puVar2,param_1);
    if (0xf < uStack_d0) {
      puVar2 = (uint *)CONCAT44(uStack_e4,local_e8);
    }
    FUN_140017bc5(&local_58,puVar2,local_d8 + (longlong)puVar2,puVar2);
    local_58 = local_e8;
    uStack_54 = uStack_e4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    local_48 = local_d8;
    uStack_40 = uStack_d0;
    local_d8 = 0;
    uStack_d0 = 0xf;
    local_e8 = local_e8 & 0xffffff00;
    FUN_1400017de(&local_e8);
    puVar2 = local_38;
    if (local_38 != &local_58) {
      FUN_1400065bc(local_38);
      *(longlong *)(puVar2 + 4) = local_48;
      *(ulonglong *)(puVar2 + 6) = uStack_40;
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
    }
    FUN_1400017de(&local_58);
    FUN_140026c49(&local_58,*local_60,local_60[1],local_38);
    lVar6 = CONCAT44(uStack_54,local_58);
  }
  else {
    puVar2 = &local_a0;
    FUN_140006874(puVar2,param_1);
    if (0xf < local_88) {
      puVar2 = (uint *)CONCAT44(uStack_9c,local_a0);
    }
    lVar4 = local_90 + (longlong)puVar2;
    local_29 = 0x5f;
    FUN_14000d6fa(&local_58,puVar2,lVar4);
    lVar7 = CONCAT44(uStack_54,local_58);
    if (local_88 < 0x10) {
      puVar2 = &local_a0;
    }
    else {
      puVar2 = (uint *)CONCAT44(uStack_9c,local_a0);
    }
    uVar5 = lVar4 - lVar7;
    uVar3 = local_90 - (lVar7 - (longlong)puVar2);
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    lVar4 = local_90 - uVar3;
    FUN_140135ff0(lVar7,uVar3 + lVar7,(lVar4 - (lVar7 - (longlong)puVar2)) + 1);
    local_c8 = local_a0;
    uStack_c4 = uStack_9c;
    uStack_c0 = uStack_98;
    uStack_bc = uStack_94;
    uStack_b0 = local_88;
    local_90 = 0;
    local_88 = 0xf;
    local_a0 = local_a0 & 0xffffff00;
    local_b8 = lVar4;
    FUN_1400017de(&local_a0);
    if (uStack_b0 < 0x10) {
      puVar2 = &local_c8;
    }
    else {
      puVar2 = (uint *)CONCAT44(uStack_c4,local_c8);
    }
    FUN_140017bc5(&local_58,puVar2,local_b8 + (longlong)puVar2,puVar2);
    local_58 = local_c8;
    uStack_54 = uStack_c4;
    uStack_50 = uStack_c0;
    uStack_4c = uStack_bc;
    local_48 = local_b8;
    uStack_40 = uStack_b0;
    local_b8 = 0;
    uStack_b0 = 0xf;
    local_c8 = local_c8 & 0xffffff00;
    FUN_1400017de(&local_c8);
    puVar2 = local_38;
    if (local_38 != &local_58) {
      FUN_1400065bc(local_38);
      *(longlong *)(puVar2 + 4) = local_48;
      *(ulonglong *)(puVar2 + 6) = uStack_40;
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
    }
    FUN_1400017de(&local_58);
    FUN_140026bae(&local_58,*local_60,local_60[1],local_38);
    lVar6 = CONCAT44(uStack_54,local_58);
  }
  if (lVar6 == local_60[1]) {
    lVar7 = -1;
  }
  else {
    lVar7 = lVar6 - *local_60 >> 5;
  }
  FUN_1400017de(local_38);
  FUN_14000eeca(local_60);
  return lVar7;
}

