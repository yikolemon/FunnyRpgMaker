/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001748 */

void FUN_140001748(uint *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 local_120 [56];
  undefined8 local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8 [32];
  char local_98 [16];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_e8 = 0;
  local_36 = 1;
  FUN_1400045b6(param_1,local_e0);
  local_35 = 1;
  local_34 = 1;
  FUN_1400027d2(local_b8,"Launcher/app.config");
  local_32 = 0;
  local_33 = 1;
  FUN_140055480(&local_58,local_b8,local_e0);
  local_31 = 1;
  FUN_1400044de(&local_88,&local_58);
  local_37 = 0;
  FUN_1400042b2(local_98,&local_88,local_120,0,1,0);
  local_37 = 0;
  FUN_14000109c(&local_88);
  local_31 = 0;
  FUN_140001056(&local_58);
  local_32 = 0;
  local_33 = 0;
  FUN_14000109c(local_b8);
  local_35 = 0;
  local_34 = 0;
  local_36 = 0;
  if (local_98[0] == '\x01') {
    FUN_14000372c(&local_88,param_1);
    local_60 = FUN_140004704(param_1 + 0x12,*(undefined8 *)(param_1 + 8));
    FUN_140004786(local_98,&local_58,"SaveSelectGamePath",&local_88);
    FUN_140001f36(&local_88);
    local_78 = (undefined4)local_48;
    uStack_74 = local_48._4_4_;
    uStack_70 = (undefined4)uStack_40;
    uStack_6c = uStack_40._4_4_;
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffff00;
    FUN_14000109c(&local_58);
    local_60 = FUN_1400048dc(local_98,"SaveLaunchFollow",&local_60);
    cVar1 = FUN_14001635c(&local_88,param_1);
    if ((cVar1 == '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
      FUN_1400045b6(param_1,local_b8);
      local_130 = (undefined8 *)FUN_140004a22(local_b8,&local_88);
      local_128 = local_130[2];
      if (7 < (ulonglong)local_130[3]) {
        local_130 = (undefined8 *)*local_130;
      }
      FUN_140017160(&local_58,&local_130,&local_38);
      if (param_1 != &local_58) {
        FUN_140001f36(param_1);
        *(undefined8 *)(param_1 + 4) = local_48;
        *(undefined8 *)(param_1 + 6) = uStack_40;
        *param_1 = local_58;
        param_1[1] = uStack_54;
        param_1[2] = uStack_50;
        param_1[3] = uStack_4c;
        local_48 = 0;
        uStack_40 = 0xf;
        local_58 = local_58 & 0xffffff00;
      }
      FUN_14000109c(&local_58);
      FUN_140001056(local_b8);
    }
    uVar2 = FUN_140004a88(param_1 + 0x12,local_60);
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_14000109c(&local_88);
  }
  FUN_140004b06(local_98);
  return;
}

