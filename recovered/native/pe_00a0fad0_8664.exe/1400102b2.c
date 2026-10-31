/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400102b2 */

undefined8 *
FUN_1400102b2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 local_168 [32];
  undefined1 local_148 [16];
  longlong local_138;
  undefined1 local_128 [16];
  longlong local_118;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = CLI::App::vftable;
  local_108 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  local_100 = param_1 + 5;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  *(undefined2 *)(param_1 + 9) = 0x100;
  local_f0 = param_1 + 10;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
  local_e8 = param_1 + 0x12;
  param_1[0x19] = 0;
  local_e0 = param_1 + 0x1a;
  param_1[0x21] = 0;
  local_68 = param_1 + 0x22;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  local_48 = param_3;
  local_40 = param_2;
  local_28 = param_1;
  FUN_1400112be();
  local_f8 = local_28 + 0x27;
  local_28[0x27] = 0;
  local_28[0x28] = 0;
  local_28[0x29] = 0;
  local_60 = local_28 + 0x2a;
  local_28[0x2a] = 0;
  local_28[0x2b] = 0;
  local_28[0x2c] = 0;
  local_28[0x2d] = 0xf;
  local_d0 = local_28 + 0x2e;
  local_28[0x35] = 0;
  local_58 = local_28 + 0x36;
  local_28[0x36] = 0;
  local_28[0x37] = 0;
  local_28[0x38] = 0;
  local_28[0x39] = 0xf;
  local_b8 = local_28 + 0x3a;
  local_28[0x41] = 0;
  local_28[0x42] = 0;
  local_28[0x43] = 0;
  local_28[0x44] = 0;
  local_30 = (undefined8 *)FUN_1400d3680(0x20);
  local_30[2] = 0;
  local_30[3] = 0;
  *local_30 = 0;
  local_30[1] = 0;
  FUN_140011338();
  local_78 = local_28 + 0x45;
  FUN_14001138e(local_78,local_30);
  local_70 = local_28 + 0x47;
  FUN_14001172c(local_70,FUN_140011472);
  local_d8 = local_28 + 0x4f;
  local_28[0x4f] = 0;
  local_28[0x50] = 0;
  local_28[0x51] = 0;
  local_c8 = local_28 + 0x52;
  local_28[0x52] = 0;
  local_28[0x53] = 0;
  local_28[0x54] = 0;
  local_c0 = local_28 + 0x55;
  local_28[0x55] = 0;
  local_28[0x56] = 0;
  local_28[0x57] = 0;
  local_b0 = local_28 + 0x58;
  FUN_1400117ba();
  local_a8 = local_28 + 0x5a;
  FUN_1400117ba();
  local_a0 = local_28 + 0x5c;
  FUN_1400117ba();
  local_98 = local_28 + 0x5e;
  FUN_1400117ba();
  local_90 = local_28 + 0x60;
  local_28[0x60] = 0;
  local_28[0x61] = 0;
  local_28[0x62] = 0;
  local_28[99] = 0x1000000;
  *(undefined2 *)(local_28 + 100) = 0;
  *(undefined8 *)((longlong)local_28 + 0x324) = 0;
  *(undefined8 *)((longlong)local_28 + 0x32c) = 0;
  *(undefined8 *)((longlong)local_28 + 0x334) = 0;
  *(undefined8 *)((longlong)local_28 + 0x33c) = 0;
  *(undefined4 *)((longlong)local_28 + 0x344) = 0;
  local_28[0x69] = param_4;
  local_50 = local_28 + 0x6a;
  FUN_14000169c(local_50,"Subcommands");
  local_88 = local_28 + 0x6e;
  local_28[0x6e] = 0;
  local_28[0x6f] = 0;
  local_28[0x70] = 0;
  local_28[0x71] = 0;
  local_30 = (undefined8 *)FUN_1400d3680(0x50);
  local_30[8] = 0;
  local_30[9] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  *local_30 = CLI::Config::vftable;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  *local_30 = CLI::ConfigBase::vftable;
  local_30[4] = 0xff27223d2c5d5b23;
  *(undefined1 *)(local_30 + 5) = 0x2e;
  *(undefined2 *)((longlong)local_30 + 0x2a) = 0xffff;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_30[9] = 0xf;
  local_38 = local_28 + 0x72;
  FUN_140011826(local_38,local_30);
  local_30 = local_28 + 0x74;
  local_28[0x74] = 0;
  local_28[0x75] = 0;
  local_28[0x76] = 0;
  local_80 = local_28 + 0x77;
  local_28[0x77] = 0;
  local_28[0x78] = 0;
  local_28[0x79] = 0;
  puVar9 = (undefined8 *)local_28[0x69];
  if (puVar9 != (undefined8 *)0x0) {
    lVar7 = puVar9[0x42];
    if (lVar7 != 0) {
      FUN_14001190c(lVar7,local_148,0,1);
      plVar1 = local_28 + 0x42;
      if (*plVar1 != 0) {
        FUN_14002a5d8(local_28);
        *plVar1 = 0;
      }
      if (local_138 != 0) {
        FUN_140006874(local_168,local_148);
        lVar7 = FUN_14002a746(local_28,local_168,lVar7 + 200);
        *plVar1 = lVar7;
        *(undefined1 *)(lVar7 + 0x23) = 0;
      }
      FUN_1400017de(local_148);
      puVar9 = (undefined8 *)local_28[0x69];
    }
    lVar7 = puVar9[0x43];
    if (lVar7 != 0) {
      FUN_14001190c(lVar7,local_128,0,1);
      if (local_28[0x43] != 0) {
        FUN_14002a5d8();
        local_28[0x43] = 0;
      }
      if (local_118 != 0) {
        FUN_140006874(local_168,local_128);
        lVar7 = FUN_14002a746(local_28,local_168,lVar7 + 200);
        local_28[0x43] = lVar7;
        *(undefined1 *)(lVar7 + 0x23) = 0;
      }
      FUN_1400017de(local_128);
      puVar9 = (undefined8 *)local_28[0x69];
    }
    puVar8 = puVar9;
    if (local_28 != puVar9) {
      if ((ulonglong)puVar9[0x25] < 0x10) {
        puVar8 = puVar9 + 0x22;
      }
      else {
        puVar8 = (undefined8 *)puVar9[0x22];
      }
      FUN_140017200(local_68,puVar8,puVar9[0x24]);
      puVar8 = (undefined8 *)local_28[0x69];
    }
    local_28[0x26] = puVar9[0x26];
    FUN_140012258(local_70,puVar8 + 0x47);
    puVar9 = (undefined8 *)local_28[0x69];
    *(undefined1 *)(local_28 + 9) = *(undefined1 *)(puVar9 + 9);
    *(undefined1 *)((longlong)local_28 + 0x49) = *(undefined1 *)((longlong)puVar9 + 0x49);
    *(undefined1 *)((longlong)local_28 + 0x4a) = *(undefined1 *)((longlong)puVar9 + 0x4a);
    *(undefined1 *)((longlong)local_28 + 0x4f) = *(undefined1 *)((longlong)puVar9 + 0x4f);
    *(undefined1 *)(local_28 + 99) = *(undefined1 *)(puVar9 + 99);
    *(undefined1 *)((longlong)local_28 + 0x319) = *(undefined1 *)((longlong)puVar9 + 0x319);
    *(undefined1 *)((longlong)local_28 + 0x31a) = *(undefined1 *)((longlong)puVar9 + 0x31a);
    *(undefined1 *)((longlong)local_28 + 799) = *(undefined1 *)((longlong)puVar9 + 799);
    *(undefined1 *)(local_28 + 100) = *(undefined1 *)(puVar9 + 100);
    *(undefined1 *)((longlong)local_28 + 0x31e) = *(undefined1 *)((longlong)puVar9 + 0x31e);
    *(undefined1 *)((longlong)local_28 + 0x31b) = *(undefined1 *)((longlong)puVar9 + 0x31b);
    if (local_28 != puVar9) {
      if ((ulonglong)puVar9[0x6d] < 0x10) {
        puVar8 = puVar9 + 0x6a;
      }
      else {
        puVar8 = (undefined8 *)puVar9[0x6a];
      }
      FUN_140017200(local_50,puVar8,puVar9[0x6c]);
      puVar9 = (undefined8 *)local_28[0x69];
    }
    if (local_28 != puVar9) {
      if ((ulonglong)puVar9[0x2d] < 0x10) {
        puVar8 = puVar9 + 0x2a;
      }
      else {
        puVar8 = (undefined8 *)puVar9[0x2a];
      }
      FUN_140017200(local_60,puVar8,puVar9[0x2c]);
      puVar9 = (undefined8 *)local_28[0x69];
    }
    if (local_28 != puVar9) {
      if ((ulonglong)puVar9[0x39] < 0x10) {
        puVar8 = puVar9 + 0x36;
      }
      else {
        puVar8 = (undefined8 *)puVar9[0x36];
      }
      FUN_140017200(local_58,puVar8,puVar9[0x38]);
      puVar9 = (undefined8 *)local_28[0x69];
    }
    puVar8 = local_28;
    FUN_1400122e0(local_78,puVar9 + 0x45);
    FUN_1400122e0(local_38,puVar8[0x69] + 0x390);
    puVar8[0x66] = *(undefined8 *)(puVar8[0x69] + 0x330);
  }
  FUN_1400017de(local_40);
  FUN_1400017de(local_48);
  return local_28;
}

