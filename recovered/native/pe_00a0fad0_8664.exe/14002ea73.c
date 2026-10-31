/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002ea73 */

undefined8 FUN_14002ea73(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_368 [64];
  undefined1 local_328 [64];
  undefined1 local_2e8 [64];
  undefined1 local_2a8 [64];
  undefined1 local_268 [64];
  undefined1 local_228 [64];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_79;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_4b;
  char local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xf;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  local_88 = param_1;
  do {
    if (lVar6 == lVar1) {
      FUN_140030038(local_88,&local_e8,&local_c8,&local_a8);
      FUN_1400017de(&local_a8);
      FUN_14000eeca(&local_c8);
      FUN_14000eeca(&local_e8);
      return local_88;
    }
    FUN_140006874(&local_78,lVar6);
    uVar2 = CONCAT44(uStack_64,local_68);
    if (uVar2 != 0) {
      if (uVar2 == 1) {
LAB_14002ebb6:
        local_4b = '\0';
        cVar4 = '\0';
      }
      else {
        puVar5 = &local_78;
        if (0xf < CONCAT44(uStack_5c,uStack_60)) {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
        }
        if ((char)*puVar5 == '-') {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
          if (CONCAT44(uStack_5c,uStack_60) < 0x10) {
            puVar5 = &local_78;
          }
          if (*(char *)((longlong)puVar5 + 1) != '-') {
            if (uVar2 != 2) {
LAB_14002ef74:
              FUN_140006874(local_1e8,&local_78);
              FUN_14002f4d6(local_368,local_1e8);
                    /* WARNING: Subroutine does not return */
              FUN_140106270(local_368,&DAT_14017a4b8);
            }
            cVar4 = FUN_14002f4c6();
            if (cVar4 == '\0') {
              if (CONCAT44(uStack_64,local_68) < 3) {
                FUN_140006874(local_1c8,&local_78);
                FUN_14002f6c8(local_328,local_1c8);
                    /* WARNING: Subroutine does not return */
                FUN_140106270(local_328,&DAT_14017a4b8);
              }
              goto LAB_14002ef74;
            }
            puVar5 = (uint *)CONCAT44(uStack_74,local_78);
            if (CONCAT44(uStack_5c,uStack_60) < 0x10) {
              puVar5 = &local_78;
            }
            local_108 = 1;
            FUN_14002f9a2(&local_e8,&local_108,(longlong)puVar5 + 1);
            goto LAB_14002ee00;
          }
        }
        if (uVar2 < 3) goto LAB_14002ebb6;
        local_49 = 1;
        FUN_1400191d4(local_128,&local_78,0,2,&local_108);
        local_4a = 1;
        local_4b = 0;
        cVar4 = FUN_14000d7b8(local_128,&DAT_140171466);
        local_4b = '\x01';
      }
      local_4a = local_4b;
      if (local_4b != '\0') {
        FUN_1400017de(local_128);
      }
      if (cVar4 == '\0') {
        cVar4 = FUN_14000d7b8(&local_78,&DAT_140171467);
        if ((cVar4 != '\0') || (cVar4 = FUN_14000d7b8(&local_78,&DAT_140171466), cVar4 != '\0')) {
          FUN_140006874(local_188,&local_78);
          FUN_14002f7ec(local_2a8,local_188);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_2a8,&DAT_14017a4b8);
        }
        if (local_98 != 0) {
          FUN_140006874(local_168,&local_78);
          FUN_14002f87e(local_268,local_168);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_268,&DAT_14017a4b8);
        }
        if (CONCAT44(uStack_64,local_68) == 0) {
LAB_14002eeaf:
          FUN_140006874(local_148,&local_78);
          FUN_14002f910(local_228,local_148);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_228,&DAT_14017a4b8);
        }
        puVar5 = &local_78;
        if (0xf < CONCAT44(uStack_5c,uStack_60)) {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
        }
        cVar4 = FUN_14002f4c6((char)*puVar5);
        if (cVar4 == '\0') goto LAB_14002eeaf;
        puVar5 = &local_78;
        if (0xf < CONCAT44(uStack_5c,uStack_60)) {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
        }
        lVar3 = CONCAT44(uStack_64,local_68);
        lVar7 = 1;
        while (lVar3 != lVar7) {
          cVar4 = FUN_140030014(*(char *)((longlong)puVar5 + lVar7));
          lVar7 = lVar7 + 1;
          if (cVar4 == '\0') goto LAB_14002eeaf;
        }
        puVar5 = &local_78;
        if (0xf < CONCAT44(uStack_5c,uStack_60)) {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
        }
        FUN_140017200(&local_a8,puVar5,CONCAT44(uStack_64,local_68));
      }
      else {
        FUN_1400191d4(&local_108,&local_78,2,0xffffffffffffffff,&local_79);
        FUN_1400065bc(&local_78);
        local_68 = (undefined4)local_f8;
        uStack_64 = local_f8._4_4_;
        uStack_60 = (undefined4)uStack_f0;
        uStack_5c = uStack_f0._4_4_;
        local_78 = local_108;
        uStack_74 = uStack_104;
        uStack_70 = uStack_100;
        uStack_6c = uStack_fc;
        local_f8 = 0;
        uStack_f0 = 0xf;
        local_108 = local_108 & 0xffffff00;
        FUN_1400017de(&local_108);
        if (CONCAT44(uStack_64,local_68) == 0) {
LAB_14002ee74:
          FUN_140006874(local_1a8,&local_78);
          FUN_14002f75a(local_2e8,local_1a8);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_2e8,&DAT_14017a4b8);
        }
        puVar5 = &local_78;
        if (0xf < CONCAT44(uStack_5c,uStack_60)) {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
        }
        cVar4 = FUN_14002f4c6((char)*puVar5);
        if (cVar4 == '\0') goto LAB_14002ee74;
        puVar5 = &local_78;
        if (0xf < CONCAT44(uStack_5c,uStack_60)) {
          puVar5 = (uint *)CONCAT44(uStack_74,local_78);
        }
        lVar3 = CONCAT44(uStack_64,local_68);
        lVar7 = 1;
        while (lVar3 != lVar7) {
          cVar4 = FUN_140030014(*(char *)((longlong)puVar5 + lVar7));
          lVar7 = lVar7 + 1;
          if (cVar4 == '\0') goto LAB_14002ee74;
        }
        FUN_14000d086(&local_c8,&local_78);
      }
    }
LAB_14002ee00:
    FUN_1400017de(&local_78);
    lVar6 = lVar6 + 0x20;
  } while( true );
}

