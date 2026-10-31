/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002b40a */

longlong FUN_14002b40a(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 local_268 [64];
  undefined1 local_228 [56];
  undefined8 local_1f0;
  undefined1 local_1e8 [56];
  undefined8 local_1b0;
  undefined1 local_1a8 [64];
  undefined1 local_168 [64];
  undefined1 local_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined4 *puStack_80;
  undefined8 local_78;
  undefined4 *local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  local_60 = param_4;
  local_58 = param_3;
  local_50 = param_2;
  lVar4 = FUN_14000d806(puVar5,param_2[2],0,&DAT_140171d3c,2);
  if (lVar4 == -1) {
    local_1b0 = 0;
    local_c8 = *local_60;
    uStack_c4 = local_60[1];
    uStack_c0 = local_60[2];
    uStack_bc = local_60[3];
    local_b8 = local_60[4];
    uStack_b4 = local_60[5];
    uStack_b0 = local_60[6];
    uStack_ac = local_60[7];
    *(undefined8 *)(local_60 + 4) = 0;
    *(undefined8 *)(local_60 + 6) = 0xf;
    *(undefined1 *)local_60 = 0;
    FUN_14002ca6e(local_168,local_58);
    local_a8 = *(undefined4 *)local_50;
    uStack_a4 = *(undefined4 *)((longlong)local_50 + 4);
    uStack_a0 = *(undefined4 *)(local_50 + 1);
    uStack_9c = *(undefined4 *)((longlong)local_50 + 0xc);
    local_98 = *(undefined4 *)(local_50 + 2);
    uStack_94 = *(undefined4 *)((longlong)local_50 + 0x14);
    uStack_90 = *(undefined4 *)(local_50 + 3);
    uStack_8c = *(undefined4 *)((longlong)local_50 + 0x1c);
    local_50[2] = 0;
    local_50[3] = 0xf;
    *(undefined1 *)local_50 = 0;
    lVar4 = FUN_14002bfdc(param_1,&local_a8,local_168,&local_c8,uVar7 & 0xffffffffffffff00,local_1e8
                         );
  }
  else {
    FUN_14002bb3d(&local_88,local_50);
    FUN_14002be73(local_50);
    local_1f0 = 0;
    local_108 = *local_60;
    uStack_104 = local_60[1];
    uStack_100 = local_60[2];
    uStack_fc = local_60[3];
    local_f8 = local_60[4];
    uStack_f4 = local_60[5];
    uStack_f0 = local_60[6];
    uStack_ec = local_60[7];
    *(undefined8 *)(local_60 + 4) = 0;
    *(undefined8 *)(local_60 + 6) = 0xf;
    *(undefined1 *)local_60 = 0;
    FUN_14002ca6e(local_1a8,local_58);
    local_e8 = *(undefined4 *)local_50;
    uStack_e4 = *(undefined4 *)((longlong)local_50 + 4);
    uStack_e0 = *(undefined4 *)(local_50 + 1);
    uStack_dc = *(undefined4 *)((longlong)local_50 + 0xc);
    local_d8 = *(undefined4 *)(local_50 + 2);
    uStack_d4 = *(undefined4 *)((longlong)local_50 + 0x14);
    uStack_d0 = *(undefined4 *)(local_50 + 3);
    uStack_cc = *(undefined4 *)((longlong)local_50 + 0x1c);
    local_50[2] = 0;
    local_50[3] = 0xf;
    *(undefined1 *)local_50 = 0;
    lVar4 = FUN_14002bfdc(param_1,&local_e8,local_1a8,&local_108,uVar7 & 0xffffffffffffff00,
                          local_228);
    puVar2 = puStack_80;
    for (puVar6 = local_88; puVar6 != puVar2; puVar6 = puVar6 + 0x10) {
      FUN_14000d086(lVar4 + 0x70,puVar6);
    }
    if ((undefined4 **)(lVar4 + 0x58) != &local_88) {
      FUN_14002b32c((undefined4 **)(lVar4 + 0x58));
      *(undefined4 **)(lVar4 + 0x58) = local_88;
      *(undefined4 **)(lVar4 + 0x60) = puStack_80;
      *(undefined8 *)(lVar4 + 0x68) = local_78;
      local_88 = (undefined4 *)0x0;
      puStack_80 = (undefined4 *)0x0;
      local_78 = 0;
    }
    FUN_14002b32c(&local_88);
  }
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    if (*(char *)(lVar4 + 0x27) != '\x01') {
      if (((*(char *)(lVar4 + 0x27) == '\0') && (*(int *)(lVar4 + 0x1b4) == 0x20000000)) &&
         (1 < *(int *)(lVar4 + 0x1b0))) {
        *(int *)(lVar4 + 0x1b4) = *(int *)(lVar4 + 0x1b0);
      }
      *(undefined1 *)(lVar4 + 0x27) = 1;
      *(undefined1 *)(lVar4 + 0x268) = 0;
    }
    *(undefined8 *)(lVar4 + 0x1b0) = 0;
    *(undefined1 *)(lVar4 + 0x26a) = 1;
    *(undefined1 *)(lVar4 + 0x20) = 0;
    FUN_1400017de(local_50);
    plVar3 = local_58;
    plVar1 = (longlong *)local_58[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_58);
      plVar3[7] = 0;
    }
    FUN_1400017de(local_60);
    return lVar4;
  }
  FUN_14001190c(lVar4,&local_88,1,0);
  FUN_14002a5d8(param_1,lVar4);
  FUN_140006874(local_128,&local_88);
  FUN_14002cae2(local_268,local_128);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_268,&DAT_14017a418);
}

