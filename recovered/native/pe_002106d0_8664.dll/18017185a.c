/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017185a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017185a(void)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  byte bVar15;
  byte bVar16;
  undefined4 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  bool bVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  float fVar51;
  float fVar52;
  float fVar57;
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar56 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 *in_stack_fffffffffffffe18;
  undefined8 *in_stack_fffffffffffffe20;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 **local_1b8;
  undefined8 local_1b0;
  undefined8 **local_1a8;
  undefined8 local_1a0;
  undefined8 **local_198;
  ulonglong local_190;
  longlong local_188;
  int local_17c;
  undefined4 local_178;
  uint local_174;
  undefined8 local_170;
  undefined8 local_168;
  int local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 ***local_148;
  longlong *plStack_140;
  ulonglong local_130;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 uStack_110;
  undefined1 local_100 [15];
  byte local_f1;
  undefined8 local_f0;
  undefined8 ****ppppuVar20;
  undefined1 auVar33 [16];
  undefined1 auVar39 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe18 >> 0x20);
  local_f0 = 0xfffffffffffffffe;
  if (DAT_1804195e4 == '\x01') {
    FUN_180111069(&local_118);
    local_148 = (undefined8 ***)(local_118 & 0xffffffff);
    FUN_180107f34();
    FUN_180136e21();
    goto LAB_180172823;
  }
  if (DAT_180403bfc < 0) {
    if (DAT_180403bfc == -3) {
      FUN_180001e92(&local_148,&DAT_18035f368);
    }
    else if (DAT_180403bfc == -2) {
      FUN_180001e92(&local_148,&DAT_18035f329);
    }
    else if (DAT_180403bfc == -1) {
      FUN_180001e92(&local_148,&DAT_18035eff3);
    }
    else {
      local_1d0 = "Map Id: {}";
      local_1c8 = 10;
      FUN_1800054e8(&local_148,&local_1d0,&DAT_180403bfc);
    }
    lVar13 = FUN_180116bf9();
    uVar9 = *(undefined4 *)(lVar13 + 0x48);
    lVar13 = FUN_180116bf9();
    *(float *)(lVar13 + 0x48) = *(float *)(lVar13 + 0x48) * DAT_1802deb50;
    uVar12 = FUN_180116bf9();
    FUN_180117a04(uVar12);
    FUN_180111069(&local_158);
    ppppuVar20 = (undefined8 ****)local_148;
    if (local_130 < 0x10) {
      ppppuVar20 = &local_148;
    }
    FUN_1801023ca(&local_118,ppppuVar20,0,0,CONCAT44(uVar17,(undefined4)local_158));
    FUN_180119e82();
    FUN_180111069(&local_158);
    FUN_180111069(local_100);
    fVar45 = (float)local_118;
    uVar23 = local_118 >> 0x20;
    FUN_180119e52(&local_170);
    fVar45 = DAT_1802dbb2c * ((float)local_100._0_8_ - fVar45);
    fVar50 = DAT_1802dbb2c * (SUB84(local_100._0_8_,4) - (float)uVar23);
    local_158 = CONCAT44((float)((ulonglong)local_170 >> 0x20) +
                         (float)(-(uint)(0.0 < fVar50) & (uint)fVar50),
                         (float)local_170 + (float)(-(uint)(0.0 < fVar45) & (uint)fVar45));
    FUN_180119eca();
    FUN_1801166df();
    ppppuVar20 = (undefined8 ****)local_148;
    if (local_130 < 0x10) {
      ppppuVar20 = &local_148;
    }
    FUN_18013309a(ppppuVar20,0);
    FUN_1801167a4();
    FUN_180117b11();
    lVar13 = FUN_180116bf9();
    *(undefined4 *)(lVar13 + 0x48) = uVar9;
    FUN_180001ef2(&local_148);
    goto LAB_180172823;
  }
  FUN_180111069(&local_158);
  FUN_180119e05(local_100);
  fVar50 = (float)local_100._0_8_;
  fVar61 = SUB84(local_100._0_8_,4);
  fVar62 = (float)local_158 + fVar50;
  fVar63 = (float)((ulonglong)local_158 >> 0x20) + fVar61;
  local_170 = CONCAT44(fVar63,fVar62);
  FUN_1801342dd(&DAT_180360633,&local_158,5);
  local_188 = FUN_180107ee8();
  uVar12 = *(undefined8 *)(local_188 + 0xe8);
  fVar45 = (float)((ulonglong)uVar12 >> 0x20);
  uVar11 = FUN_180116bd5();
  FUN_18018f5a4(uVar11,local_100,&local_170,1);
  local_f1 = FUN_18010759c(0);
  lVar13 = local_188;
  if (local_f1 != 0) {
    fVar47 = *(float *)(local_188 + 0xf8);
    if ((fVar47 != 0.0) || (NAN(fVar47))) {
      fVar35 = *(float *)(&DAT_1802dc3e0 + (ulonglong)(0.0 < fVar47) * 4) * DAT_180403ce8;
      fVar47 = DAT_1802dc268;
      if (DAT_1802dc268 <= fVar35) {
        fVar47 = fVar35;
      }
      fVar47 = (float)(-(uint)(DAT_1802dc2dc < fVar35) & (uint)DAT_1802dc2dc |
                      ~-(uint)(DAT_1802dc2dc < fVar35) & (uint)fVar47);
      fVar35 = (float)uVar12 - (float)local_100._0_8_;
      fVar44 = fVar45 - SUB84(local_100._0_8_,4);
      auVar38._0_4_ = fVar35 - (float)DAT_1804195e8;
      auVar38._4_4_ = fVar44 - (float)((ulonglong)DAT_1804195e8 >> 0x20);
      auVar38._8_8_ = 0;
      auVar46._4_4_ = DAT_180403ce8;
      auVar46._0_4_ = DAT_180403ce8;
      auVar46._8_8_ = 0;
      auVar46 = divps(auVar38,auVar46);
      DAT_1804195e8 = CONCAT44(fVar44 - fVar47 * auVar46._4_4_,fVar35 - fVar47 * auVar46._0_4_);
      DAT_180403ce8 = fVar47;
    }
    if ((*(char *)(local_188 + 0x108) != '\0') || (cVar8 = FUN_18010fd4d(2), cVar8 != '\0')) {
      FUN_180118f36(7);
    }
    if (((*(char *)(lVar13 + 0x108) == '\x01') && (cVar8 = FUN_18010fd4d(0), cVar8 != '\0')) ||
       (cVar8 = FUN_18010fd4d(2), cVar8 != '\0')) {
      if (DAT_180419600 == '\0') {
        DAT_180419600 = '\x01';
        DAT_1804195f8 = DAT_1804195e8;
        DAT_1804195f0 = uVar12;
      }
      else {
        DAT_1804195e8 =
             CONCAT44((float)((ulonglong)DAT_1804195f8 >> 0x20) +
                      (fVar45 - (float)((ulonglong)DAT_1804195f0 >> 0x20)),
                      (float)DAT_1804195f8 + ((float)uVar12 - (float)DAT_1804195f0));
      }
    }
    else {
      DAT_180419600 = '\0';
    }
  }
  uVar10 = DAT_1804194c8;
  local_15c = DAT_1804194cc;
  local_178 = FUN_18010129b(7);
  plVar18 = (longlong *)0x9;
  uVar9 = FUN_18010129b();
  uVar17 = local_178;
  if (0 < (int)uVar10) {
    local_174 = uVar10 * 0x30;
    plVar18 = (longlong *)(ulonglong)local_174;
    iVar28 = local_15c * 0x30;
    uVar23 = 0;
    do {
      iVar30 = (int)uVar23;
      if (local_15c < 1) {
        iVar30 = iVar30 + 0x18;
      }
      else {
        uVar26 = uVar23 / 0x18;
        local_17c = iVar30 + 0x18;
        iVar29 = local_17c;
        if ((int)plVar18 < local_17c) {
          iVar29 = (int)plVar18;
        }
        iVar27 = 0;
        local_190 = uVar23;
        do {
          fVar45 = (float)DAT_1804195e8 + (float)local_100._0_8_;
          fVar47 = (float)((ulonglong)DAT_1804195e8 >> 0x20) + SUB84(local_100._0_8_,4);
          local_148 = (undefined8 ***)
                      CONCAT44((float)iVar27 * DAT_180403ce8 + fVar47,
                               (float)iVar30 * DAT_180403ce8 + fVar45);
          iVar27 = iVar27 + 0x18;
          iVar31 = iVar27;
          if (iVar28 < iVar27) {
            iVar31 = iVar28;
          }
          local_118 = CONCAT44((float)iVar31 * DAT_180403ce8 + fVar47,
                               (float)iVar29 * DAT_180403ce8 + fVar45);
          uVar12 = FUN_180116bd5();
          uVar24 = uVar17;
          if ((uVar26 & 1) == 0) {
            uVar24 = uVar9;
          }
          in_stack_fffffffffffffe20 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffe20 & 0xffffffff00000000);
          in_stack_fffffffffffffe18 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffe18 & 0xffffffff00000000);
          FUN_180192d20(uVar12,&local_148,&local_118,uVar24,in_stack_fffffffffffffe18,
                        in_stack_fffffffffffffe20);
          uVar26 = (ulonglong)((int)uVar26 + 1);
        } while (iVar27 < iVar28);
        plVar18 = (longlong *)(ulonglong)local_174;
        uVar23 = local_190;
        iVar30 = local_17c;
      }
      uVar23 = (ulonglong)((int)uVar23 + 0x18);
    } while (iVar30 < (int)plVar18);
  }
  lVar13 = local_188;
  if (DAT_180419488 != (undefined8 ****)0x0) {
    if (DAT_180419490 == (longlong *)0x0) {
      plVar19 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(DAT_180419490 + 1) = (int)DAT_180419490[1] + 1;
      UNLOCK();
      plVar19 = DAT_180419490;
    }
    ppppuVar20 = DAT_180419488;
    local_148 = DAT_180419488;
    fVar45 = (float)DAT_1804195e8 + (float)local_100._0_8_;
    fVar47 = (float)((ulonglong)DAT_1804195e8 >> 0x20) + SUB84(local_100._0_8_,4);
    local_118 = CONCAT44(DAT_180403ce8 * 0.0 + fVar47,DAT_180403ce8 * 0.0 + fVar45);
    auVar36._0_8_ = (ulonglong)DAT_180419488[2] & 0xffffffff;
    auVar36._8_4_ = (int)((ulonglong)DAT_180419488[2] >> 0x20);
    auVar36._12_4_ = 0;
    local_120 = (undefined8 ***)
                CONCAT44(DAT_180403ce8 *
                         (float)(SUB168(auVar36 | _DAT_1802e1270,8) - DAT_1802e1270._8_8_) + fVar47,
                         DAT_180403ce8 *
                         (float)(SUB168(auVar36 | _DAT_1802e1270,0) - (double)DAT_1802e1270) +
                         fVar45);
    plStack_140 = plVar19;
    plVar18 = (longlong *)FUN_180116bd5();
    in_stack_fffffffffffffe20 = &local_150;
    local_150 = DAT_1802dc280;
    in_stack_fffffffffffffe18 = &local_168;
    local_168 = 0;
    local_1b8 = ppppuVar20[1];
    local_1c0 = 0;
    FUN_18019461a(plVar18,&local_1c0,&local_118,&local_120,in_stack_fffffffffffffe18,
                  in_stack_fffffffffffffe20,0xffffffff);
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar19 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        plVar18 = plVar19;
        (**(code **)*plVar19)();
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 8))();
          plVar18 = plVar19;
        }
      }
    }
  }
  puVar6 = DAT_1804194a0;
  auVar46 = _DAT_1802e1270;
  if (DAT_180419498 != DAT_1804194a0) {
    dVar3 = (double)DAT_1802e1270;
    dVar4 = DAT_1802e1270._8_8_;
    puVar21 = DAT_180419498;
    do {
      puVar14 = (ulonglong *)(DAT_180419470 + (longlong)*(int *)(puVar21 + 1) * 0x10);
      plVar18 = *(longlong **)(DAT_180419470 + 8 + (longlong)*(int *)(puVar21 + 1) * 0x10);
      if (plVar18 == (longlong *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        plVar19 = (longlong *)puVar14[1];
      }
      ppppuVar20 = (undefined8 ****)*puVar14;
      local_148 = ppppuVar20;
      plStack_140 = plVar19;
      if (ppppuVar20 != (undefined8 ****)0x0) {
        fVar47 = (float)DAT_1804195e8 + (float)local_100._0_8_;
        fVar48 = (float)((ulonglong)DAT_1804195e8 >> 0x20) + SUB84(local_100._0_8_,4);
        fVar45 = (float)*puVar21;
        fVar35 = (float)((ulonglong)*puVar21 >> 0x20);
        fVar51 = fVar45 * DAT_180403ce8 + fVar47;
        fVar57 = fVar35 * DAT_180403ce8 + fVar48;
        local_118 = CONCAT44(fVar57,fVar51);
        fVar44 = ((float)*(undefined8 *)((longlong)puVar21 + 0x14) + fVar45) * DAT_180403ce8 +
                 fVar47;
        fVar41 = ((float)((ulonglong)*(undefined8 *)((longlong)puVar21 + 0x14) >> 0x20) + fVar35) *
                 DAT_180403ce8 + fVar48;
        local_120 = (undefined8 ***)CONCAT44(fVar41,fVar44);
        if (fVar51 < fVar50) {
LAB_180171e7c:
          if (((fVar44 < fVar50) ||
              ((((plVar18 = (longlong *)(ulonglong)(ushort)-(ushort)(fVar61 <= fVar41),
                 (-(ushort)(fVar61 <= fVar41) & 1) == 0 || (fVar62 <= fVar44)) || (fVar63 <= fVar41)
                ) && (((fVar48 = fVar48 + (fVar35 + 0.0) * DAT_180403ce8, fVar48 < fVar61 ||
                       (fVar62 <= fVar44)) || (fVar63 <= fVar48)))))) &&
             ((((fVar47 = (fVar45 + 0.0) * DAT_180403ce8 + fVar47, fVar47 < fVar50 ||
                (fVar41 < fVar61)) || (fVar62 <= fVar47)) || (fVar63 <= fVar41))))
          goto LAB_180171f91;
        }
        else {
          iVar28 = -(uint)(fVar51 < fVar62);
          iVar30 = -(uint)(fVar57 < fVar63);
          auVar54._4_4_ = iVar30;
          auVar54._0_4_ = iVar28;
          auVar54._8_4_ = iVar30;
          auVar54._12_4_ = iVar30;
          auVar53._8_8_ = auVar54._8_8_;
          auVar53._4_4_ = iVar28;
          auVar53._0_4_ = iVar28;
          uVar17 = movmskpd((int)plVar18,auVar53);
          bVar15 = (byte)uVar17 >> 1;
          plVar18 = (longlong *)(ulonglong)CONCAT31((int3)((uint)uVar17 >> 8),bVar15);
          if ((fVar61 <= fVar57 & (byte)uVar17 & bVar15) == 0) goto LAB_180171e7c;
        }
        plVar18 = (longlong *)FUN_180116bd5();
        uVar23 = *(ulonglong *)((longlong)puVar21 + 0xc);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar23;
        auVar42._0_8_ = (ulonglong)ppppuVar20[2] & 0xffffffff;
        auVar42._8_4_ = (int)((ulonglong)ppppuVar20[2] >> 0x20);
        auVar42._12_4_ = 0;
        auVar43._0_4_ = (float)(SUB168(auVar42 | auVar46,0) - dVar3);
        auVar43._4_4_ = (float)(SUB168(auVar42 | auVar46,8) - dVar4);
        auVar43._8_8_ = 0;
        auVar37._0_4_ = (float)*(undefined8 *)((longlong)puVar21 + 0x14) + (float)uVar23;
        auVar37._4_4_ =
             (float)((ulonglong)*(undefined8 *)((longlong)puVar21 + 0x14) >> 0x20) +
             (float)(uVar23 >> 0x20);
        auVar37._8_8_ = 0;
        auVar38 = divps(auVar37,auVar43);
        local_150 = auVar38._0_8_;
        auVar38 = divps(auVar32,auVar43);
        local_168 = auVar38._0_8_;
        local_1a8 = ppppuVar20[1];
        local_1b0 = 0;
        in_stack_fffffffffffffe20 = &local_150;
        in_stack_fffffffffffffe18 = &local_168;
        FUN_18019461a(plVar18,&local_1b0,&local_118,&local_120,in_stack_fffffffffffffe18,
                      in_stack_fffffffffffffe20,0xffffffff);
      }
LAB_180171f91:
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          plVar18 = plVar19;
          (**(code **)*plVar19)();
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 8))();
            plVar18 = plVar19;
          }
        }
      }
      puVar21 = (undefined8 *)((longlong)puVar21 + 0x1c);
    } while (puVar21 != puVar6);
  }
  lVar7 = DAT_1804194b8;
  fVar44 = _UNK_1802e1294;
  fVar35 = _DAT_1802e1290;
  uVar10 = _DAT_1802e1280;
  fVar47 = DAT_1802de570._4_4_;
  fVar45 = (float)DAT_1802de570;
  uVar12 = DAT_1802dc280;
  if (DAT_1804194b0 != DAT_1804194b8) {
    iVar28 = 0;
    lVar22 = DAT_1804194b0;
    do {
      iVar30 = DAT_180403bf8;
      fVar41 = (float)(int)((*(ulonglong *)(lVar22 + 8) & 0xffffffff) * (ulonglong)uVar10);
      fVar48 = (float)(int)((*(ulonglong *)(lVar22 + 8) >> 0x20) * (ulonglong)uVar10);
      fVar51 = (float)local_100._0_8_;
      fVar57 = SUB84(local_100._0_8_,4);
      fVar52 = fVar51 + (float)DAT_1804195e8;
      fVar49 = (float)((ulonglong)DAT_1804195e8 >> 0x20);
      fVar58 = fVar57 + fVar49;
      fVar64 = DAT_180403ce8 * fVar41;
      fVar65 = DAT_180403ce8 * fVar48;
      fVar59 = fVar64 + fVar52;
      fVar60 = fVar65 + fVar58;
      local_118 = CONCAT44(fVar60,fVar59);
      fVar41 = (fVar41 + fVar35) * DAT_180403ce8;
      fVar48 = (fVar48 + fVar44) * DAT_180403ce8;
      fVar52 = fVar52 + fVar41;
      fVar58 = fVar58 + fVar48;
      local_120 = (undefined8 ***)CONCAT44(fVar58,fVar52);
      if ((iVar28 == DAT_180403bf8) && ((DAT_1804195e0 & 2) != 0)) {
        DAT_1804195e8 =
             CONCAT44(fVar49 + (((float)((ulonglong)local_170 >> 0x20) + fVar57) * fVar47 -
                               (fVar60 + fVar58) * fVar47),
                      (float)DAT_1804195e8 +
                      (((float)local_170 + fVar51) * fVar45 - (fVar59 + fVar52) * fVar45));
        DAT_1804195e0 = DAT_1804195e0 & 0xfffffffd;
      }
      if (fVar59 < fVar50) {
LAB_1801720e2:
        if (fVar50 <= fVar52) {
          iVar29 = -(uint)(fVar52 < fVar62);
          iVar27 = -(uint)(fVar58 < fVar63);
          auVar56._4_4_ = iVar27;
          auVar56._0_4_ = iVar29;
          auVar56._8_4_ = iVar27;
          auVar56._12_4_ = iVar27;
          auVar55._8_8_ = auVar56._8_8_;
          auVar55._4_4_ = iVar29;
          auVar55._0_4_ = iVar29;
          uVar17 = movmskpd((int)plVar18,auVar55);
          bVar15 = (byte)uVar17 >> 1;
          plVar18 = (longlong *)(ulonglong)CONCAT31((int3)((uint)uVar17 >> 8),bVar15);
          if ((fVar61 <= fVar58 & (byte)uVar17 & bVar15) != 0) goto LAB_18017216a;
        }
        fVar51 = fVar51 + (float)DAT_1804195e8;
        fVar57 = fVar57 + (float)((ulonglong)DAT_1804195e8 >> 0x20);
        fVar41 = fVar41 + fVar51;
        if ((((fVar50 <= fVar41) && (fVar65 = fVar65 + fVar57, fVar61 <= fVar65)) &&
            ((fVar41 < fVar62 && (fVar65 < fVar63)))) ||
           ((((fVar64 = fVar64 + fVar51, fVar50 <= fVar64 &&
              (fVar48 = fVar48 + fVar57, fVar61 <= fVar48)) && (fVar64 < fVar62)) &&
            (fVar48 < fVar63)))) goto LAB_18017216a;
      }
      else {
        auVar5._4_4_ = -(uint)(fVar59 < fVar62);
        auVar5._0_4_ = -(uint)(fVar59 < fVar62);
        auVar5._8_4_ = -(uint)(fVar60 < fVar63);
        auVar5._12_4_ = -(uint)(fVar60 < fVar63);
        uVar17 = movmskpd((int)plVar18,auVar5);
        bVar15 = (byte)uVar17 >> 1;
        plVar18 = (longlong *)(ulonglong)CONCAT31((int3)((uint)uVar17 >> 8),bVar15);
        if ((fVar61 <= fVar60 & (byte)uVar17 & bVar15) == 0) goto LAB_1801720e2;
LAB_18017216a:
        plVar18 = (longlong *)FUN_180116bd5();
        local_150 = uVar12;
        local_168 = 0;
        FUN_18016f89c(&local_148);
        local_198 = local_148[1];
        local_1a0 = 0;
        in_stack_fffffffffffffe20 = &local_150;
        in_stack_fffffffffffffe18 = &local_168;
        FUN_18019461a(plVar18,&local_1a0,&local_118,&local_120,in_stack_fffffffffffffe18,
                      in_stack_fffffffffffffe20,0xffffffff);
        plVar19 = plStack_140;
        if (plStack_140 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_140 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            plVar18 = plStack_140;
            (**(code **)*plStack_140)();
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 8))();
              plVar18 = plVar19;
            }
          }
        }
        uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe20 >> 0x20);
        if (iVar28 == iVar30) {
          plVar18 = (longlong *)FUN_180116bd5();
          fVar41 = DAT_180403ce8 * DAT_1802dbb50;
          uVar9 = FUN_18010129b();
          in_stack_fffffffffffffe20 = (undefined8 *)CONCAT44(uVar17,fVar41);
          in_stack_fffffffffffffe18 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffe18 & 0xffffffff00000000);
          FUN_180192c0a(plVar18,&local_118,&local_120,uVar9,in_stack_fffffffffffffe18,
                        in_stack_fffffffffffffe20,0);
        }
      }
      lVar22 = lVar22 + 0x48;
      iVar28 = iVar28 + 1;
    } while (lVar22 != lVar7);
  }
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe20 >> 0x20);
  if (*(char *)(lVar13 + 0x108) == '\0') {
    cVar8 = FUN_18010fd4d(2);
    fVar47 = DAT_1802dc418;
    fVar45 = DAT_1802dc410;
    uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe20 >> 0x20);
    ppppuVar20 = (undefined8 ****)(ulonglong)DAT_1804194c8;
    if ((int)DAT_1804194c8 < 1 || cVar8 != '\0') goto LAB_1801725df;
    bVar25 = false;
    iVar30 = 0;
    iVar28 = DAT_1804194cc;
    do {
      if (0 < iVar28) {
        iVar28 = 0;
        do {
          iVar29 = iVar28 * 0x30;
          fVar41 = (float)DAT_1804195e8 + (float)local_100._0_8_;
          fVar48 = (float)((ulonglong)DAT_1804195e8 >> 0x20) + SUB84(local_100._0_8_,4);
          fVar35 = (float)(iVar30 * 0x30) * DAT_180403ce8 + fVar41;
          fVar44 = ((float)iVar29 + fVar45) * DAT_180403ce8 + fVar48;
          fVar41 = ((float)(iVar30 * 0x30) + fVar45) * DAT_180403ce8 + fVar41;
          fVar48 = (float)iVar29 * DAT_180403ce8 + fVar48;
          local_120 = (undefined8 ***)CONCAT44(fVar48,fVar35);
          local_150 = CONCAT44(fVar44,fVar41);
          if (((fVar35 < fVar50) || (fVar48 < fVar61)) || ((fVar62 <= fVar35 || (fVar63 <= fVar48)))
             ) {
            if (fVar50 <= fVar41) {
              if (((fVar44 < fVar61) || (fVar62 <= fVar41)) || (fVar63 <= fVar44)) {
                iVar27 = -(uint)(fVar41 < fVar62);
                iVar31 = -(uint)(fVar48 < fVar63);
                auVar40._4_4_ = iVar31;
                auVar40._0_4_ = iVar27;
                auVar40._8_4_ = iVar31;
                auVar40._12_4_ = iVar31;
                auVar39._8_8_ = auVar40._8_8_;
                auVar39._4_4_ = iVar27;
                auVar39._0_4_ = iVar27;
                uVar17 = movmskpd((int)ppppuVar20,auVar39);
                bVar15 = fVar61 <= fVar48 & (byte)uVar17;
                iVar29 = CONCAT31((int3)((uint)iVar29 >> 8),bVar15);
                bVar16 = (byte)uVar17 >> 1;
                ppppuVar20 = (undefined8 ****)(ulonglong)CONCAT31((int3)((uint)uVar17 >> 8),bVar16);
                if ((bVar15 & bVar16) == 0) goto LAB_18017235f;
              }
              goto LAB_1801723d6;
            }
LAB_18017235f:
            if ((fVar50 <= fVar35) && (fVar61 <= fVar44)) {
              iVar27 = -(uint)(fVar35 < fVar62);
              iVar31 = -(uint)(fVar44 < fVar63);
              auVar34._4_4_ = iVar31;
              auVar34._0_4_ = iVar27;
              auVar34._8_4_ = iVar31;
              auVar34._12_4_ = iVar31;
              auVar33._8_8_ = auVar34._8_8_;
              auVar33._4_4_ = iVar27;
              auVar33._0_4_ = iVar27;
              uVar10 = movmskpd(iVar29,auVar33);
              if (((uVar10 & 1) == 0) || (((byte)uVar10 >> 1 & local_f1) == 0)) goto LAB_1801725b4;
              goto LAB_1801723e3;
            }
          }
          else {
LAB_1801723d6:
            if (local_f1 != 0) {
LAB_1801723e3:
              ppppuVar20 = (undefined8 ****)&local_120;
              cVar8 = FUN_180107af4(&local_120,&local_150,1);
              if (cVar8 != '\0') {
                cVar8 = FUN_1801083d6(0,0);
                if (cVar8 != '\0') {
                  DAT_180403cec = iVar30;
                  DAT_180403cf0 = iVar28;
                }
                cVar8 = FUN_18010fd4d(0);
                if (cVar8 == '\0') {
                  if (DAT_180403cf0 == iVar28 && DAT_180403cec == iVar30) {
                    lVar13 = FUN_180107ee8();
                    fVar35 = *(float *)(lVar13 + 0x6c) * DAT_1802de9b0;
                    FUN_1800c526e(&local_148);
                    if ((longlong)local_148 - (longlong)_DAT_180419608 < (longlong)fVar35 * 1000000)
                    {
                      FUN_180183715(iVar30,iVar28);
                      _DAT_180419608 = (undefined8 ****)0x0;
                    }
                    else {
                      if (DAT_1804194b0 != DAT_1804194b8) {
                        iVar29 = 0;
                        lVar13 = DAT_1804194b0;
                        do {
                          if ((*(int *)(lVar13 + 8) == iVar30) && (*(int *)(lVar13 + 0xc) == iVar28)
                             ) {
                            DAT_1804195e0 = DAT_1804195e0 | 1;
                            DAT_180403bf8 = iVar29;
                            DAT_1804195d8 = lVar13;
                            break;
                          }
                          iVar29 = iVar29 + 1;
                          lVar13 = lVar13 + 0x48;
                        } while (lVar13 != DAT_1804194b8);
                      }
                      FUN_1800c526e(&local_148);
                      _DAT_180419608 = (undefined8 ****)local_148;
                    }
                  }
                  DAT_180403cec = -1;
                  DAT_180403cf0 = -1;
LAB_180172524:
                  uVar12 = 0x1a;
                  fVar35 = fVar47;
                }
                else {
                  uVar12 = 0x1b;
                  fVar35 = DAT_1802dc414;
                  if (DAT_180403cf0 != iVar28 || DAT_180403cec != iVar30) goto LAB_180172524;
                }
                uStack_110 = 0;
                local_118 = 0;
                puVar14 = (ulonglong *)FUN_18010136d(uVar12);
                local_118 = *puVar14;
                uStack_110 = CONCAT44(fVar35 * *(float *)((longlong)puVar14 + 0xc),(int)puVar14[1]);
                uVar12 = FUN_180116bd5();
                uVar17 = FUN_18010130a();
                in_stack_fffffffffffffe20 =
                     (undefined8 *)((ulonglong)in_stack_fffffffffffffe20 & 0xffffffff00000000);
                in_stack_fffffffffffffe18 =
                     (undefined8 *)((ulonglong)in_stack_fffffffffffffe18 & 0xffffffff00000000);
                FUN_180192d20(uVar12,&local_120,&local_150,uVar17,in_stack_fffffffffffffe18,
                              in_stack_fffffffffffffe20);
                FUN_180183798(&local_148,iVar30,iVar28);
                ppppuVar20 = &local_148;
                if (0xf < local_130) {
                  ppppuVar20 = (undefined8 ****)local_148;
                }
                FUN_180107bf7("%s",ppppuVar20);
                ppppuVar20 = &local_148;
                FUN_180001ef2();
                bVar25 = true;
              }
            }
          }
LAB_1801725b4:
          iVar28 = iVar28 + 1;
        } while (iVar28 < DAT_1804194cc);
        ppppuVar20 = (undefined8 ****)(ulonglong)DAT_1804194c8;
        iVar28 = DAT_1804194cc;
      }
      uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe20 >> 0x20);
      iVar30 = iVar30 + 1;
    } while (iVar30 < (int)ppppuVar20);
    if (!bVar25) goto LAB_1801725df;
  }
  else {
LAB_1801725df:
    DAT_180403cec = -1;
    DAT_180403cf0 = -1;
  }
  uVar12 = FUN_180116bd5();
  FUN_18010136d(5);
  uVar9 = FUN_18010130a();
  fVar45 = (float)DAT_1804195e8 + (float)local_100._0_8_;
  fVar50 = (float)((ulonglong)DAT_1804195e8 >> 0x20) + SUB84(local_100._0_8_,4);
  local_148 = (undefined8 ***)
              CONCAT44(DAT_180403ce8 * (float)(int)(DAT_1804194cc * _DAT_1802e1280) + fVar50,
                       DAT_180403ce8 * (float)(int)(DAT_1804194c8 * _DAT_1802e1280) + fVar45);
  local_118 = CONCAT44(DAT_180403ce8 * 0.0 + fVar50,DAT_180403ce8 * 0.0 + fVar45);
  FUN_180192c0a(uVar12,&local_118,&local_148,uVar9,
                (ulonglong)in_stack_fffffffffffffe18 & 0xffffffff00000000,
                CONCAT44(uVar17,0x3f800000),0);
  uVar12 = FUN_180116bd5();
  FUN_18018f750(uVar12);
LAB_180172823:
  FUN_1800e86f2(&DAT_180419500);
  return;
}

