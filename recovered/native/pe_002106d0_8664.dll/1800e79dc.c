/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e79dc */

void FUN_1800e79dc(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  uint *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *local_1e0 [4];
  undefined8 local_1c0 [4];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 *local_148 [4];
  undefined8 **local_128;
  char *local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined1 ***local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_1800eb99c(&DAT_1804189d0,param_1);
  puVar1 = (undefined8 *)FUN_1800b8fe8(&DAT_1804189d0,1);
  pcVar5 = (char *)*puVar1;
  local_120 = (char *)puVar1[1];
  do {
    if (pcVar5 == local_120) {
      (**(code **)(*DAT_180418890 + 0x50))();
      return;
    }
    pcVar8 = pcVar5 + 0x20;
    local_90 = pcVar5;
    lVar2 = FUN_180073112(pcVar8,0xd,0);
    if (lVar2 == -1) {
      lVar2 = FUN_180073112(pcVar8,10,0);
      if (lVar2 != -1) goto code_r0x0001800e7a87;
    }
    else {
code_r0x0001800e7a87:
      local_a8 = 0;
      lStack_a0 = 0;
      local_98 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
      local_b8 = 0;
      local_88 = (undefined8 ****)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      pcVar5 = local_90;
      if (0xf < *(ulonglong *)(local_90 + 0x18)) {
        pcVar5 = *(char **)local_90;
      }
      pcVar7 = pcVar5 + *(longlong *)(local_90 + 0x10);
      for (; pcVar5 != pcVar7; pcVar5 = pcVar5 + 1) {
        if ((*pcVar5 == '\r') || (*pcVar5 == '\n')) {
          if (local_78 != 0) {
            FUN_1800ee45a(&local_a8,&local_88);
          }
          local_78 = 0;
          ppppuVar3 = &local_88;
          if (0xf < local_70) {
            ppppuVar3 = (undefined8 ****)local_88;
          }
          *(undefined1 *)ppppuVar3 = 0;
        }
        else {
          FUN_180003bf2(&local_88);
        }
      }
      if (local_78 != 0) {
        FUN_1800ee45a(&local_a8,&local_88);
      }
      local_78 = 0;
      ppppuVar3 = &local_88;
      if (0xf < local_70) {
        ppppuVar3 = (undefined8 ****)local_88;
      }
      *(undefined1 *)ppppuVar3 = 0;
      if (0xf < *(ulonglong *)(local_90 + 0x38)) {
        pcVar8 = *(char **)(local_90 + 0x20);
      }
      pcVar5 = pcVar8 + *(longlong *)(local_90 + 0x30);
      for (; pcVar8 != pcVar5; pcVar8 = pcVar8 + 1) {
        if ((*pcVar8 == '\r') || (*pcVar8 == '\n')) {
          if (local_78 != 0) {
            FUN_1800ee45a(&local_c8,&local_88);
          }
          local_78 = 0;
          ppppuVar3 = &local_88;
          if (0xf < local_70) {
            ppppuVar3 = (undefined8 ****)local_88;
          }
          *(undefined1 *)ppppuVar3 = 0;
        }
        else {
          FUN_180003bf2(&local_88);
        }
      }
      if (local_78 != 0) {
        FUN_1800ee45a(&local_c8,&local_88);
      }
      local_78 = 0;
      ppppuVar3 = &local_88;
      if (0xf < local_70) {
        ppppuVar3 = (undefined8 ****)local_88;
      }
      *(undefined1 *)ppppuVar3 = 0;
      if (lStack_a0 - local_a8 == lStack_c0 - local_c8) {
        FUN_180015c27(local_1c0,"SEPARATE: ");
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        uStack_178 = 0;
        local_190 = 0;
        uStack_188 = 0;
        local_1a0 = 0;
        uStack_198 = 0;
        local_150 = 0;
        FUN_18002266a(&uStack_188);
        for (uVar6 = 0; uVar6 < (ulonglong)(lStack_a0 - local_a8 >> 5); uVar6 = uVar6 + 1) {
          lVar2 = uVar6 * 0x20;
          FUN_180003216(&local_118,local_a8 + lVar2);
          local_63 = 1;
          FUN_180003216(local_1e0,local_a8 + lVar2);
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_148[0] = local_1c0;
          local_64 = 1;
          local_b0 = (undefined1 ***)local_1e0;
          FUN_1800b05fc(&local_f8,1,&local_b0,local_148);
          local_62 = 1;
          FUN_180003216(local_148,local_c8 + lVar2);
          local_e0 = 0;
          uStack_d8 = 0;
          local_d0 = 0;
          local_b0 = (undefined1 ***)&local_128;
          local_61 = 1;
          local_128 = local_148;
          FUN_1800b05fc(&local_e0,1,&local_128,&local_b0);
          puVar4 = (uint *)FUN_1800ad81a(&local_1a0,lVar2 + local_a8);
          if (puVar4 != &local_118) {
            FUN_180004c8c(puVar4);
            puVar4[4] = (uint)local_108;
            puVar4[5] = local_108._4_4_;
            puVar4[6] = (uint)uStack_100;
            puVar4[7] = uStack_100._4_4_;
            *puVar4 = local_118;
            puVar4[1] = uStack_114;
            puVar4[2] = uStack_110;
            puVar4[3] = uStack_10c;
            local_108 = 0;
            uStack_100 = 0xf;
            local_118 = local_118 & 0xffffff00;
            FUN_180060538(puVar4 + 8);
            *(undefined8 *)(puVar4 + 8) = local_f8;
            *(undefined8 *)(puVar4 + 10) = uStack_f0;
            *(undefined8 *)(puVar4 + 0xc) = local_e8;
            local_e8 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            FUN_180060538(puVar4 + 0xe);
            *(undefined8 *)(puVar4 + 0xe) = local_e0;
            *(undefined8 *)(puVar4 + 0x10) = uStack_d8;
            *(undefined8 *)(puVar4 + 0x12) = local_d0;
            local_d0 = 0;
            local_e0 = 0;
            uStack_d8 = 0;
          }
          FUN_180060538(&local_e0);
          FUN_180060538(&local_f8);
          FUN_180001ef2(&local_118);
          local_61 = 0;
          FUN_180001ef2(local_148);
          local_62 = 0;
          local_64 = 0;
          FUN_180001ef2(local_1e0);
          local_63 = 0;
        }
        FUN_18006b10c(&DAT_1804189d0,local_1c0);
        FUN_18006ae42(&local_1a0);
        FUN_180001ef2(local_1c0);
      }
      FUN_180001ef2(&local_88);
      FUN_180060538(&local_c8);
      FUN_180060538(&local_a8);
    }
    pcVar5 = local_90 + 0x40;
  } while( true );
}

