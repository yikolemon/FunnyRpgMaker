/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016deee */

void FUN_1016deee(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  float10 fVar5;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  uint local_a8;
  undefined8 local_a4 [2];
  uint local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 uStack_7c;
  char *local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_b0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180160;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  local_70 = 0;
  cVar1 = FUN_1012e1b7(&DAT_1032f652,&local_70);
  if (cVar1 != '\0') {
    DAT_1039d905 = '\0';
  }
  FUN_101150be(0);
  local_ac = FUN_10113594(&DAT_1032eeab);
  iVar3 = FUN_100fcb2d();
  local_40 = *(float *)(iVar3 + 0x14);
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_1010c3e4(local_a4);
  local_70 = CONCAT44((float)((ulonglong)local_a4[0] >> 0x20) + 0.0,local_40 + (float)local_a4[0]);
  FUN_1011c2a7(local_ac,&local_70,0x40,0);
  cVar1 = FUN_10107d2b(&DAT_1032ef93,0,0);
  if (cVar1 != '\0') {
    FUN_100fbc78();
    local_18 = 1;
    fVar5 = (float10)FUN_10111f20();
    local_8c = (float)fVar5;
    local_40 = local_8c;
    iVar3 = FUN_100fcb2d();
    FUN_100fbd22((DAT_1039d8fc - DAT_1039d8f8 >> 3) * -0x33333333,
                 local_40 + *(float *)(iVar3 + 0x60));
    while( true ) {
      cVar1 = FUN_100fc2ca();
      if (cVar1 == '\0') break;
      for (local_a8 = (uint)local_70; (int)local_a8 < local_70._4_4_; local_a8 = local_a8 + 1) {
        local_18 = 1;
        FUN_10113358(local_a8);
        local_78 = "{:03d}: {}";
        uStack_74 = 10;
        FUN_1016e421(local_a4,"{:03d}: {}",10,&local_a8,DAT_1039d8f8 + local_a8 * 0x28 + 4);
        local_18 = 3;
        local_30 = 0;
        cVar1 = FUN_10133727("##selectable",DAT_10389fcc == local_a8,0x40,&local_30);
        if (cVar1 != '\0') {
          DAT_10389fcc = local_a8;
        }
        FUN_10113568();
        cVar1 = FUN_10115d1a();
        if (cVar1 != '\0') {
          puVar4 = local_a4;
          if (0xf < local_90) {
            puVar4 = (undefined8 *)local_a4[0];
          }
          FUN_1012d079(puVar4,0);
          thunk_FUN_1010ad44();
        }
        cVar1 = FUN_1010bf79(1);
        if (cVar1 != '\0') {
          DAT_10389fcc = local_a8;
          FUN_10115ea4(&DAT_1032f44e,0);
        }
        FUN_10114a0e(0,0);
        puVar4 = local_a4;
        if (0xf < local_90) {
          puVar4 = (undefined8 *)local_a4[0];
        }
        FUN_1012d079(puVar4,0);
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      local_18 = 1;
    }
    cVar1 = FUN_10116736(&DAT_1032f44e,0);
    if (cVar1 != '\0') {
      local_a4[0] = 0;
      cVar1 = FUN_10133727(&DAT_1032efa0,0,0,local_a4);
      if (cVar1 != '\0') {
        local_80 = "$gameTemp.reserveCommonEvent({})";
        uStack_7c = 0x20;
        FUN_1000589a(local_a4,"$gameTemp.reserveCommonEvent({})",0x20,&DAT_10389fcc);
        local_18 = 2;
        FUN_10014730(local_a4);
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      local_18 = 1;
      FUN_101165cb();
    }
    local_18 = 0xffffffff;
    thunk_FUN_100fbc90();
  }
  local_18 = 0;
  FUN_1010ad44();
  bVar2 = FUN_10107d2b(&DAT_1032ef85,0,0);
  if (((bVar2 & -1 < (int)DAT_10389fcc) == 1) &&
     (DAT_10389fcc < (uint)((DAT_1039d8fc - DAT_1039d8f8 >> 3) * -0x33333333))) {
    local_70 = local_70 & 0xffffffff00000000;
    FUN_1016dce7();
  }
  FUN_1010ad44();
  if (DAT_1039d905 == '\0') {
    DAT_1039d905 = '\x01';
    FUN_100de916();
    FUN_1011c980(local_ac);
    FUN_1011c8c9(local_ac,0x400);
    FUN_1010c060(&local_88);
    FUN_1011c87e(local_ac,local_88,local_84);
    FUN_1011cae5(local_ac,0,0x3e99999a,&local_70,local_a4);
    FUN_1011c7e9(&DAT_1032ef93,(uint)local_70);
    FUN_1011c7e9(&DAT_1032ef85,(undefined8 *)local_a4[0]);
    FUN_1011cbfa(local_ac);
    FUN_10118556();
  }
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_1039d8b4);
  ExceptionList = local_20;
  return;
}

