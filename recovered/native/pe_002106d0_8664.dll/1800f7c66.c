/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7c66 */

void FUN_1800f7c66(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_198 [32];
  undefined8 local_178 [2];
  longlong local_168;
  undefined8 local_160;
  int local_158 [2];
  longlong local_150 [2];
  char local_140;
  char local_138;
  char local_136;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined1 local_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  char *local_b0;
  undefined1 local_a8 [8];
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_60;
  undefined8 *local_58;
  char local_4b;
  char local_4a;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  local_58 = param_1;
  FUN_180068018(local_150);
  local_b8 = (ulonglong *)&local_4b;
  local_4b = '\0';
  local_d8 = &local_130;
  puVar1 = local_58 + 1;
  puVar6 = local_58 + 2;
  local_c0 = &local_120;
  local_d0 = puVar1;
  local_c8 = puVar6;
  FUN_1800f8b72(&local_98);
  FUN_18005ba34(&local_98);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60,local_60 != &local_98);
  }
  uVar3 = local_130;
  if (local_4b != '\0') {
    FUN_18006add7(&local_98,local_58 + 3,&DAT_18036d112);
    FUN_180020b6a(local_198,&local_98,uVar3);
    FUN_180001ef2(&local_98);
    puVar7 = DAT_180402ab0;
    if (DAT_180402ac8 < 0x10) {
      puVar7 = &DAT_180402ab0;
    }
    lVar4 = FUN_18026ee50(local_130,puVar7);
    if ((lVar4 != 0) &&
       (FUN_1800f8e24(*(undefined8 *)*local_58,&local_98,local_198), local_90 == '\x01')) {
      FUN_180044980(&DAT_180402ad0);
      FUN_1800ee45a(&DAT_180418d50,local_198);
      FUN_18023d6e0(&DAT_180402ad0);
    }
    puVar7 = DAT_180402ab0;
    if (DAT_180402ac8 < 0x10) {
      puVar7 = &DAT_180402ab0;
    }
    lVar4 = FUN_18026ee50(local_128,puVar7);
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)*local_58;
      FUN_18006add7(local_108,local_198,"(<description:");
      FUN_180020b6a(&local_d8,local_108,local_128);
      FUN_180020b6a(&local_98,&local_d8,&DAT_180379732);
      FUN_1800f8e24(*puVar7,local_a8,&local_98);
      if (local_a0 == '\x01') {
        FUN_180044980(&DAT_180402ad0);
        FUN_1800ee45a(&DAT_180418d50,&local_98);
        FUN_18023d6e0(&DAT_180402ad0);
      }
      FUN_180001ef2(&local_98);
      FUN_180001ef2(&local_d8);
      FUN_180001ef2(local_108);
    }
    local_e8 = 0;
    while ((local_e8 < local_120 && (DAT_180418d49 == '\0'))) {
      local_4a = '\0';
      local_d8 = &local_110;
      local_b8 = &local_118;
      local_b0 = &local_4a;
      local_d0 = puVar1;
      local_c8 = puVar6;
      local_c0 = &local_e8;
      FUN_1800f8c14(&local_98,&local_d8);
      FUN_18005ba34(&local_98);
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 0x20))(local_60,local_60 != &local_98);
      }
      uVar3 = local_110;
      if (local_4a != '\0') {
        FUN_18006add7(&local_98,local_198,&DAT_18036d112);
        FUN_180020b6a(local_108,&local_98,uVar3);
        FUN_180001ef2(&local_98);
        puVar7 = &DAT_180402ab0;
        if (0xf < DAT_180402ac8) {
          puVar7 = DAT_180402ab0;
        }
        lVar4 = FUN_18026ee50(local_110,puVar7);
        if ((lVar4 != 0) &&
           (FUN_1800f8e24(*(undefined8 *)*local_58,&local_98,local_108), local_90 == '\x01')) {
          FUN_180044980(&DAT_180402ad0);
          FUN_1800ee45a(&DAT_180418d50,local_108);
          FUN_18023d6e0(&DAT_180402ad0);
        }
        local_e0 = 0;
        while ((local_e0 < local_118 && (DAT_180418d49 == '\0'))) {
          local_49[0] = '\0';
          local_d8 = local_178;
          local_b8 = &local_e0;
          local_d0 = puVar1;
          local_c8 = puVar6;
          local_c0 = &local_e8;
          local_b0 = local_49;
          FUN_1800f8cb6(&local_98,&local_d8);
          FUN_18005ba34(&local_98);
          if (local_60 != (longlong *)0x0) {
            (**(code **)(*local_60 + 0x20))(local_60,local_60 != &local_98);
          }
          lVar4 = local_168;
          if (local_49[0] != '\0') {
            if (local_168 != 0) {
              puVar7 = &DAT_180402ab0;
              if (0xf < DAT_180402ac8) {
                puVar7 = DAT_180402ab0;
              }
              lVar5 = FUN_18026ee50(local_168,puVar7);
              if (lVar5 != 0) {
                puVar7 = (undefined8 *)*local_58;
                FUN_18006add7(&local_d8,local_108,&DAT_18036d112);
                FUN_180020b6a(&local_98,&local_d8,lVar4);
                FUN_1800f8e24(*puVar7,local_a8,&local_98);
                if (local_a0 == '\x01') {
                  FUN_180044980(&DAT_180402ad0);
                  FUN_1800ee45a(&DAT_180418d50,&local_98);
                  FUN_18023d6e0(&DAT_180402ad0);
                }
                FUN_180001ef2(&local_98);
                FUN_180001ef2(&local_d8);
              }
            }
            uVar3 = local_160;
            if (local_138 == '\x01') {
              puVar7 = &DAT_180402ab0;
              if (0xf < DAT_180402ac8) {
                puVar7 = DAT_180402ab0;
              }
              lVar4 = FUN_18026ee50(local_160,puVar7);
              if (lVar4 != 0) {
                puVar7 = (undefined8 *)*local_58;
                FUN_18006add7(&local_d8,local_108,&DAT_18036d112);
                FUN_180020b6a(&local_98,&local_d8,uVar3);
                FUN_1800f8e24(*puVar7,local_a8,&local_98);
                if (local_a0 == '\x01') {
                  FUN_180044980(&DAT_180402ad0);
                  FUN_1800ee45a(&DAT_180418d50,&local_98);
                  FUN_18023d6e0(&DAT_180402ad0);
                }
                FUN_180001ef2(&local_98);
                FUN_180001ef2(&local_d8);
              }
            }
            else if ((local_136 == '\x01') && (local_140 != '\0')) {
              lVar4 = *(longlong *)(local_150[0] + 8);
              cVar2 = *(char *)(lVar4 + 0x19);
              lVar5 = local_150[0];
              while (cVar2 == '\0') {
                if (local_158[0] <= *(int *)(lVar4 + 0x20)) {
                  lVar5 = lVar4;
                }
                lVar4 = *(longlong *)
                         (lVar4 + (ulonglong)(*(int *)(lVar4 + 0x20) < local_158[0]) * 0x10);
                cVar2 = *(char *)(lVar4 + 0x19);
              }
              if ((*(char *)(lVar5 + 0x19) == '\0') && (*(int *)(lVar5 + 0x20) <= local_158[0])) {
                FUN_1800f919c(local_150,&local_98,local_158);
                puVar7 = &DAT_180402ab0;
                if (0xf < DAT_180402ac8) {
                  puVar7 = DAT_180402ab0;
                }
                uVar3 = *(undefined8 *)(local_98 + 0x28);
                lVar4 = FUN_18026ee50(uVar3,puVar7);
                if (lVar4 != 0) {
                  puVar7 = (undefined8 *)*local_58;
                  FUN_18006add7(&local_d8,local_108,&DAT_18036d112);
                  FUN_180020b6a(&local_98,&local_d8,uVar3);
                  FUN_1800f8e24(*puVar7,local_a8,&local_98);
                  if (local_a0 == '\x01') {
                    FUN_180044980(&DAT_180402ad0);
                    FUN_1800ee45a(&DAT_180418d50,&local_98);
                    FUN_18023d6e0(&DAT_180402ad0);
                  }
                  FUN_180001ef2(&local_98);
                  FUN_180001ef2(&local_d8);
                }
              }
            }
          }
          local_e0 = local_e0 + 1;
        }
        FUN_180001ef2(local_108);
      }
      local_e8 = local_e8 + 1;
    }
    FUN_180001ef2(local_198);
  }
  FUN_180068060(local_150);
  return;
}

