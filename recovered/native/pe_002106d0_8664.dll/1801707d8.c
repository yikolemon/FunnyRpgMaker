/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801707d8 */

void FUN_1801707d8(void)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  int iVar17;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 ***local_c8 [3];
  ulonglong local_b0;
  undefined4 local_a4;
  undefined8 ***local_a0 [3];
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  uint local_78;
  undefined4 local_74;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804193d8);
  local_a0[0] = (undefined8 ***)0x0;
  cVar5 = FUN_180134257(&DAT_18035f76e);
  if (cVar5 != '\0') {
    DAT_180419468 = '\0';
  }
  FUN_180119f0f(0);
  local_74 = FUN_18011837d(&DAT_18035efb4);
  lVar9 = FUN_18010128e();
  fVar1 = *(float *)(lVar9 + 0x14);
  FUN_180111069(local_c8);
  local_a0[0] = (undefined8 ***)
                CONCAT44((float)((ulonglong)local_c8[0] >> 0x20) + 0.0,fVar1 + SUB84(local_c8[0],0))
  ;
  FUN_180121774(local_74,local_a0,0x40,0);
  cVar5 = FUN_18010ca66(&DAT_18035f2f7,0,0);
  if (cVar5 != '\0') {
    local_a0[0] = (undefined8 ****)0x0;
    FUN_180101bbb(0xe);
    lVar9 = DAT_180419438;
    for (lVar13 = DAT_180419430; lVar13 != lVar9; lVar13 = lVar13 + 0x40) {
      FUN_1801716f8(lVar13);
    }
    FUN_180101ccb(1);
  }
  FUN_18010f900();
  cVar5 = FUN_18010ca66(&DAT_18035f660,0,0);
  if (cVar5 != '\0') {
    FUN_18017185a();
  }
  FUN_18010f900();
  cVar5 = FUN_18010ca66(&DAT_18035f094,0,0);
  if (cVar5 != '\0') {
    uVar10 = FUN_18014e6af(0,DAT_1804194d0,
                           (int)((ulonglong)((longlong)DAT_1804194b8 - (longlong)DAT_1804194b0) >> 3
                                ) * 0x38e38e39);
    FUN_18014f7d4(&DAT_1804194d0,uVar10);
    puVar4 = DAT_1804194b8;
    uVar14 = 0;
    for (puVar15 = DAT_1804194b0; puVar15 != puVar4; puVar15 = puVar15 + 9) {
      FUN_18014f370(uVar14);
      FUN_18011810d(uVar14 & 0xffffffff);
      local_a0[0] = (undefined8 ****)0x0;
      uVar8 = FUN_18014f686(&DAT_1804194d0,uVar14 & 0xffffffff);
      cVar5 = FUN_1801391f6("##selectable",uVar8,0x40,local_a0);
      if (cVar5 != '\0') {
        DAT_1804195e0._0_1_ = (byte)DAT_1804195e0 | 2;
        DAT_180403bf8 = (int)uVar14;
        DAT_1804195d8 = puVar15;
      }
      cVar5 = FUN_18011aab1();
      if (cVar5 != '\0') {
        if ((ulonglong)puVar15[5] < 0x10) {
          puVar11 = puVar15 + 2;
        }
        else {
          puVar11 = (undefined8 *)puVar15[2];
        }
        FUN_18013309a(puVar11);
        thunk_FUN_18010f900();
      }
      FUN_18011834f();
      if ((uVar14 == (longlong)DAT_180403bf8) && (((byte)DAT_1804195e0 & 1) != 0)) {
        FUN_18014f5d6(&DAT_1804194d0);
        FUN_18014f78a(&DAT_1804194d0);
        FUN_18011a62b(0);
        DAT_1804195e0._0_1_ = (byte)DAT_1804195e0 & 0xfe;
      }
      cVar5 = FUN_180110bfd(1);
      if (cVar5 != '\0') {
        FUN_18011ac8e(&DAT_18035f551);
      }
      FUN_180119893(0,0);
      if ((ulonglong)puVar15[5] < 0x10) {
        puVar11 = puVar15 + 2;
      }
      else {
        puVar11 = (undefined8 *)puVar15[2];
      }
      FUN_18013309a(puVar11);
      uVar14 = uVar14 + 1;
    }
    cVar5 = FUN_18011b56a(&DAT_18035f551,0);
    if (cVar5 != '\0') {
      local_a0[0] = (undefined8 ****)0x0;
      cVar5 = FUN_1801391f6(&DAT_18035f470,0,0);
      if (cVar5 != '\0') {
        local_c8[0] = (undefined8 ****)0x0;
        local_78 = 0;
        while( true ) {
          cVar5 = FUN_18014f6a0(&DAT_1804194d0,local_c8,&local_78);
          if (cVar5 == '\0') break;
          piVar2 = (int *)DAT_1804194b0[(ulonglong)local_78 * 9 + 7];
          for (piVar16 = (int *)DAT_1804194b0[(ulonglong)local_78 * 9 + 6]; piVar16 != piVar2;
              piVar16 = piVar16 + 0x1c) {
            if ((char)piVar16[1] == '\x01') {
              FUN_1800d467b(local_a0,(longlong)*piVar16);
              if (local_80 == '\0') {
                FUN_1800d4803((longlong)*piVar16,1);
              }
              FUN_180001ef2(local_a0);
            }
            if ((char)piVar16[3] == '\x01') {
              FUN_1800d467b(local_a0,(longlong)piVar16[2]);
              if (local_80 == '\0') {
                FUN_1800d4803((longlong)piVar16[2],1);
              }
              FUN_180001ef2(local_a0);
            }
            if ((char)piVar16[5] == '\x01') {
              FUN_1800d4950(local_a0,(longlong)piVar16[4]);
              if (CONCAT71(uStack_7f,local_80) < *(longlong *)(piVar16 + 6)) {
                FUN_1800d4aa7((longlong)piVar16[4]);
              }
              FUN_180001ef2(local_a0);
            }
            if ((char)piVar16[0x10] == '\x01') {
              cVar5 = FUN_180172cac((longlong)DAT_180403bfc,*DAT_1804195d8,piVar16 + 8);
              if (cVar5 == '\0') {
                FUN_180172d92((longlong)DAT_180403bfc,*DAT_1804195d8,piVar16 + 8,1);
              }
            }
            if ((char)piVar16[0x12] == '\x01') {
              FUN_1800d4c59(local_a0,(longlong)piVar16[0x11]);
              if (CONCAT71(uStack_7f,local_80) == 0) {
                FUN_1800d4d26((longlong)piVar16[0x11],1);
              }
              FUN_180001ef2(local_a0);
            }
          }
        }
      }
      FUN_18011b3ef();
    }
    uVar10 = FUN_18014ef2d();
    FUN_18014f7d4(&DAT_1804194d0,uVar10);
  }
  FUN_18010f900();
  bVar6 = FUN_18010ca66(&DAT_18035f087,0,0);
  uVar3 = DAT_1802dbb30;
  uVar8 = DAT_1802dbb2c;
  if ((bVar6 & DAT_1804195d8 != (undefined8 *)0x0) == 1) {
    piVar2 = (int *)DAT_1804195d8[7];
    iVar17 = 0;
    for (piVar16 = (int *)DAT_1804195d8[6]; piVar16 != piVar2; piVar16 = piVar16 + 0x1c) {
      FUN_18011810d(iVar17);
      iVar17 = iVar17 + 1;
      FUN_18001799f(local_a0);
      ppppuVar12 = local_a0;
      if (0xf < local_88) {
        ppppuVar12 = (undefined8 ****)local_a0[0];
      }
      FUN_1801380f1(ppppuVar12);
      FUN_180001ef2(local_a0);
      if ((char)piVar16[1] == '\x01') {
        FUN_1800d467b(local_a0,(longlong)*piVar16);
        ppppuVar12 = local_a0;
        if (0xf < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        cVar5 = FUN_180159cb6(ppppuVar12,&local_80,uVar8,uVar3);
        if (cVar5 != '\0') {
          FUN_1800d4803((longlong)*piVar16);
        }
        FUN_180001ef2(local_a0);
      }
      if ((char)piVar16[3] == '\x01') {
        FUN_1800d467b(local_a0,(longlong)piVar16[2]);
        ppppuVar12 = local_a0;
        if (0xf < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        cVar5 = FUN_180159cb6(ppppuVar12,&local_80,uVar8,uVar3);
        if (cVar5 != '\0') {
          FUN_1800d4803((longlong)piVar16[2]);
        }
        FUN_180001ef2(local_a0);
      }
      if ((char)piVar16[5] == '\x01') {
        FUN_1800d4950(local_a0,(longlong)piVar16[4]);
        local_f0 = "{} >= {}";
        local_e8 = 8;
        FUN_180172f88(local_c8,&local_f0,local_a0,piVar16 + 6);
        local_78 = CONCAT31(local_78._1_3_,
                            *(longlong *)(piVar16 + 6) <= CONCAT71(uStack_7f,local_80));
        ppppuVar12 = local_c8;
        if (0xf < local_b0) {
          ppppuVar12 = (undefined8 ****)local_c8[0];
        }
        cVar5 = FUN_180159cb6(ppppuVar12,&local_78,uVar8,uVar3);
        if (cVar5 != '\0') {
          FUN_1800d4aa7((longlong)piVar16[4]);
        }
        FUN_180001ef2(local_c8);
        FUN_180001ef2(local_a0);
      }
      if ((char)piVar16[0x10] == '\x01') {
        uVar7 = FUN_180172cac((longlong)DAT_180403bfc,*DAT_1804195d8,piVar16 + 8);
        local_c8[0] = (undefined8 ***)CONCAT71(local_c8[0]._1_7_,uVar7);
        FUN_180015c27(local_a0,&DAT_18037b807);
        ppppuVar12 = local_a0;
        if (0xf < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        cVar5 = FUN_180159cb6(ppppuVar12,local_c8,uVar8,uVar3);
        if (cVar5 != '\0') {
          FUN_180172d92((longlong)DAT_180403bfc,*DAT_1804195d8,piVar16 + 8,
                        (ulonglong)local_c8[0] & 0xff);
        }
        FUN_180001ef2(local_a0);
      }
      if ((char)piVar16[0x12] == '\x01') {
        FUN_1800d4c59(local_a0,(longlong)piVar16[0x11]);
        local_c8[0] = (undefined8 ***)CONCAT71(local_c8[0]._1_7_,CONCAT71(uStack_7f,local_80) != 0);
        ppppuVar12 = local_a0;
        if (0xf < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        cVar5 = FUN_180159cb6(ppppuVar12,local_c8,uVar8,uVar3);
        if (cVar5 != '\0') {
          FUN_1800d4d26((longlong)piVar16[0x11]);
        }
        FUN_180001ef2(local_a0);
      }
      FUN_18011834f();
    }
  }
  FUN_18010f900();
  bVar6 = FUN_18010ca66(&DAT_18035f023,0,0);
  if ((bVar6 & DAT_1804195d8 != (undefined8 *)0x0) == 1) {
    lVar13 = DAT_1804195d8[7];
    iVar17 = 0;
    for (lVar9 = DAT_1804195d8[6]; lVar9 != lVar13; lVar9 = lVar9 + 0x70) {
      FUN_18011810d(iVar17);
      local_a0[0] = (undefined8 ****)0x0;
      FUN_180173007(lVar9 + 0x58,local_a0);
      FUN_18011834f();
      iVar17 = iVar17 + 1;
    }
  }
  FUN_18010f900();
  if (DAT_180419468 == '\0') {
    DAT_180419468 = '\x01';
    FUN_1800e2378();
    FUN_180121e5d(local_74);
    FUN_180121d97(local_74,0x400);
    FUN_180110cf0(&local_e0);
    FUN_180121d5c(local_74,local_e0);
    FUN_180121fec(local_74,0,DAT_1802dbb70,local_a0,&local_a4);
    FUN_180121fec(local_a4,0,DAT_1802dc418,&local_a4,&local_d4);
    FUN_180121fec((ulonglong)local_a0[0] & 0xffffffff,2,DAT_1802dbb2c,local_c8,&local_78);
    FUN_180121fec(local_d4,2,DAT_1802dbb2c,&local_d0,&local_cc);
    FUN_180121cbb(&DAT_18035f094,(ulonglong)local_c8[0] & 0xffffffff);
    FUN_180121cbb(&DAT_18035f2f7,local_78);
    FUN_180121cbb(&DAT_18035f660,local_a4);
    FUN_180121cbb(&DAT_18035f087,local_d0);
    FUN_180121cbb(&DAT_18035f023,local_cc);
    FUN_180122131(local_74);
    FUN_18011d4cf();
  }
  FUN_18023d6e0(&DAT_1804193d8);
  return;
}

