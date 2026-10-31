/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015e79a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1015e79a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  int local_12c;
  char *local_128;
  char *local_124;
  undefined4 local_11c;
  int local_118;
  undefined4 *local_114;
  undefined4 *local_110;
  int local_10c;
  char *local_108;
  char *local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e4;
  int local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  char *local_c4;
  undefined4 uStack_c0;
  char *local_bc;
  undefined4 uStack_b8;
  undefined1 local_b4 [24];
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70 [24];
  undefined1 local_58 [48];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_150;
  local_18 = 0xffffffff;
  local_1c = &LAB_1015f5d0;
  local_20 = ExceptionList;
  DAT_1039d2f0 = 0.5;
  local_110 = *(undefined4 **)(param_1 + 4);
  local_114 = *(undefined4 **)(param_1 + 8);
  ExceptionList = &local_20;
  local_118 = param_1;
  while( true ) {
    if (local_110 == local_114) {
      DAT_1039d2ed = 1;
      ExceptionList = local_20;
      return;
    }
    local_11c = *local_110;
    FUN_10001f66("(function () { var loadData = ");
    local_18 = 2;
    _strlen(PTR_DAT_10389fc0);
    FUN_1000347e();
    local_bc = "Map{:03d}.json";
    uStack_b8 = 0xe;
    FUN_1000589a(local_58,0xe10335cd8,&local_11c);
    local_18 = 3;
    FUN_1000347e();
    FUN_1006adbd(local_70,local_58,&DAT_1034a79b);
    local_18 = 0x14;
    puVar1 = (undefined4 *)FUN_1000347e();
    local_140 = *(undefined8 *)(puVar1 + 4);
    local_150 = (char *)*puVar1;
    uStack_14c = puVar1[1];
    uStack_148 = puVar1[2];
    uStack_144 = puVar1[3];
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    local_18 = 0x15;
    FUN_10020842(local_b4,&local_150,"\");\n})();");
    local_18 = 0x16;
    FUN_1000347e();
    local_18 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
    FUN_10001fee();
    local_18 = 3;
    FUN_100145e4();
    local_18 = 4;
    if (local_70[0] == '\0') {
      iVar2 = 3;
    }
    else if (local_70[0] == '\x01') {
      local_c4 = "dataMap/{:03d}";
      uStack_c0 = 0xe;
      FUN_1000589a(local_b4,0xe1032fbb1,&local_11c);
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      local_18 = 0x12;
      FUN_1002218a();
      local_18 = 5;
      local_150 = "events";
      uStack_14c = 6;
      FUN_100d8f98(&local_150);
      local_10c = local_d4;
      iVar2 = local_d8;
      while (iVar2 != local_10c) {
        local_128 = "name";
        local_124 = (char *)0x4;
        local_18 = 6;
        local_12c = iVar2;
        FUN_100db8d0(&local_128);
        local_18 = 0xe;
        FUN_1015d38a();
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_150 = "pages";
        uStack_14c = 5;
        local_18 = 6;
        FUN_100d8f98(&local_150);
        local_108 = local_124;
        pcVar3 = local_128;
        while (pcVar3 != local_108) {
          local_150 = "list";
          uStack_14c = 4;
          local_18 = 7;
          local_104 = pcVar3;
          FUN_100d8f98(&local_150);
          local_100 = local_e0;
          iVar2 = local_e4;
          while (iVar2 != local_100) {
            local_150 = "parameters";
            uStack_14c = 10;
            local_18 = 8;
            local_fc = iVar2;
            FUN_100d8f98(&local_150);
            local_f8 = local_ec;
            iVar2 = local_f0;
            while (iVar2 != local_f8) {
              local_cc = 0;
              local_c8 = 0;
              local_18 = 9;
              local_f4 = iVar2;
              FUN_100db8d0(&local_cc);
              local_18 = 10;
              FUN_1015d38a();
              local_18 = 0xffffffff;
              FUN_10001fee();
              iVar2 = local_f4 + 0x10;
            }
            local_18 = 0xffffffff;
            FUN_100171ce();
            iVar2 = local_fc + 0x10;
          }
          local_18 = 0xffffffff;
          FUN_100171ce();
          pcVar3 = local_104 + 0x10;
        }
        local_18 = 0xffffffff;
        FUN_100171ce();
        iVar2 = local_12c + 0x10;
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 5;
      FUN_1006b168(local_b4);
      DAT_1039d2f0 = (float)((double)DAT_1039d2f0 +
                            DAT_102b96d8 /
                            ((double)((ulonglong)
                                      (uint)(*(int *)(local_118 + 8) - *(int *)(local_118 + 4) >> 2)
                                     | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0));
      local_18 = 0xffffffff;
      FUN_1006ae4c();
      FUN_10001fee();
      iVar2 = 0;
    }
    else {
      FUN_1015d782();
      iVar2 = 1;
    }
    local_18 = 0xffffffff;
    FUN_10013efc();
    FUN_10001fee();
    FUN_10001fee();
    if ((iVar2 != 3) && (iVar2 != 0)) break;
    local_110 = local_110 + 1;
  }
  ExceptionList = local_20;
  return;
}

