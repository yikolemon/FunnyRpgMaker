/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e7696 */

void __thiscall FUN_100e7696(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 *local_124 [6];
  undefined1 local_10c [16];
  int local_fc;
  char *local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_80 [6];
  undefined1 **local_68;
  char *local_64;
  int local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined1 ***local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_16c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eace0;
  local_1c = ExceptionList;
  local_60 = param_1 + 0x5c;
  ExceptionList = &local_1c;
  local_2c = param_1;
  FUN_100446d6();
  local_14 = 7;
  FUN_1006a522();
  if (*param_2 == '\x02') {
    local_16c = param_2;
    local_168 = 0;
    local_160 = 0x80000000;
    local_164 = **(undefined4 **)(param_2 + 8);
    local_c4 = param_2;
    uStack_c0 = 0;
    uStack_b8 = 0x80000000;
    uStack_bc = (*(undefined4 **)(param_2 + 8))[1];
    while (cVar1 = FUN_10051c02(&local_c4), cVar1 == '\0') {
      pcVar2 = (char *)FUN_100dc366();
      if (*pcVar2 == '\x01') {
        FUN_100e7e02(local_10c,local_5c & 0xff);
        local_14 = 0xc;
        FUN_1006b168(local_10c);
        local_14 = 0xffffffff;
        FUN_1006ae4c();
        FUN_10001fee();
      }
      local_14 = 7;
      FUN_10051ba0();
    }
  }
  else if (*param_2 == '\x01') {
    local_c4 = (char *)0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    local_b4 = 0;
    local_b0 = 0xf;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_14 = 10;
    FUN_1002218a();
    local_14 = 0xd;
    local_64 = param_2;
    FUN_100dba9a(local_10c);
    local_14 = 0xe;
    FUN_100dbb2e(&local_16c);
    local_14 = 0xf;
    while (cVar1 = FUN_10051c02(&local_16c), cVar1 == '\0') {
      pcVar2 = (char *)FUN_100dc366();
      if (*pcVar2 == '\x03') {
        uVar3 = FUN_100dc1e0();
        FUN_1000334a(uVar3);
        local_23 = 1;
        local_14 = 0x11;
        uVar3 = FUN_100dc1e0();
        FUN_1000334a(uVar3);
        local_14 = 0x13;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_80[0] = local_10c;
        local_28 = (undefined1 ***)local_124;
        local_24 = 1;
        FUN_100abf8c(1,&local_28,local_80);
        local_22 = 1;
        local_14 = 0x15;
        FUN_100dc366();
        FUN_100173ea(local_80,(uint)local_28 & 0xff);
        local_14 = 0x17;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_28 = &local_68;
        local_68 = local_80;
        local_21 = 1;
        FUN_100abf8c(1,&local_68,&local_28);
        local_14 = 0x19;
        uVar3 = FUN_100dc1e0();
        puVar4 = (uint *)FUN_100a9370(uVar3);
        if (puVar4 != &local_5c) {
          FUN_10004e60();
          *(ulonglong *)(puVar4 + 4) = CONCAT44(uStack_48,local_4c);
          *puVar4 = local_5c;
          puVar4[1] = uStack_58;
          puVar4[2] = uStack_54;
          puVar4[3] = uStack_50;
          local_4c = 0;
          uStack_48 = 0xf;
          local_5c = local_5c & 0xffffff00;
          FUN_10060b3c();
          puVar4[6] = local_44;
          puVar4[7] = local_40;
          puVar4[8] = local_3c;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          FUN_10060b3c();
          puVar4[9] = local_38;
          puVar4[10] = local_34;
          puVar4[0xb] = local_30;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
        }
        local_14 = 0xffffffff;
        FUN_10060b3c();
        FUN_10060b3c();
        FUN_10001fee();
        local_21 = 0;
        local_14 = 0x16;
        FUN_10001fee();
        local_22 = 0;
        local_24 = 0;
        local_14 = 0x12;
        FUN_10001fee();
        local_23 = 0;
      }
      local_14 = 0xf;
      FUN_10051ba0();
      local_fc = local_fc + 1;
    }
    local_14 = 0xffffffff;
    FUN_100dbbc6();
    FUN_100dbbc6();
    local_14 = 0xd;
    FUN_1006b168(&local_c4);
    local_14 = 0xffffffff;
    FUN_1006ae4c();
    FUN_10001fee();
  }
  local_14 = 0xffffffff;
  FUN_1022c200(local_60);
  ExceptionList = local_1c;
  return;
}

