/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140064960 */

void FUN_140064960(longlong param_1,char param_2,undefined **param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 unaff_R14;
  undefined1 local_260 [104];
  char local_1f8;
  char local_1b0;
  undefined1 local_198 [64];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined **local_120 [4];
  undefined **local_100;
  undefined8 local_e0 [4];
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  char local_48;
  char local_47;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_47 = *(char *)(param_1 + 0xe0);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = (undefined **)0x0;
    local_48 = '\0';
    local_70 = param_3;
    FUN_140068258(param_1,&local_70);
    if (param_2 != '\0') {
      iVar2 = FUN_140065468(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVar2;
      if (iVar2 != 0xf) {
        FUN_14000169c(local_90,"value");
        FUN_140067c8c(param_1,local_b0,0xf,local_90);
        local_148 = *(undefined8 *)(param_1 + 0x78);
        local_158 = *(undefined4 *)(param_1 + 0x68);
        uStack_154 = *(undefined4 *)(param_1 + 0x6c);
        uStack_150 = *(undefined4 *)(param_1 + 0x70);
        uStack_14c = *(undefined4 *)(param_1 + 0x74);
        FUN_140067aa0(local_120,0x65,&local_158,local_b0,0);
        FUN_140067f60(param_1 + 0x48,local_e0);
        local_48 = '\x01';
        if (local_47 == '\x01') {
          FUN_14006e6d6(local_260,local_120);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_260,&DAT_140196740);
        }
        FUN_1400017de(local_e0);
        local_120[0] = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
        local_100 = std::exception::vftable;
        FUN_140107df0();
        local_120[0] = std::exception::vftable;
        FUN_140107df0();
        FUN_1400017de(local_b0);
        FUN_1400017de(local_90);
      }
    }
    if (local_48 == '\x01') {
      FUN_1400634c2(local_c0,9);
      FUN_14005783a(param_3,local_c0);
    }
    FUN_140069620(&local_70);
    return;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe0);
  FUN_14002d81a(local_198,param_1);
  FUN_14006644e(local_260,param_3,local_198,
                CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar1) & 0xffffffff);
  FUN_14006668e(param_1,local_260);
  if (param_2 != '\0') {
    iVar2 = FUN_140065468(param_1 + 0x48);
    *(int *)(param_1 + 0x40) = iVar2;
    if (iVar2 != 0xf) {
      FUN_14000169c(local_90,"value");
      FUN_140067c8c(param_1,local_b0,0xf,local_90);
      local_148 = *(undefined8 *)(param_1 + 0x78);
      local_158 = *(undefined4 *)(param_1 + 0x68);
      uStack_154 = *(undefined4 *)(param_1 + 0x6c);
      uStack_150 = *(undefined4 *)(param_1 + 0x70);
      uStack_14c = *(undefined4 *)(param_1 + 0x74);
      FUN_140067aa0(&local_70,0x65,&local_158,local_b0,0);
      FUN_140067f60(param_1 + 0x48,local_e0);
      local_1f8 = '\x01';
      if (local_1b0 == '\x01') {
        FUN_14006e6d6(local_120,&local_70);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_120,&DAT_140196740);
      }
      FUN_1400017de(local_e0);
      local_70 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
      local_50 = std::exception::vftable;
      FUN_140107df0();
      local_70 = std::exception::vftable;
      FUN_140107df0();
      FUN_1400017de(local_b0);
      FUN_1400017de(local_90);
    }
  }
  if (local_1f8 == '\x01') {
    puVar3 = local_140;
    FUN_1400634c2(puVar3,9);
  }
  else {
    if (*(char *)param_3 != '\t') goto LAB_140064cad;
    puVar3 = local_130;
    FUN_140057552(puVar3,0);
  }
  FUN_14005783a(param_3,puVar3);
LAB_140064cad:
  FUN_1400680ee(local_260);
  return;
}

