/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016b598 */

void FUN_1016b598(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ****ppppuVar7;
  ulonglong *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auStack_b0 [8];
  uint *local_a8;
  uint *local_a4;
  ulonglong local_a0 [2];
  uint local_8c;
  uint local_88;
  int local_84;
  uint *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  float fStack_5c;
  uint local_4c;
  uint *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  char *local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_b0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180100;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 8;
  local_a0[0] = 0;
  cVar2 = FUN_1012e1b7(&DAT_1032f652,local_a0);
  if (cVar2 != '\0') {
    DAT_1039d904 = '\0';
  }
  FUN_101150be(0);
  local_68 = FUN_10113594(&DAT_1032ee98);
  iVar5 = FUN_100fcb2d();
  local_80 = *(uint **)(iVar5 + 0x14);
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  FUN_1010c3e4(&local_60);
  local_a0[0] = CONCAT44(fStack_5c + 0.0,(float)local_80 + (float)local_60);
  FUN_1011c2a7(local_68,local_a0,0x40,0);
  cVar2 = FUN_10107d2b();
  if (cVar2 != '\0') {
    local_a0[0] = 0;
    FUN_100fd3bc(0xe,local_a0);
    local_a8 = DAT_1039d8ec;
    puVar9 = DAT_1039d8e8;
    while (puVar9 != local_a8) {
      local_80 = puVar9;
      FUN_1016c467();
      puVar9 = local_80 + 0xb;
    }
    FUN_100fd4c4(1);
  }
  FUN_1010ad44();
  cVar2 = FUN_10107d2b();
  if (cVar2 != '\0') {
    FUN_1016c5f7();
  }
  FUN_1010ad44();
  cVar2 = FUN_10107d2b();
  if (cVar2 != '\0') {
    uVar6 = FUN_1014a0eb();
    FUN_1014b266(uVar6);
    local_a4 = DAT_1039d92c;
    local_80 = (uint *)0x0;
    for (local_a8 = DAT_1039d928; local_a8 != local_a4; local_a8 = local_a8 + 0xe) {
      FUN_1014ae21(local_80,0);
      FUN_10113358(local_80);
      local_a0[0] = 0;
      uVar3 = FUN_1014b156(local_80);
      cVar2 = FUN_10133727("##selectable",uVar3,0x40,local_a0);
      if (cVar2 != '\0') {
        DAT_1039d9d0 = local_a8;
        DAT_10389fc4 = local_80;
        DAT_1039d9d4._0_1_ = (byte)DAT_1039d9d4 | 2;
      }
      cVar2 = FUN_10115d1a();
      if (cVar2 != '\0') {
        if (local_a8[9] < 0x10) {
          puVar9 = local_a8 + 4;
        }
        else {
          puVar9 = (uint *)local_a8[4];
        }
        FUN_1012d079(puVar9,0);
        thunk_FUN_1010ad44();
      }
      FUN_10113568();
      if ((DAT_10389fc4 == local_80) && (((byte)DAT_1039d9d4 & 1) != 0)) {
        FUN_1014b0b0();
        FUN_1014b226(local_80,1);
        FUN_101157e2(0);
        DAT_1039d9d4._0_1_ = (byte)DAT_1039d9d4 & 0xfe;
      }
      cVar2 = FUN_1010bf79(1);
      if (cVar2 != '\0') {
        FUN_10115ea4(&DAT_1032f435,0);
      }
      FUN_10114a0e(0,0);
      if (local_a8[9] < 0x10) {
        puVar9 = local_a8 + 4;
      }
      else {
        puVar9 = (uint *)local_a8[4];
      }
      FUN_1012d079(puVar9,0);
      local_80 = (uint *)((int)local_80 + 1);
    }
    cVar2 = FUN_10116736(&DAT_1032f435,0);
    if (cVar2 != '\0') {
      local_a0[0] = 0;
      cVar2 = FUN_10133727(&DAT_1032f354,0,0,local_a0);
      if (cVar2 != '\0') {
        local_60 = (undefined4 ****)0x0;
        local_6c = 0;
        while( true ) {
          local_18 = 8;
          cVar2 = FUN_1014b16c(&local_60,&local_6c);
          if (cVar2 == '\0') break;
          local_a8 = (uint *)DAT_1039d928[local_6c * 0xe + 0xb];
          puVar9 = (uint *)DAT_1039d928[local_6c * 0xe + 10];
          while (puVar9 != local_a8) {
            local_80 = puVar9;
            if ((char)puVar9[1] == '\x01') {
              local_18 = 8;
              FUN_100d0a6b();
              local_18 = 0x10;
              if ((char)local_88 == '\0') {
                FUN_100d0c84();
              }
              local_18 = 0xffffffff;
              FUN_10001fee();
            }
            if ((char)local_80[3] == '\x01') {
              local_18 = 8;
              FUN_100d0a6b();
              local_18 = 0x11;
              if ((char)local_88 == '\0') {
                FUN_100d0c84();
              }
              local_18 = 0xffffffff;
              FUN_10001fee();
            }
            puVar9 = local_80;
            if ((char)local_80[5] == '\x01') {
              local_18 = 8;
              FUN_100d0e64();
              local_18 = 0x12;
              uVar10 = local_80[7];
              uVar1 = (uint)(local_88 < local_80[6]);
              if ((SBORROW4(local_84,uVar10) != SBORROW4(local_84 - uVar10,uVar1)) !=
                  (int)((local_84 - uVar10) - uVar1) < 0) {
                FUN_100d10b6(local_80[4],(int)local_80[4] >> 0x1f,local_80[6],uVar10);
              }
              puVar9 = local_80;
              local_18 = 0xffffffff;
              FUN_10001fee();
            }
            if ((char)puVar9[0xe] == '\x01') {
              local_18 = 8;
              local_a4 = local_80 + 8;
              cVar2 = FUN_1016d919();
              if (cVar2 == '\0') {
                FUN_1016da42(*DAT_1039d9d0,DAT_1039d9d0[1],local_a4,1);
              }
            }
            if ((char)local_80[0x10] == '\x01') {
              local_18 = 8;
              FUN_100d131a();
              local_18 = 0x13;
              if (local_88 == 0 && local_84 == 0) {
                FUN_100d1441(local_80[0xf],(int)local_80[0xf] >> 0x1f,1,0);
              }
              local_18 = 0xffffffff;
              FUN_10001fee();
            }
            puVar9 = local_80 + 0x16;
          }
        }
      }
      FUN_101165cb();
    }
    uVar6 = FUN_1014a9f9();
    FUN_1014b266(uVar6);
  }
  FUN_1010ad44();
  bVar4 = FUN_10107d2b();
  if ((bVar4 & DAT_1039d9d0 != (uint *)0x0) == 1) {
    local_80 = (uint *)DAT_1039d9d0[10];
    local_48 = (uint *)DAT_1039d9d0[0xb];
    local_a8 = (uint *)0x0;
    for (; local_80 != local_48; local_80 = local_80 + 0x16) {
      FUN_10113358(local_a8);
      local_a8 = (uint *)((int)local_a8 + 1);
      FUN_10017d5d(local_a0,local_a8);
      local_18 = 9;
      puVar8 = local_a0;
      if (0xf < local_8c) {
        puVar8 = (ulonglong *)local_a0[0];
      }
      FUN_10132656(puVar8);
      local_18 = 0xffffffff;
      FUN_10001fee();
      if ((char)local_80[1] == '\x01') {
        local_18 = 8;
        FUN_100d0a6b();
        local_18 = 10;
        puVar8 = local_a0;
        if (0xf < local_8c) {
          puVar8 = (ulonglong *)local_a0[0];
        }
        cVar2 = FUN_1015650c(puVar8,&local_88,0x3f000000,0x3f4ccccd);
        if (cVar2 != '\0') {
          FUN_100d0c84();
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      if ((char)local_80[3] == '\x01') {
        local_18 = 8;
        FUN_100d0a6b();
        local_18 = 0xb;
        puVar8 = local_a0;
        if (0xf < local_8c) {
          puVar8 = (ulonglong *)local_a0[0];
        }
        cVar2 = FUN_1015650c(puVar8,&local_88,0x3f000000,0x3f4ccccd);
        if (cVar2 != '\0') {
          FUN_100d0c84();
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      if ((char)local_80[5] == '\x01') {
        local_18 = 8;
        FUN_100d0e64();
        local_18 = 0xc;
        local_a4 = local_80 + 6;
        local_30 = "{} >= {}";
        uStack_2c = 8;
        FUN_1016dc86(&local_60,0x81032f842,local_a0,local_a4);
        local_18 = 0xd;
        iVar5 = local_84 - local_a4[1];
        local_6c = CONCAT31(local_6c._1_3_,
                            (SBORROW4(local_84,local_a4[1]) !=
                            SBORROW4(iVar5,(uint)(local_88 < *local_a4))) ==
                            (int)(iVar5 - (uint)(local_88 < *local_a4)) < 0);
        ppppuVar7 = &local_60;
        if (0xf < local_4c) {
          ppppuVar7 = (undefined4 ****)local_60;
        }
        cVar2 = FUN_1015650c(ppppuVar7,&local_6c,0x3f000000,0x3f4ccccd);
        if (cVar2 != '\0') {
          uVar10 = local_6c & 0xff ^ 1;
          FUN_100d10b6(local_80[4],(int)local_80[4] >> 0x1f,local_80[6] - uVar10,
                       local_80[7] - (uint)(local_80[6] < uVar10));
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      if ((char)local_80[0xe] == '\x01') {
        local_18 = 8;
        local_a4 = local_80 + 8;
        uVar3 = FUN_1016d919();
        local_60 = (undefined4 ***)CONCAT31(local_60._1_3_,uVar3);
        FUN_10015f8f();
        local_18 = 0xe;
        puVar8 = local_a0;
        if (0xf < local_8c) {
          puVar8 = (ulonglong *)local_a0[0];
        }
        cVar2 = FUN_1015650c(puVar8,&local_60,0x3f000000,0x3f4ccccd);
        if (cVar2 != '\0') {
          FUN_1016da42(*DAT_1039d9d0,DAT_1039d9d0[1],local_a4,(uint)local_60 & 0xff);
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      if ((char)local_80[0x10] == '\x01') {
        local_18 = 8;
        FUN_100d131a();
        local_18 = 0xf;
        local_60 = (undefined4 ***)CONCAT31(local_60._1_3_,local_88 != 0 || local_84 != 0);
        puVar8 = local_a0;
        if (0xf < local_8c) {
          puVar8 = (ulonglong *)local_a0[0];
        }
        cVar2 = FUN_1015650c(puVar8,&local_60,0x3f000000,0x3f4ccccd);
        if (cVar2 != '\0') {
          FUN_100d1441(local_80[0xf],(int)local_80[0xf] >> 0x1f,(uint)local_60 & 0xff,0);
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      local_18 = 8;
      FUN_10113568();
    }
  }
  FUN_1010ad44();
  bVar4 = FUN_10107d2b();
  if ((bVar4 & DAT_1039d9d0 != (uint *)0x0) == 1) {
    local_a4 = (uint *)DAT_1039d9d0[0xb];
    puVar9 = (uint *)0x0;
    for (local_80 = (uint *)DAT_1039d9d0[10]; local_80 != local_a4; local_80 = local_80 + 0x16) {
      local_a8 = puVar9;
      FUN_10113358(puVar9);
      local_a0[0] = local_a0[0] & 0xffffffff00000000;
      FUN_1016dce7();
      FUN_10113568();
      puVar9 = (uint *)((int)local_a8 + 1);
    }
  }
  FUN_1010ad44();
  if (DAT_1039d904 == '\0') {
    DAT_1039d904 = '\x01';
    FUN_100de916();
    FUN_1011c980(local_68);
    FUN_1011c8c9(local_68,0x400);
    FUN_1010c060(local_38);
    FUN_1011c87e();
    FUN_1011cae5(local_68,0,0x3e99999a,local_a0,&local_64);
    FUN_1011cae5(local_64,0,0x3f19999a,&local_64,&local_3c);
    FUN_1011cae5((ulonglong *)local_a0[0],2,0x3f000000,&local_60,&local_6c);
    FUN_1011cae5(local_3c,2,0x3f000000,&local_40,&local_44);
    FUN_1011c7e9(&DAT_1032ef78,local_60);
    FUN_1011c7e9(&DAT_1032f1db,local_6c);
    FUN_1011c7e9(&DAT_1032f544,local_64);
    FUN_1011c7e9(&DAT_1032ef6b,local_40);
    FUN_1011c7e9(&DAT_1032ef07,local_44);
    FUN_1011cbfa(local_68);
    FUN_10118556();
  }
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_1039d8b4);
  ExceptionList = local_20;
  return;
}

