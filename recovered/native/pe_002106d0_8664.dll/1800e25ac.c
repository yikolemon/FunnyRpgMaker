/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e25ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e25ac(undefined1 *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 local_118 [56];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [40];
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50 [17];
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_180002d74();
  local_3d = 1;
  local_3c = 1;
  FUN_180001e92(local_98,"Game/engine_ui.config");
  local_3a = 0;
  local_3b = 1;
  FUN_1800cc381(local_b8,local_98,&local_d8);
  local_39 = 1;
  FUN_1800e54c8(&local_70,local_b8);
  local_3e = 0;
  FUN_18001347a(local_50,&local_70,local_118,0,1,0);
  local_3e = 0;
  FUN_180001ef2(&local_70);
  local_39 = 0;
  FUN_180001e4c(local_b8);
  local_3a = 0;
  local_3b = 0;
  FUN_180001ef2(local_98);
  local_3d = 0;
  local_3c = 0;
  local_3f = 0;
  if (local_50[0] == '\x01') {
    uVar2 = FUN_1800e0e04(local_50,&DAT_18035f4bf,param_1);
    *param_1 = uVar2;
    uVar5 = FUN_1800e55a0(local_50,&DAT_18035f6d1,param_1 + 4);
    *(undefined4 *)(param_1 + 4) = uVar5;
    uVar2 = FUN_1800e0e04(local_50,&DAT_18035f3d6,param_1 + 8);
    param_1[8] = uVar2;
    puVar4 = (uint *)(param_1 + 0x10);
    FUN_1800e56ee(local_50,&local_70,&DAT_18035f587,puVar4);
    if (puVar4 != &local_70) {
      FUN_180004c8c(puVar4);
      *(undefined8 *)(param_1 + 0x20) = local_60;
      *(undefined8 *)(param_1 + 0x28) = uStack_58;
      *puVar4 = local_70;
      *(undefined4 *)(param_1 + 0x14) = uStack_6c;
      *(undefined4 *)(param_1 + 0x18) = uStack_68;
      *(undefined4 *)(param_1 + 0x1c) = uStack_64;
      local_60 = 0;
      uStack_58 = 0xf;
      local_70 = local_70 & 0xffffff00;
    }
    FUN_180001ef2(&local_70);
    puVar1 = (uint *)(param_1 + 0x30);
    FUN_1800e56ee(local_50,&local_70,"ApiKey",puVar1);
    if (puVar1 != &local_70) {
      FUN_180004c8c(puVar1);
      *(undefined8 *)(param_1 + 0x40) = local_60;
      *(undefined8 *)(param_1 + 0x48) = uStack_58;
      *puVar1 = local_70;
      *(undefined4 *)(param_1 + 0x34) = uStack_6c;
      *(undefined4 *)(param_1 + 0x38) = uStack_68;
      *(undefined4 *)(param_1 + 0x3c) = uStack_64;
      local_60 = 0;
      uStack_58 = 0xf;
      local_70 = local_70 & 0xffffff00;
    }
    FUN_180001ef2(&local_70);
    puVar1 = (uint *)(param_1 + 0x50);
    FUN_1800e56ee(local_50,&local_70,"ApiBaseUrl",puVar1);
    if (puVar1 != &local_70) {
      FUN_180004c8c(puVar1);
      *(undefined8 *)(param_1 + 0x60) = local_60;
      *(undefined8 *)(param_1 + 0x68) = uStack_58;
      *puVar1 = local_70;
      *(undefined4 *)(param_1 + 0x54) = uStack_6c;
      *(undefined4 *)(param_1 + 0x58) = uStack_68;
      *(undefined4 *)(param_1 + 0x5c) = uStack_64;
      local_60 = 0;
      uStack_58 = 0xf;
      local_70 = local_70 & 0xffffff00;
    }
    FUN_180001ef2(&local_70);
    puVar1 = (uint *)(param_1 + 0x70);
    FUN_1800e56ee(local_50,&local_70,"ApiModel",puVar1);
    if (puVar1 != &local_70) {
      FUN_180004c8c(puVar1);
      *(undefined8 *)(param_1 + 0x80) = local_60;
      *(undefined8 *)(param_1 + 0x88) = uStack_58;
      *puVar1 = local_70;
      *(undefined4 *)(param_1 + 0x74) = uStack_6c;
      *(undefined4 *)(param_1 + 0x78) = uStack_68;
      *(undefined4 *)(param_1 + 0x7c) = uStack_64;
      local_60 = 0;
      uStack_58 = 0xf;
      local_70 = local_70 & 0xffffff00;
    }
    FUN_180001ef2(&local_70);
    uVar5 = FUN_1800e0f4c(local_50,"ApiRequestMaxTokens",param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x90) = uVar5;
    uVar5 = FUN_1800e0f4c(local_50,"ApiRequestMaxConcurrency",param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    uVar2 = FUN_1800e0e04(local_50,"ReTranslateRawJapanese",param_1 + 0x98);
    param_1[0x98] = uVar2;
    FUN_18004187e();
    uVar5 = FUN_1800e1096(local_50,&DAT_180377363,param_1 + 0x9a);
    FUN_18004187e();
    *(undefined4 *)(param_1 + 0x9a) = uVar5;
    FUN_18004187e();
    uVar5 = FUN_1800e1096(local_50,&DAT_180377387,param_1 + 0x9e);
    FUN_18004187e();
    *(undefined4 *)(param_1 + 0x9e) = uVar5;
    _DAT_1804039c0 = FUN_1800e55a0(local_50,"Material3ThemePrimaryColor.x",&DAT_1804039c0);
    _DAT_1804039c4 = FUN_1800e55a0(local_50,"Material3ThemePrimaryColor.y",&DAT_1804039c4);
    _DAT_1804039c8 = FUN_1800e55a0(local_50,"Material3ThemePrimaryColor.z",&DAT_1804039c8);
    DAT_1804039cc = FUN_1800e55a0(local_50,"Material3ThemePrimaryColor.w",&DAT_1804039cc);
    DAT_1804191e0 = FUN_1800e0e04(local_50,"Material3ThemeDarkMode",&DAT_1804191e0);
    _DAT_1804039d4 = FUN_1800e55a0(local_50,"Material3ThemeSizeScaleAdd",&DAT_1804039d4);
    DAT_180404370 = FUN_1800e0e04(local_50,"ImGuiOverlayWindowIsTopMost",&DAT_180404370);
    DAT_180418b00 = FUN_1800e5844(local_50,"engine_source_language.lang",&DAT_180418b00);
    DAT_180418b04 = FUN_1800e5844(local_50,"engine_translation_language.lang",&DAT_180418b04);
    FUN_1800e5981();
    FUN_1800c919d(&local_70,puVar4);
    cVar3 = FUN_1800e5a1c(&DAT_180418c48,&local_70);
    FUN_1800010ec(&local_70);
    if (cVar3 == '\0') {
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (0xf < *(ulonglong *)(param_1 + 0x28)) {
        puVar4 = *(uint **)(param_1 + 0x10);
      }
      *(undefined1 *)puVar4 = 0;
    }
    (**(code **)(*DAT_180418890 + 0x60))(DAT_180418890,local_50);
  }
  FUN_1800137c6(local_50);
  return;
}

