/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100eb009 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb009(void)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auStack_130 [12];
  float local_124;
  byte local_11d;
  int local_11c;
  uint local_118;
  float local_114;
  undefined8 local_110;
  undefined4 uStack_108;
  float fStack_104;
  undefined1 local_100 [8];
  float fStack_f8;
  float fStack_f4;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  uint local_7c;
  int local_78;
  int *local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined1 local_30 [8];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_130;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ec040;
  local_20 = ExceptionList;
  if (DAT_1039d504 != '\x01') {
    return;
  }
  ExceptionList = &local_20;
  FUN_1010c3e4(local_30);
  FUN_10114f9f(&local_d8);
  local_b0 = local_d8;
  fStack_ac = fStack_d4;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_d0._0_8_ = CONCAT44(local_30._4_4_ + fStack_d4,local_30._0_4_ + local_d8);
  local_d0._8_8_ = 0;
  local_38 = local_d0._0_8_;
  FUN_1012e242("##Dummy",local_30,5);
  local_11c = FUN_1010330d();
  register0x00001208 = 0;
  local_c0 = *(ulonglong *)(local_11c + 0xb4);
  FUN_10111ef5();
  FUN_101881b4(&local_d8,&local_38,1);
  local_11d = FUN_10102a1a(0);
  if (local_11d != 0) {
    fVar14 = *(float *)(local_11c + 0xc4);
    if ((fVar14 != 0.0) || (NAN(fVar14))) {
      fVar19 = *(float *)(&DAT_102b71b0 + (uint)(0.0 < fVar14) * 4) * DAT_10388fdc;
      fVar14 = DAT_102b71b8;
      if (DAT_102b71b8 <= fVar19) {
        fVar14 = fVar19;
      }
      fVar14 = (float)(-(uint)(DAT_102b710c < fVar19) & (uint)DAT_102b710c |
                      ~-(uint)(DAT_102b710c < fVar19) & (uint)fVar14);
      auVar21._0_4_ = ((float)local_c0._0_4_ - local_d8) - (float)DAT_1039d510;
      auVar21._4_4_ = ((float)local_c0._4_4_ - fStack_d4) - DAT_1039d510._4_4_;
      auVar21._8_4_ = (fStack_b8 - 0.0) - 0.0;
      auVar21._12_4_ = (fStack_b4 - 0.0) - 0.0;
      auVar22._4_4_ = DAT_10388fdc;
      auVar22._0_4_ = DAT_10388fdc;
      auVar22._8_8_ = 0;
      auVar22 = divps(auVar21,auVar22);
      DAT_1039d510 = CONCAT44(((float)local_c0._4_4_ - fStack_d4) - fVar14 * auVar22._4_4_,
                              ((float)local_c0._0_4_ - local_d8) - fVar14 * auVar22._0_4_);
      DAT_10388fdc = fVar14;
    }
    if ((*(char *)(local_11c + 0xd4) != '\0') || (cVar4 = FUN_1010b10c(2), cVar4 != '\0')) {
      FUN_10114115(7);
    }
    if (((*(char *)(local_11c + 0xd4) == '\x01') && (cVar4 = FUN_1010b10c(0), cVar4 != '\0')) ||
       (cVar4 = FUN_1010b10c(2), cVar4 != '\0')) {
      if (DAT_1039d528 == '\0') {
        DAT_1039d528 = '\x01';
        DAT_1039d518 = local_c0;
        DAT_1039d520._4_4_ = DAT_1039d510._4_4_;
        DAT_1039d520._0_4_ = (float)DAT_1039d510;
      }
      else {
        DAT_1039d510 = CONCAT44(DAT_1039d520._4_4_ +
                                ((float)local_c0._4_4_ - (float)((ulonglong)DAT_1039d518 >> 0x20)),
                                (float)DAT_1039d520 + ((float)local_c0._0_4_ - (float)DAT_1039d518))
        ;
      }
    }
    else {
      DAT_1039d528 = '\0';
    }
  }
  uVar8 = DAT_1039d4f4;
  fVar14 = (float)((int)DAT_1039d4f0 * 0x30);
  uVar5 = FUN_100fcbfd(7);
  local_a0 = (float)FUN_100fcba2(uVar5);
  uVar5 = FUN_100fcbfd(9);
  local_70 = (float)FUN_100fcba2(uVar5);
  local_124 = fVar14;
  if (0 < (int)fVar14) {
    uVar9 = 0;
    local_c0._0_4_ = uVar8 * 0x30;
    do {
      if ((int)local_c0._0_4_ < 1) {
        fVar14 = (float)(uVar9 + 0x18);
      }
      else {
        uVar8 = uVar9 / 0x18;
        _local_100 = ZEXT416((uint)(float)(int)uVar9);
        local_114 = (float)(uVar9 + 0x18);
        fVar14 = local_114;
        if ((int)local_124 < (int)local_114) {
          fVar14 = local_124;
        }
        local_60 = (float)(int)fVar14;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        local_18 = 0xffffffff;
        iVar10 = 0;
        local_118 = uVar9;
        do {
          fVar14 = (float)DAT_1039d510 + local_d8;
          fVar19 = (float)((ulonglong)DAT_1039d510 >> 0x20) + fStack_d4;
          local_90 = CONCAT44((float)iVar10 * DAT_10388fdc + fVar19,
                              (float)local_100._0_4_ * DAT_10388fdc + fVar14);
          iVar10 = iVar10 + 0x18;
          iVar11 = iVar10;
          if ((int)local_c0._0_4_ < iVar10) {
            iVar11 = local_c0._0_4_;
          }
          local_110 = CONCAT44((float)iVar11 * DAT_10388fdc + fVar19,
                               local_60 * DAT_10388fdc + fVar14);
          FUN_10111ef5();
          fVar14 = local_a0;
          if ((uVar8 & 1) == 0) {
            fVar14 = local_70;
          }
          FUN_1018b85a(&local_90,&local_110,fVar14,0,0);
          uVar8 = uVar8 + 1;
          fVar14 = local_114;
          uVar9 = local_118;
        } while (iVar10 < (int)local_c0._0_4_);
      }
      uVar9 = uVar9 + 0x18;
    } while ((int)fVar14 < (int)local_124);
  }
  local_60 = DAT_1039d4fc;
  if (DAT_1039d4f8 != DAT_1039d4fc) {
    local_a0 = (float)local_d0._4_4_;
    fStack_9c = (float)local_d0._4_4_;
    fStack_98 = (float)local_d0._4_4_;
    fStack_94 = (float)local_d0._4_4_;
    local_100._4_4_ = fStack_ac;
    local_100._0_4_ = fStack_ac;
    fStack_f8 = fStack_ac;
    fStack_f4 = fStack_ac;
    fVar14 = DAT_1039d4f8;
    do {
      local_c0._0_4_ = fVar14;
      fVar19 = (float)((double)((ulonglong)(uint)(*(int *)((int)fVar14 + 0x18) * 0x30) |
                               (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
      uVar8 = *(int *)((int)fVar14 + 0x1c) * 0x30;
      fVar23 = (float)((double)((ulonglong)uVar8 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
      fVar14 = (float)DAT_1039d510 + local_d8;
      fVar20 = (float)((ulonglong)DAT_1039d510 >> 0x20) + fStack_d4;
      fVar15 = DAT_10388fdc * (fVar19 + _DAT_102b71c0) + fVar14;
      fVar18 = DAT_10388fdc * (fVar23 + _UNK_102b71c4) + fVar20;
      fVar14 = (fVar19 + DAT_102b71d0) * DAT_10388fdc + fVar14;
      fVar20 = fVar20 + DAT_10388fdc * fVar23;
      local_90 = CONCAT44(fVar20,fVar15);
      local_110 = CONCAT44(fVar18,fVar14);
      if ((((local_b0 <= fVar15) && ((float)local_100._0_4_ <= fVar20)) &&
          ((fVar15 < (float)local_d0._0_4_ && (fVar20 < local_a0)))) ||
         ((local_b0 <= fVar14 &&
          (((((float)local_100._0_4_ <= fVar18 && (fVar14 < (float)local_d0._0_4_)) &&
            (fVar18 < local_a0)) ||
           ((((float)local_100._0_4_ <= fVar20 && (fVar14 < (float)local_d0._0_4_)) &&
            (fVar20 < local_a0)))))))) {
code_r0x100eb4f8:
        local_18 = 0xffffffff;
        FUN_10111ef5();
        local_e0 = DAT_102b70a0;
        local_e8 = 0;
        FUN_1016a67c(&local_78);
        local_18 = 0;
        uStack_40 = *(undefined4 *)(local_78 + 8);
        uStack_3c = *(undefined4 *)(local_78 + 0xc);
        local_48 = 0;
        FUN_1018d090(0,uStack_44,uStack_40,uStack_3c,&local_90,&local_110,&local_e8,&local_e0,
                     0xffffffff);
        piVar3 = local_74;
        local_18 = 0xffffffff;
        if (local_74 != (int *)0x0) {
          LOCK();
          piVar1 = local_74 + 1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_74)();
            LOCK();
            piVar1 = piVar3 + 2;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*piVar3 + 4))();
            }
          }
        }
      }
      else if (local_b0 <= fVar15) {
        iVar10 = -(uint)(fVar15 < (float)local_d0._0_4_);
        iVar11 = -(uint)(fVar18 < (float)local_d0._4_4_);
        auVar17._4_4_ = iVar11;
        auVar17._0_4_ = iVar10;
        auVar17._8_4_ = iVar11;
        auVar17._12_4_ = iVar11;
        auVar16._8_8_ = auVar17._8_8_;
        auVar16._4_4_ = iVar10;
        auVar16._0_4_ = iVar10;
        uVar5 = movmskpd(uVar8,auVar16);
        if ((byte)((byte)uVar5 >> 1 & (float)local_100._0_4_ <= fVar18 & (byte)uVar5) == 1)
        goto code_r0x100eb4f8;
      }
      fVar14 = (float)(local_c0._0_4_ + 0x20);
    } while (fVar14 != local_60);
  }
  if (*(char *)(local_11c + 0xd4) == '\0') {
    local_18 = 0xffffffff;
    cVar4 = FUN_1010b10c(2);
    if (DAT_1039d4f0 != 0.0 && cVar4 == '\0') {
      local_70 = (float)local_d0._4_4_;
      fStack_6c = (float)local_d0._4_4_;
      fStack_68 = (float)local_d0._4_4_;
      fStack_64 = (float)local_d0._4_4_;
      local_100._4_4_ = fStack_ac;
      local_100._0_4_ = fStack_ac;
      fStack_f8 = fStack_ac;
      fStack_f4 = fStack_ac;
      bVar7 = false;
      local_124 = 0.0;
      uVar8 = DAT_1039d4f4;
      fVar14 = DAT_1039d4f0;
      do {
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          local_60 = (float)((int)local_124 * 0x30);
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          local_a0 = local_60 + DAT_102b71d0;
          iVar10 = 0;
          uVar9 = 0;
          uVar8 = (int)local_124 * 0x30;
          do {
            local_c0._0_4_ = iVar10;
            fVar18 = (float)DAT_1039d510 + local_d8;
            fVar19 = (float)((ulonglong)DAT_1039d510 >> 0x20) + fStack_d4;
            fVar15 = fVar19 + DAT_10388fdc * (float)iVar10;
            fVar14 = DAT_10388fdc * local_60 + fVar18;
            fVar19 = DAT_10388fdc * ((float)iVar10 + DAT_102b71d0) + fVar19;
            fVar18 = fVar18 + local_a0 * DAT_10388fdc;
            local_e0 = CONCAT44(fVar15,fVar14);
            local_e8 = CONCAT44(fVar19,fVar18);
            bVar2 = local_11d;
            if ((((local_b0 <= fVar14) && ((float)local_100._0_4_ <= fVar15)) &&
                ((fVar14 < (float)local_d0._0_4_ && (fVar15 < local_70)))) ||
               ((local_b0 <= fVar18 &&
                (((((float)local_100._0_4_ <= fVar19 && (fVar18 < (float)local_d0._0_4_)) &&
                  (fVar19 < local_70)) ||
                 ((((float)local_100._0_4_ <= fVar15 && (fVar18 < (float)local_d0._0_4_)) &&
                  (fVar15 < local_70)))))))) {
joined_r0x100eb736:
              if (bVar2 != 0) {
                local_18 = 0xffffffff;
                cVar4 = FUN_10102f3a(&local_e0,&local_e8,1);
                if (cVar4 != '\0') {
                  cVar4 = FUN_1010377a(0,0);
                  if (cVar4 != '\0') {
                    DAT_10388fe0 = local_124;
                    DAT_10388fe4 = uVar9;
                  }
                  cVar4 = FUN_1010b10c(0);
                  local_118 = uVar9;
                  if (cVar4 == '\0') {
                    if (DAT_10388fe4 == uVar9 && DAT_10388fe0 == local_124) {
                      FUN_1005c5ac(DAT_1039d508,local_124,uVar9);
                    }
                    DAT_10388fe0 = -NAN;
                    DAT_10388fe4 = 0xffffffff;
LAB_100eb852:
                    uVar5 = 0x1a;
                    local_114 = DAT_102b71d8;
                  }
                  else {
                    uVar5 = 0x1b;
                    local_114 = DAT_102b71d4;
                    if (DAT_10388fe4 != uVar9 || DAT_10388fe0 != local_124) goto LAB_100eb852;
                  }
                  local_110 = 0;
                  fStack_104 = 0.0;
                  uStack_108 = 0;
                  puVar6 = (undefined8 *)FUN_100fcbfd(uVar5);
                  fStack_104 = local_114 * *(float *)((int)puVar6 + 0xc);
                  uStack_108 = *(undefined4 *)(puVar6 + 1);
                  local_110 = *puVar6;
                  FUN_10111ef5();
                  uVar5 = FUN_100fcba2(&local_110);
                  FUN_1018b85a(&local_e0,&local_e8,uVar5,0,0);
                  FUN_100eba78(local_118);
                  local_18 = 1;
                  puVar6 = &local_90;
                  if (0xf < local_7c) {
                    puVar6 = (undefined8 *)local_90;
                  }
                  FUN_10103022("%s",puVar6);
                  uVar9 = local_118;
                  local_18 = 0xffffffff;
                  FUN_10001fee();
                  bVar7 = true;
                }
              }
            }
            else if ((local_b0 <= fVar14) && ((float)local_100._0_4_ <= fVar19)) {
              iVar10 = -(uint)(fVar14 < (float)local_d0._0_4_);
              iVar11 = -(uint)(fVar19 < (float)local_d0._4_4_);
              auVar13._4_4_ = iVar11;
              auVar13._0_4_ = iVar10;
              auVar13._8_4_ = iVar11;
              auVar13._12_4_ = iVar11;
              auVar12._8_8_ = auVar13._8_8_;
              auVar12._4_4_ = iVar10;
              auVar12._0_4_ = iVar10;
              uVar8 = movmskpd(uVar8,auVar12);
              if ((uVar8 & 1) != 0) {
                bVar2 = (byte)uVar8 >> 1 & local_11d;
                goto joined_r0x100eb736;
              }
            }
            uVar9 = uVar9 + 1;
            iVar10 = local_c0._0_4_ + 0x30;
            uVar8 = DAT_1039d4f4;
            fVar14 = DAT_1039d4f0;
          } while (uVar9 < DAT_1039d4f4);
        }
        local_124 = (float)((int)local_124 + 1);
      } while ((uint)local_124 < (uint)fVar14);
      if (bVar7) goto code_r0x100eb95c;
    }
  }
  DAT_10388fe0 = -NAN;
  DAT_10388fe4 = 0xffffffff;
code_r0x100eb95c:
  local_18 = 0xffffffff;
  FUN_10111ef5();
  uVar5 = FUN_100fcbfd(5);
  uVar5 = FUN_100fcba2(uVar5);
  local_d8 = (float)DAT_1039d510 + local_d8;
  fStack_d4 = (float)((ulonglong)DAT_1039d510 >> 0x20) + fStack_d4;
  local_90 = CONCAT44(DAT_10388fdc *
                      (float)((double)((ulonglong)(DAT_1039d4f4 * 0x30) | (ulonglong)DAT_1028f6b0) -
                             DAT_1028f6b0) + fStack_d4,
                      DAT_10388fdc *
                      (float)((double)((ulonglong)(uint)((int)DAT_1039d4f0 * 0x30) |
                                      (ulonglong)DAT_1028f6b0) - DAT_1028f6b0) + local_d8);
  local_110 = CONCAT44(DAT_10388fdc * 0.0 + fStack_d4,DAT_10388fdc * 0.0 + local_d8);
  FUN_1018b762(&local_110,&local_90,uVar5,0,0x3f800000,0);
  FUN_10111ef5();
  FUN_10188384();
  ExceptionList = local_20;
  return;
}

