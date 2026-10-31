/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800820ba */

void FUN_1800820ba(longlong param_1,char param_2,undefined **param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 unaff_R15;
  undefined1 local_278 [104];
  char local_210;
  char local_1c8;
  undefined1 local_1a8 [64];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined **local_128 [4];
  undefined **local_108;
  undefined8 local_e8 [4];
  undefined1 local_c8 [16];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_58;
  char local_50;
  char local_4f;
  longlong local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_4f = *(char *)(param_1 + 0xe8);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = (undefined **)0x0;
    local_50 = '\0';
    local_78 = param_3;
    local_48 = lVar1;
    FUN_18008589a(param_1,&local_78);
    if (param_2 != '\0') {
      iVar3 = FUN_180082c36(lVar1);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 != 0xf) {
        FUN_180001e92(local_98,"value");
        FUN_1800853f0(param_1,local_b8,0xf,local_98);
        local_158 = *(undefined8 *)(param_1 + 0x78);
        local_168 = *(undefined4 *)(param_1 + 0x68);
        uStack_164 = *(undefined4 *)(param_1 + 0x6c);
        uStack_160 = *(undefined4 *)(param_1 + 0x70);
        uStack_15c = *(undefined4 *)(param_1 + 0x74);
        FUN_18004fb2a(local_128,0x65,&local_168,local_b8,0);
        FUN_18004ffea(lVar1,local_e8);
        local_50 = '\x01';
        if (local_4f == '\x01') {
          FUN_180055594(local_278,local_128);
                    /* WARNING: Subroutine does not return */
          FUN_18026d5b0(local_278,&DAT_180391640);
        }
        FUN_180001ef2(local_e8);
        local_128[0] = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
        local_108 = std::exception::vftable;
        FUN_18026ea90();
        local_128[0] = std::exception::vftable;
        FUN_18026ea90();
        FUN_180001ef2(local_b8);
        FUN_180001ef2(local_98);
      }
    }
    if (local_50 == '\x01') {
      FUN_180081b9a(local_c8,9);
      FUN_1800856c4(param_3,local_c8);
    }
    FUN_180051ae0(&local_78);
    return;
  }
  uVar2 = *(undefined1 *)(param_1 + 0xe8);
  FUN_1800181b0(local_1a8,param_1);
  FUN_1800839a0(local_278,param_3,local_1a8,
                CONCAT71((int7)((ulonglong)unaff_R15 >> 8),uVar2) & 0xffffffff,lVar1);
  FUN_180083bea(param_1,local_278);
  if (param_2 != '\0') {
    iVar3 = FUN_180082c36(lVar1);
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 != 0xf) {
      FUN_180001e92(local_98,"value");
      FUN_1800853f0(param_1,local_b8,0xf,local_98);
      local_158 = *(undefined8 *)(param_1 + 0x78);
      local_168 = *(undefined4 *)(param_1 + 0x68);
      uStack_164 = *(undefined4 *)(param_1 + 0x6c);
      uStack_160 = *(undefined4 *)(param_1 + 0x70);
      uStack_15c = *(undefined4 *)(param_1 + 0x74);
      FUN_18004fb2a(&local_78,0x65,&local_168,local_b8,0);
      FUN_18004ffea(lVar1,local_e8);
      local_210 = '\x01';
      if (local_1c8 == '\x01') {
        FUN_180055594(local_128,&local_78);
                    /* WARNING: Subroutine does not return */
        FUN_18026d5b0(local_128,&DAT_180391640);
      }
      FUN_180001ef2(local_e8);
      local_78 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
      local_58 = std::exception::vftable;
      FUN_18026ea90();
      local_78 = std::exception::vftable;
      FUN_18026ea90();
      FUN_180001ef2(local_b8);
      FUN_180001ef2(local_98);
    }
  }
  if (local_210 == '\x01') {
    puVar4 = local_148;
    FUN_180081b9a(puVar4,9);
  }
  else {
    if (*(char *)param_3 != '\t') goto LAB_18008241a;
    puVar4 = local_138;
    FUN_180081664(puVar4,0);
  }
  FUN_1800856c4(param_3,puVar4);
LAB_18008241a:
  FUN_180085730(local_278);
  return;
}

