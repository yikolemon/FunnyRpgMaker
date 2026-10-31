/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e3b14 */

void __fastcall FUN_100e3b14(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  undefined4 local_114 [6];
  undefined1 local_fc [24];
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8 [6];
  undefined1 **local_a0;
  char *local_9c;
  char *local_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 **local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  uint local_30;
  char *local_2c;
  char *local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_114;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea890;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100e7696(param_1);
  puVar2 = (undefined4 *)FUN_100b3d86(1);
  pcVar5 = (char *)*puVar2;
  local_98 = (char *)puVar2[1];
  do {
    if (pcVar5 == local_98) {
      local_14 = 0xffffffff;
      (**(code **)(*DAT_1039d258 + 0x28))();
      ExceptionList = local_1c;
      return;
    }
    local_48 = pcVar5;
    iVar3 = FUN_100728f0(0xd,0);
    if (iVar3 == -1) {
      iVar3 = FUN_100728f0(10,0);
      if (iVar3 != -1) goto code_r0x100e3ba0;
    }
    else {
code_r0x100e3ba0:
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_44 = (undefined4 ***)0x0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      local_34 = 0;
      local_30 = 0xf;
      pcVar7 = local_48;
      if (0xf < *(uint *)(local_48 + 0x14)) {
        pcVar7 = *(char **)local_48;
      }
      local_9c = pcVar7 + *(int *)(local_48 + 0x10);
      local_28 = pcVar5 + 0x18;
      while (pcVar7 != local_9c) {
        cVar1 = *pcVar7;
        local_2c = pcVar7;
        if ((cVar1 == '\r') || (cVar1 == '\n')) {
          if (local_34 != 0) {
            local_14 = 7;
            FUN_100e9ba6(&local_44);
          }
          local_34 = 0;
          pppuVar4 = &local_44;
          if (0xf < local_30) {
            pppuVar4 = (undefined4 ***)local_44;
          }
          *(undefined1 *)pppuVar4 = 0;
        }
        else {
          local_14 = 7;
          FUN_10003d9a((int)cVar1);
        }
        pcVar7 = local_2c + 1;
      }
      if (local_34 != 0) {
        local_14 = 7;
        FUN_100e9ba6(&local_44);
      }
      local_34 = 0;
      pppuVar4 = &local_44;
      if (0xf < local_30) {
        pppuVar4 = (undefined4 ***)local_44;
      }
      *(undefined1 *)pppuVar4 = 0;
      if (0xf < *(uint *)(local_48 + 0x2c)) {
        local_28 = *(char **)(local_48 + 0x18);
      }
      local_2c = local_28 + *(int *)(local_48 + 0x28);
      pcVar5 = local_28;
      while (pcVar5 != local_2c) {
        cVar1 = *pcVar5;
        local_28 = pcVar5;
        if ((cVar1 == '\r') || (cVar1 == '\n')) {
          if (local_34 != 0) {
            local_14 = 7;
            FUN_100e9ba6(&local_44);
          }
          local_34 = 0;
          pppuVar4 = &local_44;
          if (0xf < local_30) {
            pppuVar4 = (undefined4 ***)local_44;
          }
          *(undefined1 *)pppuVar4 = 0;
        }
        else {
          local_14 = 7;
          FUN_10003d9a((int)cVar1);
        }
        pcVar5 = local_28 + 1;
      }
      if (local_34 != 0) {
        local_14 = 7;
        FUN_100e9ba6(&local_44);
      }
      local_34 = 0;
      pppuVar4 = &local_44;
      if (0xf < local_30) {
        pppuVar4 = (undefined4 ***)local_44;
      }
      *(undefined1 *)pppuVar4 = 0;
      if (local_50 - local_54 == local_60 - local_64) {
        local_14 = 7;
        FUN_10015f8f(local_fc,"SEPARATE: ",local_48);
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        local_c8 = 0;
        local_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_14 = 9;
        FUN_1002218a();
        pcVar5 = (char *)0x0;
        while( true ) {
          local_14 = 0xc;
          if ((char *)((local_50 - local_54 >> 3) * -0x55555555) <= pcVar5) break;
          local_28 = (char *)((int)pcVar5 * 3);
          local_2c = pcVar5;
          FUN_1000334a(local_54 + (int)pcVar5 * 0x18);
          local_23 = 1;
          local_14 = 0xe;
          local_28 = (char *)((int)local_28 * 8);
          FUN_1000334a(local_28 + local_54);
          local_14 = 0x10;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_b8[0] = local_fc;
          local_58 = (undefined4 **)local_114;
          local_24 = 1;
          FUN_100abf8c(1,&local_58,local_b8);
          local_22 = 1;
          local_14 = 0x12;
          FUN_1000334a(local_28 + local_64);
          local_14 = 0x14;
          local_70 = 0;
          local_6c = 0;
          local_68 = 0;
          local_58 = &local_a0;
          local_a0 = local_b8;
          local_21 = 1;
          FUN_100abf8c(1,&local_a0,&local_58);
          local_14 = 0x16;
          puVar6 = (uint *)FUN_100a9370(local_28 + local_54);
          if (puVar6 != &local_94) {
            FUN_10004e60();
            *(ulonglong *)(puVar6 + 4) = CONCAT44(uStack_80,local_84);
            *puVar6 = local_94;
            puVar6[1] = uStack_90;
            puVar6[2] = uStack_8c;
            puVar6[3] = uStack_88;
            local_84 = 0;
            uStack_80 = 0xf;
            local_94 = local_94 & 0xffffff00;
            FUN_10060b3c();
            puVar6[6] = local_7c;
            puVar6[7] = local_78;
            puVar6[8] = local_74;
            local_7c = 0;
            local_78 = 0;
            local_74 = 0;
            FUN_10060b3c();
            puVar6[9] = local_70;
            puVar6[10] = local_6c;
            puVar6[0xb] = local_68;
            local_70 = 0;
            local_6c = 0;
            local_68 = 0;
          }
          local_14 = 0xffffffff;
          FUN_10060b3c();
          FUN_10060b3c();
          FUN_10001fee();
          local_21 = 0;
          local_14 = 0x13;
          FUN_10001fee();
          local_22 = 0;
          local_24 = 0;
          local_14 = 0xf;
          FUN_10001fee();
          local_23 = 0;
          pcVar5 = local_2c + 1;
        }
        FUN_1006b168(local_fc);
        local_14 = 0xffffffff;
        FUN_1006ae4c();
        FUN_10001fee();
      }
      local_14 = 0xffffffff;
      FUN_10001fee();
      FUN_10060b3c();
      FUN_10060b3c();
    }
    pcVar5 = local_48 + 0x30;
  } while( true );
}

