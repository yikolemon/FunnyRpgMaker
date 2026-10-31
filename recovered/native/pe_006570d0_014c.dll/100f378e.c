/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f378e */

void FUN_100f378e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_108 [4];
  int local_104;
  char local_fe;
  char local_fd;
  undefined4 *local_fc;
  undefined4 local_f8;
  char local_f1;
  int local_f0;
  char local_ec;
  int *local_cc;
  uint local_c4;
  undefined1 local_c0 [4];
  char local_bc;
  undefined1 *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  uint *local_ac;
  uint *local_a8;
  char *local_a4;
  int *local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint *local_94;
  uint *local_90;
  char *local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  undefined1 local_68 [12];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  char local_48;
  char local_44;
  char local_42;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint *local_34;
  char *local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_108;
  local_18 = 0xffffffff;
  local_1c = &LAB_100f56b0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_10068390();
  local_18 = 2;
  local_40 = &local_70;
  local_84 = local_fc + 1;
  local_88 = local_fc + 2;
  local_34 = &local_74;
  local_30 = &local_f1;
  local_f1 = '\0';
  local_3c = local_84;
  local_38 = local_88;
  FUN_100f45e6(&local_40);
  local_18 = 3;
  FUN_1005c810(&local_f0);
  local_18 = 0xffffffff;
  if (local_cc != (int *)0x0) {
    (**(code **)(*local_cc + 0x10))(local_cc != &local_f0);
  }
  if (local_f1 != '\0') {
    local_104 = local_70;
    local_18 = 2;
    FUN_1006adbd(&local_f0,local_fc + 3,&DAT_1033cff3);
    local_18 = 4;
    FUN_10020842(&local_40,&local_f0,local_104);
    local_18 = 0xffffffff;
    FUN_10001fee();
    local_18 = 5;
    puVar4 = &DAT_10389010;
    if (0xf < DAT_10389024) {
      puVar4 = DAT_10389010;
    }
    iVar2 = FUN_1025bc20(local_70,puVar4);
    if ((iVar2 != 0) && (FUN_100f486e(&local_f0,&local_40), local_ec == '\x01')) {
      FUN_100446d6();
      local_18 = 6;
      FUN_100e9ba6(&local_40);
      local_18 = 0xffffffff;
      FUN_1022c200(&DAT_10389028);
    }
    puVar4 = &DAT_10389010;
    if (0xf < DAT_10389024) {
      puVar4 = DAT_10389010;
    }
    local_104 = local_6c;
    iVar2 = FUN_1025bc20(local_6c,puVar4);
    if (iVar2 != 0) {
      local_f8 = *local_fc;
      local_18 = 5;
      FUN_1006adbd(&local_b8,&local_40,"(<description:");
      local_18 = 0x15;
      FUN_10020842(&local_a0,&local_b8,local_104);
      local_18 = 0x16;
      FUN_10020842(&local_f0,&local_a0,&DAT_10349613);
      local_18 = 0x17;
      FUN_100f486e(local_c0,&local_f0);
      if (local_bc == '\x01') {
        FUN_100446d6();
        local_18 = 0x18;
        FUN_100e9ba6(&local_f0);
        local_18 = 0xffffffff;
        FUN_1022c200(&DAT_10389028);
      }
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_10001fee();
      FUN_10001fee();
    }
    local_c4 = 0;
    while ((local_c4 < local_74 && (DAT_1039d545 == '\0'))) {
      local_fd = '\0';
      local_a0 = &local_7c;
      local_9c = local_84;
      local_98 = local_88;
      local_94 = &local_c4;
      local_90 = &local_78;
      local_8c = &local_fd;
      local_18 = 5;
      FUN_100f4690(&local_a0);
      local_18 = 0x14;
      FUN_1005c810(&local_f0);
      local_18 = 0xffffffff;
      if (local_cc != (int *)0x0) {
        (**(code **)(*local_cc + 0x10))(local_cc != &local_f0);
      }
      if (local_fd != '\0') {
        local_104 = local_7c;
        local_18 = 5;
        FUN_1006adbd(&local_f0,&local_40,&DAT_1033cff3);
        local_18 = 7;
        FUN_10020842(&local_a0,&local_f0,local_104);
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 8;
        puVar4 = &DAT_10389010;
        if (0xf < DAT_10389024) {
          puVar4 = DAT_10389010;
        }
        iVar2 = FUN_1025bc20(local_7c,puVar4);
        if ((iVar2 != 0) && (FUN_100f486e(&local_f0,&local_a0), local_ec == '\x01')) {
          FUN_100446d6();
          local_18 = 9;
          FUN_100e9ba6(&local_a0);
          local_18 = 0xffffffff;
          FUN_1022c200(&DAT_10389028);
        }
        local_80 = 0;
        while ((local_80 < local_78 && (DAT_1039d545 == '\0'))) {
          local_fe = '\0';
          local_b8 = local_68;
          local_b4 = local_84;
          local_b0 = local_88;
          local_ac = &local_c4;
          local_a8 = &local_80;
          local_a4 = &local_fe;
          local_18 = 8;
          FUN_100f473e(&local_b8);
          local_18 = 10;
          FUN_1005c810(&local_f0);
          local_18 = 0xffffffff;
          if (local_cc != (int *)0x0) {
            (**(code **)(*local_cc + 0x10))(local_cc != &local_f0);
          }
          if (local_fe != '\0') {
            local_104 = local_5c;
            if (local_5c != 0) {
              puVar4 = &DAT_10389010;
              if (0xf < DAT_10389024) {
                puVar4 = DAT_10389010;
              }
              iVar2 = FUN_1025bc20(local_5c,puVar4);
              if (iVar2 != 0) {
                local_f8 = *local_fc;
                local_18 = 8;
                FUN_1006adbd(&local_b8,&local_a0,&DAT_1033cff3);
                local_18 = 0xb;
                FUN_10020842(&local_f0,&local_b8,local_104);
                local_18 = 0xc;
                FUN_100f486e(local_c0,&local_f0);
                if (local_bc == '\x01') {
                  FUN_100446d6();
                  local_18 = 0xd;
                  FUN_100e9ba6(&local_f0);
                  local_18 = 0xffffffff;
                  FUN_1022c200(&DAT_10389028);
                }
                local_18 = 0xffffffff;
                FUN_10001fee();
                FUN_10001fee();
              }
            }
            if (local_44 == '\x01') {
              puVar4 = &DAT_10389010;
              if (0xf < DAT_10389024) {
                puVar4 = DAT_10389010;
              }
              local_104 = local_58;
              iVar2 = FUN_1025bc20(local_58,puVar4);
              if (iVar2 != 0) {
                local_f8 = *local_fc;
                local_18 = 8;
                FUN_1006adbd(&local_b8,&local_a0,&DAT_1033cff3);
                local_18 = 0xe;
                FUN_10020842(&local_f0,&local_b8,local_104);
                local_18 = 0xf;
                FUN_100f486e(local_c0,&local_f0);
                if (local_bc == '\x01') {
                  FUN_100446d6();
                  local_18 = 0x10;
                  FUN_100e9ba6(&local_f0);
                  local_18 = 0xffffffff;
                  FUN_1022c200(&DAT_10389028);
                }
                local_18 = 0xffffffff;
                FUN_10001fee();
                FUN_10001fee();
              }
            }
            else if ((local_42 == '\x01') && (local_48 != '\0')) {
              iVar2 = *(int *)(local_50 + 4);
              cVar1 = *(char *)(iVar2 + 0xd);
              iVar3 = local_50;
              while (cVar1 == '\0') {
                if (local_54 <= *(int *)(iVar2 + 0x10)) {
                  iVar3 = iVar2;
                }
                iVar2 = *(int *)(iVar2 + (uint)(*(int *)(iVar2 + 0x10) < local_54) * 8);
                cVar1 = *(char *)(iVar2 + 0xd);
              }
              if ((*(char *)(iVar3 + 0xd) == '\0') && (*(int *)(iVar3 + 0x10) <= local_54)) {
                local_18 = 8;
                FUN_100ee234(&local_f0,&local_54);
                local_104 = *(int *)(local_f0 + 0x14);
                puVar4 = &DAT_10389010;
                if (0xf < DAT_10389024) {
                  puVar4 = DAT_10389010;
                }
                iVar2 = FUN_1025bc20(local_104,puVar4);
                if (iVar2 != 0) {
                  local_f8 = *local_fc;
                  FUN_1006adbd(&local_b8,&local_a0,&DAT_1033cff3);
                  local_18 = 0x11;
                  FUN_10020842(&local_f0,&local_b8,local_104);
                  local_18 = 0x12;
                  FUN_100f486e(local_c0,&local_f0);
                  if (local_bc == '\x01') {
                    FUN_100446d6();
                    local_18 = 0x13;
                    FUN_100e9ba6(&local_f0);
                    local_18 = 0xffffffff;
                    FUN_1022c200(&DAT_10389028);
                  }
                  local_18 = 0xffffffff;
                  FUN_10001fee();
                  FUN_10001fee();
                }
              }
            }
          }
          local_80 = local_80 + 1;
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      local_c4 = local_c4 + 1;
    }
    local_18 = 0xffffffff;
    FUN_10001fee();
  }
  local_18 = 0xffffffff;
  FUN_100683f4();
  ExceptionList = local_20;
  return;
}

