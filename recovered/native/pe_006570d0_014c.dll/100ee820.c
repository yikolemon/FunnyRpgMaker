/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee820 */

void FUN_100ee820(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  size_t sVar8;
  undefined4 ****ppppuVar9;
  float10 fVar10;
  undefined1 auStack_120 [12];
  float local_114;
  undefined4 *local_110;
  int *local_10c;
  float local_108;
  int local_104;
  undefined4 ***local_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  uint uStack_ec;
  int local_e8;
  undefined4 *local_e4;
  undefined4 ***local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 ***local_c4 [5];
  uint local_b0;
  undefined1 local_ac [12];
  undefined4 local_a0;
  char *local_9c;
  float local_98;
  undefined4 *local_94;
  char local_8c;
  char local_88;
  char local_86;
  char local_85;
  undefined4 *local_84;
  float local_80;
  float local_7c;
  char *local_78;
  undefined4 uStack_74;
  char *local_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_120;
  local_18 = 0xffffffff;
  local_1c = &LAB_100f5240;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100fbc78();
  local_18 = 1;
  fVar10 = (float10)FUN_10111f20();
  local_114 = (float)fVar10;
  local_7c = local_114;
  iVar4 = FUN_100fcb2d();
  local_108 = *(float *)(iVar4 + 0x50);
  iVar4 = FUN_100fcb2d();
  local_10c = *(int **)(iVar4 + 0x70);
  uVar5 = FUN_1005c518(DAT_1038900c,*(undefined4 *)*local_110);
  FUN_100fbd22(uVar5,(float)local_10c + (float)local_10c + local_108 + local_108 + local_114);
  while (cVar3 = FUN_100fc2ca(), iVar4 = local_58, cVar3 != '\0') {
    while (local_104 = iVar4, iVar4 < local_54) {
      local_18 = 1;
      FUN_1005c2a2(local_ac,DAT_1038900c,*(undefined4 *)*local_110,*(undefined4 *)local_110[1],iVar4
                  );
      local_18 = 2;
      FUN_10165364(0,0);
      FUN_10165606(0);
      FUN_1012d079(local_a0,0);
      FUN_10165606(1);
      FUN_1010c3e4(local_c4);
      FUN_100fb68f(local_c4[0]);
      local_60 = &DAT_1032f6da;
      uStack_5c = 4;
      FUN_1000589a(local_c4,&DAT_1032f6da,4,&local_104);
      local_18 = 4;
      if (local_86 == '\x01') {
        if (local_8c == '\x01') {
          local_e8 = 0;
          if (local_85 == '\x01') {
            local_e8 = ((int)local_98 / 10000) * 10000;
            local_98 = (float)((int)local_98 % 10000);
          }
          local_e0 = (undefined4 ***)0x0;
          fStack_dc = 0.0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          local_d0 = 0xf00000000;
          puVar1 = (undefined4 *)local_94[1];
          cVar3 = *(char *)((int)puVar1 + 0xd);
          puVar6 = local_94;
          while (cVar3 == '\0') {
            if ((int)local_98 <= (int)puVar1[4]) {
              puVar6 = puVar1;
            }
            puVar1 = (undefined4 *)puVar1[(uint)((int)puVar1[4] < (int)local_98) * 2];
            cVar3 = *(char *)((int)puVar1 + 0xd);
          }
          if ((*(char *)((int)puVar6 + 0xd) == '\0') &&
             (local_18 = 5, (int)puVar6[4] <= (int)local_98)) {
            uVar5 = FUN_10079ee6(&local_98);
            local_68 = "[{}]:{}";
            uStack_64 = 7;
            FUN_100ee572(&local_100,"[{}]:{}",7,&local_98,uVar5);
            local_18 = 8;
            FUN_10004e60();
            local_d0 = CONCAT44(uStack_ec,local_f0);
            local_e0 = local_100;
            fStack_dc = fStack_fc;
            uStack_d8 = uStack_f8;
            uStack_d4 = uStack_f4;
            local_f0 = 0;
            uStack_ec = 0xf;
            local_100 = (undefined4 ***)((uint)local_100 & 0xffffff00);
            local_18 = 0xffffffff;
            FUN_10001fee();
          }
          else {
            local_70 = "[{}]";
            uStack_6c = 4;
            local_18 = 5;
            FUN_1000589a(&local_100,"[{}]",4,&local_98);
            local_18 = 7;
            FUN_10004e60();
            local_d0 = CONCAT44(uStack_ec,local_f0);
            local_e0 = local_100;
            fStack_dc = fStack_fc;
            uStack_d8 = uStack_f8;
            uStack_d4 = uStack_f4;
            local_f0 = 0;
            uStack_ec = 0xf;
            local_100 = (undefined4 ***)((uint)local_100 & 0xffffff00);
            local_18 = 0xffffffff;
            FUN_10001fee();
          }
          ppppuVar7 = &local_e0;
          if (0xf < local_d0._4_4_) {
            ppppuVar7 = (undefined4 ****)local_e0;
          }
          ppppuVar9 = local_c4;
          if (0xf < local_b0) {
            ppppuVar9 = (undefined4 ****)local_c4[0];
          }
          local_18 = 5;
          cVar3 = FUN_10132c48(ppppuVar9,ppppuVar7,0);
          if (cVar3 != '\0') {
            local_84 = local_94;
            local_e4 = (undefined4 *)*local_94;
            while (local_18 = 5, local_e4 != local_84) {
              local_10c = local_e4 + 4;
              local_114 = (float)local_e4[4];
              local_108 = local_98;
              local_78 = "[{}]:{}";
              uStack_74 = 7;
              FUN_100ee572(&local_100,"[{}]:{}",7,local_10c,local_e4 + 5);
              local_18 = 6;
              ppppuVar7 = &local_100;
              if (0xf < uStack_ec) {
                ppppuVar7 = (undefined4 ****)local_100;
              }
              cVar3 = FUN_1015669c(*local_10c,ppppuVar7,local_114 == local_108,0,0);
              local_18 = 0xffffffff;
              FUN_10001fee();
              if (cVar3 != '\0') {
                local_18 = 5;
                FUN_1005c89c(DAT_1038900c,*(undefined4 *)*local_110,*(undefined4 *)local_110[1],
                             local_104,*local_10c + local_e8,&DAT_10356101);
              }
              if (local_114 == local_108) {
                local_18 = 5;
                FUN_1011262c();
              }
              FUN_10016fb8();
            }
            FUN_101334a7();
          }
          local_18 = 0xffffffff;
          FUN_10001fee();
        }
        else {
          ppppuVar7 = local_c4;
          if (0xf < local_b0) {
            ppppuVar7 = (undefined4 ****)local_c4[0];
          }
          cVar3 = FUN_1013838a(ppppuVar7,&local_98,0x3f800000,0,0,&DAT_1033b386,0);
          if (cVar3 != '\0') {
            FUN_1005c89c(DAT_1038900c,*(undefined4 *)*local_110,*(undefined4 *)local_110[1],
                         local_104,local_98,&DAT_10356101);
          }
        }
      }
      else if (local_88 == '\x01') {
        if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
             DAT_1039d5b4) && (FUN_1022c0d0(&DAT_1039d5b4), DAT_1039d5b4 == -1)) {
          local_18 = 9;
          FUN_1022c3a0(&LAB_100ef088);
          local_18 = 0xffffffff;
          FUN_1022c180(&DAT_1039d5b4);
        }
        pcVar2 = local_9c;
        sVar8 = _strlen(local_9c);
        local_18 = 4;
        FUN_100180a6(pcVar2,sVar8);
        fVar10 = (float10)FUN_10111f20();
        local_114 = (float)fVar10;
        local_80 = local_114;
        iVar4 = FUN_100fcb2d();
        fStack_dc = *(float *)(iVar4 + 0x50) + *(float *)(iVar4 + 0x50) + local_114;
        local_e0 = (undefined4 ****)0x0;
        ppppuVar7 = local_c4;
        if (0xf < local_b0) {
          ppppuVar7 = (undefined4 ****)local_c4[0];
        }
        FUN_1015f736(ppppuVar7,&DAT_10389278,&local_e0,0x200,0,0);
      }
      local_18 = 0xffffffff;
      FUN_10001fee();
      local_18 = 0xffffffff;
      FUN_100683f4();
      iVar4 = local_104 + 1;
    }
    local_18 = 1;
  }
  local_18 = 0xffffffff;
  thunk_FUN_100fbc90();
  ExceptionList = local_20;
  return;
}

