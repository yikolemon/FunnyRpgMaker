/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ef277 */

void FUN_1800ef277(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  byte bVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined4 uVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  undefined8 *in_stack_fffffffffffffe58;
  undefined8 *in_stack_fffffffffffffe60;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *****local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 ******local_160;
  longlong *local_158;
  ulonglong local_148;
  int local_13c;
  undefined4 local_138;
  int local_134;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_fc;
  byte local_f1;
  undefined8 local_f0;
  undefined8 *******pppppppuVar24;
  
  local_f0 = 0xfffffffffffffffe;
  if (DAT_180418cf8 != '\x01') {
    return;
  }
  FUN_180111069(local_190);
  FUN_180119e05(local_120);
  fVar37 = local_120._0_4_;
  fVar42 = local_120._4_4_;
  fVar43 = local_190._0_4_ + fVar37;
  fVar44 = local_190._4_4_ + fVar42;
  local_188 = CONCAT44(fVar44,fVar43);
  FUN_1801342dd(&DAT_180360633,local_190,5);
  local_128 = FUN_180107ee8();
  uVar18 = *(undefined8 *)(local_128 + 0xe8);
  fVar36 = (float)((ulonglong)uVar18 >> 0x20);
  uVar17 = FUN_180116bd5();
  FUN_18018f5a4(uVar17,local_120,&local_188,1);
  bVar10 = FUN_18010759c(0);
  if (bVar10 != 0) {
    fVar40 = *(float *)(local_128 + 0xf8);
    if ((fVar40 != 0.0) || (NAN(fVar40))) {
      fVar33 = *(float *)(&DAT_1802dc3e0 + (ulonglong)(0.0 < fVar40) * 4) * DAT_180402a68;
      fVar40 = DAT_1802dc268;
      if (DAT_1802dc268 <= fVar33) {
        fVar40 = fVar33;
      }
      fVar40 = (float)(-(uint)(DAT_1802dc2dc < fVar33) & (uint)DAT_1802dc2dc |
                      ~-(uint)(DAT_1802dc2dc < fVar33) & (uint)fVar40);
      fVar33 = (float)uVar18 - local_120._0_4_;
      fVar35 = fVar36 - local_120._4_4_;
      auVar38._0_4_ = fVar33 - (float)DAT_180418d08;
      auVar38._4_4_ = fVar35 - (float)((ulonglong)DAT_180418d08 >> 0x20);
      auVar38._8_8_ = 0;
      auVar39._4_4_ = DAT_180402a68;
      auVar39._0_4_ = DAT_180402a68;
      auVar39._8_8_ = 0;
      auVar39 = divps(auVar38,auVar39);
      DAT_180418d08 = CONCAT44(fVar35 - fVar40 * auVar39._4_4_,fVar33 - fVar40 * auVar39._0_4_);
      DAT_180402a68 = fVar40;
    }
    if ((*(char *)(local_128 + 0x108) != '\0') || (cVar11 = FUN_18010fd4d(2), cVar11 != '\0')) {
      FUN_180118f36(7);
    }
    if (((*(char *)(local_128 + 0x108) == '\x01') && (cVar11 = FUN_18010fd4d(0), cVar11 != '\0')) ||
       (cVar11 = FUN_18010fd4d(2), cVar11 != '\0')) {
      if (DAT_180418d20 == '\0') {
        DAT_180418d20 = '\x01';
        DAT_180418d18 = DAT_180418d08;
        DAT_180418d10 = uVar18;
      }
      else {
        DAT_180418d08 =
             CONCAT44((float)((ulonglong)DAT_180418d18 >> 0x20) +
                      (fVar36 - (float)((ulonglong)DAT_180418d10 >> 0x20)),
                      (float)DAT_180418d18 + ((float)uVar18 - (float)DAT_180418d10));
      }
    }
    else {
      DAT_180418d20 = '\0';
    }
  }
  uVar30 = DAT_180418cdc;
  iVar22 = DAT_180418cd8 * 0x30;
  local_f1 = bVar10;
  uVar18 = FUN_18010136d(7);
  local_138 = FUN_18010130a(uVar18);
  FUN_18010136d(9);
  uVar13 = FUN_18010130a();
  uVar23 = local_138;
  if (0 < iVar22) {
    iVar7 = uVar30 * 0x30;
    uVar19 = 0;
    local_134 = iVar22;
    do {
      iVar25 = (int)uVar19;
      if (iVar7 < 1) {
        iVar15 = iVar25 + 0x18;
      }
      else {
        uVar26 = uVar19 / 0x18;
        local_13c = iVar25 + 0x18;
        iVar14 = local_13c;
        if (iVar22 < local_13c) {
          iVar14 = iVar22;
        }
        iVar32 = 0;
        local_168 = uVar19;
        do {
          fVar36 = (float)DAT_180418d08 + local_120._0_4_;
          fVar40 = (float)((ulonglong)DAT_180418d08 >> 0x20) + local_120._4_4_;
          local_160 = (undefined8 ******)
                      CONCAT44((float)iVar32 * DAT_180402a68 + fVar40,
                               (float)iVar25 * DAT_180402a68 + fVar36);
          iVar32 = iVar32 + 0x18;
          iVar22 = iVar32;
          if (iVar7 < iVar32) {
            iVar22 = iVar7;
          }
          local_118 = CONCAT44((float)iVar22 * DAT_180402a68 + fVar40,
                               (float)iVar14 * DAT_180402a68 + fVar36);
          uVar18 = FUN_180116bd5();
          uVar28 = uVar23;
          if ((uVar26 & 1) == 0) {
            uVar28 = uVar13;
          }
          in_stack_fffffffffffffe60 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffe60 & 0xffffffff00000000);
          in_stack_fffffffffffffe58 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000);
          FUN_180192d20(uVar18,&local_160,&local_118,uVar28,in_stack_fffffffffffffe58,
                        in_stack_fffffffffffffe60);
          uVar26 = (ulonglong)((int)uVar26 + 1);
          uVar19 = local_168;
          iVar15 = local_13c;
          iVar22 = local_134;
        } while (iVar32 < iVar7);
      }
      uVar19 = (ulonglong)((int)uVar19 + 0x18);
    } while (iVar15 < iVar22);
  }
  lVar8 = DAT_180418ce8;
  uVar18 = DAT_1802dc280;
  if (DAT_180418ce0 != DAT_180418ce8) {
    fVar36 = (float)DAT_1802dc3f0;
    uVar19 = (ulonglong)DAT_1802dc3f0 >> 0x20;
    fVar40 = (float)DAT_1802dc400;
    uVar26 = (ulonglong)DAT_1802dc400 >> 0x20;
    lVar27 = DAT_180418ce0;
    do {
      iVar22 = *(int *)(lVar27 + 0x24) * 0x10;
      fVar34 = (float)(uint)(*(int *)(lVar27 + 0x20) * 0x30);
      fVar35 = (float)(uint)(*(int *)(lVar27 + 0x24) * 0x30);
      local_fc._0_4_ = (float)DAT_180418d08 + local_120._0_4_;
      fVar41 = (float)((ulonglong)DAT_180418d08 >> 0x20) + local_120._4_4_;
      fVar33 = (fVar34 + fVar36) * DAT_180402a68 + (float)local_fc;
      local_fc._4_4_ = (fVar35 + (float)uVar19) * DAT_180402a68 + fVar41;
      local_fc._0_4_ = (fVar34 + fVar40) * DAT_180402a68 + (float)local_fc;
      fVar41 = (fVar35 + (float)uVar26) * DAT_180402a68 + fVar41;
      local_118 = CONCAT44(fVar41,fVar33);
      if (((fVar33 < fVar37) || (fVar41 < fVar42)) || ((fVar43 <= fVar33 || (fVar44 <= fVar41)))) {
        if (fVar37 <= (float)local_fc) {
          if (((local_fc._4_4_ < fVar42) || (fVar43 <= (float)local_fc)) ||
             (fVar44 <= local_fc._4_4_)) {
            auVar6._4_4_ = -(uint)((float)local_fc < fVar43);
            auVar6._0_4_ = -(uint)((float)local_fc < fVar43);
            auVar6._8_4_ = -(uint)(fVar41 < fVar44);
            auVar6._12_4_ = -(uint)(fVar41 < fVar44);
            uVar23 = movmskpd(iVar22,auVar6);
            bVar10 = (byte)uVar23 >> 1;
            iVar22 = CONCAT31((int3)((uint)uVar23 >> 8),bVar10);
            if ((fVar42 <= fVar41 & (byte)uVar23 & bVar10) == 0) goto LAB_1800ef6c9;
          }
          goto LAB_1800ef732;
        }
LAB_1800ef6c9:
        if ((fVar37 <= fVar33) &&
           (auVar3._4_4_ = -(uint)(fVar33 < fVar43), auVar3._0_4_ = -(uint)(fVar33 < fVar43),
           auVar3._8_4_ = -(uint)(local_fc._4_4_ < fVar44),
           auVar3._12_4_ = -(uint)(local_fc._4_4_ < fVar44), uVar23 = movmskpd(iVar22,auVar3),
           (byte)((byte)uVar23 >> 1 & fVar42 <= local_fc._4_4_ & (byte)uVar23) == 1))
        goto LAB_1800ef732;
      }
      else {
LAB_1800ef732:
        uVar17 = FUN_180116bd5();
        local_130 = uVar18;
        local_170 = 0;
        FUN_18016f89c(&local_160);
        local_178 = local_160[1];
        local_180 = 0;
        in_stack_fffffffffffffe60 = &local_130;
        in_stack_fffffffffffffe58 = &local_170;
        FUN_18019461a(uVar17,&local_180,&local_118,&local_fc,in_stack_fffffffffffffe58,
                      in_stack_fffffffffffffe60,0xffffffff);
        plVar9 = local_158;
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_158 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
        }
      }
      lVar27 = lVar27 + 0x28;
    } while (lVar27 != lVar8);
  }
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  if (*(char *)(local_128 + 0x108) == '\0') {
    cVar11 = FUN_18010fd4d(2);
    bVar10 = local_f1;
    fVar40 = DAT_1802dc418;
    fVar36 = DAT_1802dc410;
    uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
    pppppppuVar24 = (undefined8 *******)(ulonglong)DAT_180418cd8;
    if (DAT_180418cd8 != 0 && cVar11 == '\0') {
      uVar19 = (ulonglong)DAT_180418cdc;
      bVar29 = false;
      uVar30 = 0;
      do {
        if ((int)uVar19 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulonglong)(uVar30 * 0x30);
          fVar33 = (float)(int)(uVar30 * 0x30);
          uVar31 = 0;
          iVar22 = 0;
          do {
            uVar23 = (undefined4)uVar19;
            fVar34 = (float)DAT_180418d08 + local_120._0_4_;
            local_fc._4_4_ = (float)((ulonglong)DAT_180418d08 >> 0x20) + local_120._4_4_;
            local_fc._0_4_ = fVar33 * DAT_180402a68 + fVar34;
            fVar35 = ((float)iVar22 + fVar36) * DAT_180402a68 + local_fc._4_4_;
            fVar34 = (fVar33 + fVar36) * DAT_180402a68 + fVar34;
            local_fc._4_4_ = (float)iVar22 * DAT_180402a68 + local_fc._4_4_;
            local_130 = CONCAT44(fVar35,fVar34);
            if (((((float)local_fc < fVar37) || (local_fc._4_4_ < fVar42)) ||
                (fVar43 <= (float)local_fc)) || (fVar44 <= local_fc._4_4_)) {
              if (fVar37 <= fVar34) {
                if (((fVar35 < fVar42) || (fVar43 <= fVar34)) || (fVar44 <= fVar35)) {
                  auVar5._4_4_ = -(uint)(fVar34 < fVar43);
                  auVar5._0_4_ = -(uint)(fVar34 < fVar43);
                  auVar5._8_4_ = -(uint)(local_fc._4_4_ < fVar44);
                  auVar5._12_4_ = -(uint)(local_fc._4_4_ < fVar44);
                  uVar13 = movmskpd((int)pppppppuVar24,auVar5);
                  bVar12 = fVar42 <= local_fc._4_4_ & (byte)uVar13;
                  uVar23 = (undefined4)CONCAT71((int7)(uVar19 >> 8),bVar12);
                  bVar21 = (byte)uVar13 >> 1;
                  pppppppuVar24 =
                       (undefined8 *******)(ulonglong)CONCAT31((int3)((uint)uVar13 >> 8),bVar21);
                  if ((bVar12 & bVar21) == 0) goto LAB_1800ef8db;
                }
                goto LAB_1800ef94a;
              }
LAB_1800ef8db:
              if ((fVar37 <= (float)local_fc) && (fVar42 <= fVar35)) {
                auVar4._4_4_ = -(uint)((float)local_fc < fVar43);
                auVar4._0_4_ = -(uint)((float)local_fc < fVar43);
                auVar4._8_4_ = -(uint)(fVar35 < fVar44);
                auVar4._12_4_ = -(uint)(fVar35 < fVar44);
                uVar16 = movmskpd(uVar23,auVar4);
                if (((uVar16 & 1) == 0) || (((byte)uVar16 >> 1 & bVar10) == 0)) goto LAB_1800efa83;
                goto LAB_1800ef952;
              }
            }
            else {
LAB_1800ef94a:
              if (bVar10 != 0) {
LAB_1800ef952:
                pppppppuVar24 = (undefined8 *******)&local_fc;
                cVar11 = FUN_180107af4(pppppppuVar24,&local_130,1);
                if (cVar11 != '\0') {
                  cVar11 = FUN_1801083d6(0,0);
                  if (cVar11 != '\0') {
                    DAT_180402a6c = uVar30;
                    DAT_180402a70 = uVar31;
                  }
                  cVar11 = FUN_18010fd4d(0);
                  if (cVar11 == '\0') {
                    if (DAT_180402a70 == uVar31 && DAT_180402a6c == uVar30) {
                      FUN_18005b821(DAT_180418d00,uVar30,uVar31);
                    }
                    DAT_180402a6c = 0xffffffff;
                    DAT_180402a70 = 0xffffffff;
LAB_1800ef9f3:
                    uVar18 = 0x1a;
                    fVar35 = fVar40;
                  }
                  else {
                    uVar18 = 0x1b;
                    fVar35 = DAT_1802dc414;
                    if (DAT_180402a70 != uVar31 || DAT_180402a6c != uVar30) goto LAB_1800ef9f3;
                  }
                  uStack_110 = 0;
                  local_118 = 0;
                  puVar20 = (undefined8 *)FUN_18010136d(uVar18);
                  local_118 = *puVar20;
                  uStack_110 = CONCAT44(fVar35 * *(float *)((longlong)puVar20 + 0xc),
                                        *(undefined4 *)(puVar20 + 1));
                  uVar18 = FUN_180116bd5();
                  uVar23 = FUN_18010130a();
                  in_stack_fffffffffffffe60 =
                       (undefined8 *)((ulonglong)in_stack_fffffffffffffe60 & 0xffffffff00000000);
                  in_stack_fffffffffffffe58 =
                       (undefined8 *)((ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000);
                  FUN_180192d20(uVar18,&local_fc,&local_130,uVar23,in_stack_fffffffffffffe58,
                                in_stack_fffffffffffffe60);
                  FUN_1800efd6f(&local_160,uVar30,uVar31);
                  pppppppuVar24 = &local_160;
                  if (0xf < local_148) {
                    pppppppuVar24 = (undefined8 *******)local_160;
                  }
                  FUN_180107bf7("%s",pppppppuVar24);
                  pppppppuVar24 = &local_160;
                  FUN_180001ef2();
                  bVar29 = true;
                }
              }
            }
LAB_1800efa83:
            uVar31 = uVar31 + 1;
            uVar19 = (ulonglong)DAT_180418cdc;
            iVar22 = iVar22 + 0x30;
          } while (uVar31 < DAT_180418cdc);
          pppppppuVar24 = (undefined8 *******)(ulonglong)DAT_180418cd8;
        }
        uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
        uVar30 = uVar30 + 1;
      } while (uVar30 < (uint)pppppppuVar24);
      if (bVar29) goto LAB_1800efac6;
    }
  }
  DAT_180402a6c = 0xffffffff;
  DAT_180402a70 = 0xffffffff;
LAB_1800efac6:
  uVar18 = FUN_180116bd5();
  uVar17 = FUN_18010136d(5);
  uVar13 = FUN_18010130a(uVar17);
  fVar37 = (float)DAT_180418d08 + local_120._0_4_;
  fVar42 = (float)((ulonglong)DAT_180418d08 >> 0x20) + local_120._4_4_;
  local_160 = (undefined8 ******)
              CONCAT44(DAT_180402a68 * (float)(DAT_180418cdc * 0x30) + fVar42,
                       DAT_180402a68 * (float)(DAT_180418cd8 * 0x30) + fVar37);
  local_118 = CONCAT44(DAT_180402a68 * 0.0 + fVar42,DAT_180402a68 * 0.0 + fVar37);
  FUN_180192c0a(uVar18,&local_118,&local_160,uVar13,
                (ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000,
                CONCAT44(uVar23,0x3f800000),0);
  uVar18 = FUN_180116bd5();
  FUN_18018f750(uVar18);
  return;
}

