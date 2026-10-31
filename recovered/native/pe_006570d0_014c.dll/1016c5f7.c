/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016c5f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c5f7(void)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulonglong *puVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  ushort in_FPUControlWord;
  float10 fVar18;
  int iVar19;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined1 auStack_190 [12];
  int *local_184;
  byte local_17d;
  float local_17c;
  undefined8 local_178;
  uint local_164;
  undefined1 local_160 [8];
  float fStack_158;
  float fStack_154;
  undefined8 local_140;
  undefined4 uStack_138;
  float fStack_134;
  int local_124;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  undefined1 local_110 [24];
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_d8;
  ushort local_d2;
  undefined1 local_d0 [28];
  undefined8 local_b4;
  undefined8 local_ac;
  int local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int *local_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_74;
  float local_6c;
  float local_68;
  float local_64;
  char *local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 auVar21 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_190;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180120;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  if (DAT_1039d9d8 == '\x01') {
    local_28 = &stack0xfffffffc;
    local_24 = auStack_190;
    FUN_1010c3e4(&local_140);
    local_178 = local_140 & 0xffffffff;
    fVar18 = (float10)FUN_10103354();
    local_68 = (float)fVar18;
    FUN_1013125a((uint)local_68 ^ _DAT_1028f620,&local_178,&DAT_1032eee7);
    goto LAB_1016d867;
  }
  if (DAT_10389fc8 < 0) {
    if (DAT_10389fc8 == -3) {
      FUN_10001f66(&DAT_1032f24c);
    }
    else if (DAT_10389fc8 == -2) {
      local_28 = &stack0xfffffffc;
      local_24 = auStack_190;
      FUN_10001f66(&DAT_1032f20d);
    }
    else if (DAT_10389fc8 == -1) {
      local_28 = &stack0xfffffffc;
      local_24 = auStack_190;
      FUN_10001f66(&DAT_1032eed7);
    }
    else {
      local_60 = "Map Id: {}";
      uStack_5c = 10;
      local_28 = &stack0xfffffffc;
      local_24 = auStack_190;
      FUN_1000589a(&local_178,0xa1032fae5,&DAT_10389fc8);
    }
    local_18 = 0;
    iVar17 = FUN_10111f14();
    local_160._0_4_ = *(undefined4 *)(iVar17 + 0x38);
    iVar17 = FUN_10111f14();
    *(float *)(iVar17 + 0x38) = *(float *)(iVar17 + 0x38) * DAT_102b9150;
    FUN_10111f14();
    FUN_10112cf6();
    FUN_1010c3e4(&local_ac);
    if (local_164 < 0x10) {
      puVar9 = &local_178;
    }
    else {
      puVar9 = (undefined8 *)local_178;
    }
    FUN_100fdb2e(&local_140,puVar9,0,0,(float)local_ac);
    fVar18 = (float10)FUN_10115023();
    local_f0 = (float)fVar18;
    local_64 = local_f0;
    FUN_1010c3e4(&local_ac);
    local_f0 = local_f0 + (float)local_ac;
    FUN_1010c3e4(&local_118);
    local_110._4_4_ = fStack_114;
    local_110._0_4_ = local_118;
    local_110._8_8_ = 0;
    local_90 = (int *)local_140;
    fStack_8c = local_140._4_4_;
    uStack_88 = 0;
    uStack_84 = 0;
    FUN_10114ff4(&local_74);
    fVar24 = DAT_102b70e0 * ((float)local_110._0_4_ - (float)local_90);
    fVar28 = DAT_102b70e0 * ((float)local_110._4_4_ - fStack_8c);
    local_ac = CONCAT44((float)(local_74 >> 0x20) + (float)(-(uint)(0.0 < fVar28) & (uint)fVar28),
                        (float)local_74 + (float)(-(uint)(0.0 < fVar24) & (uint)fVar24));
    FUN_10115079(&local_ac);
    FUN_101119c9(local_f0);
    FUN_1012d079();
    FUN_10111a82();
    FUN_10112e00();
    iVar17 = FUN_10111f14();
    *(undefined4 *)(iVar17 + 0x38) = local_160._0_4_;
    local_18 = 0xffffffff;
    FUN_10001fee();
    goto LAB_1016d867;
  }
  local_28 = &stack0xfffffffc;
  local_24 = auStack_190;
  FUN_1010c3e4(&local_ac);
  FUN_10114f9f(&local_118);
  local_f0 = local_118;
  fStack_ec = fStack_114;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_d0._0_8_ =
       CONCAT44((float)((ulonglong)local_ac >> 0x20) + fStack_114,(float)local_ac + local_118);
  local_d0._8_8_ = 0;
  local_74 = local_d0._0_8_;
  FUN_1012e242("##Dummy",&local_ac,5);
  local_124 = FUN_1010330d();
  register0x00001208 = 0;
  local_160 = *(ulonglong *)(local_124 + 0xb4);
  FUN_10111ef5();
  FUN_101881b4(&local_118,&local_74,1);
  local_17d = FUN_10102a1a(0);
  if (local_17d != 0) {
    fVar24 = *(float *)(local_124 + 0xc4);
    if ((fVar24 != 0.0) || (NAN(fVar24))) {
      fVar28 = *(float *)(&DAT_102b71b0 + (uint)(0.0 < fVar24) * 4) * DAT_1038a08c;
      fVar24 = DAT_102b71b8;
      if (DAT_102b71b8 <= fVar28) {
        fVar24 = fVar28;
      }
      fVar24 = (float)(-(uint)(DAT_102b710c < fVar28) & (uint)DAT_102b710c |
                      ~-(uint)(DAT_102b710c < fVar28) & (uint)fVar24);
      auVar34._0_4_ = ((float)local_160._0_4_ - local_118) - (float)DAT_1039d9e0;
      auVar34._4_4_ =
           ((float)local_160._4_4_ - fStack_114) - (float)((ulonglong)DAT_1039d9e0 >> 0x20);
      auVar34._8_4_ = (fStack_158 - 0.0) - 0.0;
      auVar34._12_4_ = (fStack_154 - 0.0) - 0.0;
      auVar35._4_4_ = DAT_1038a08c;
      auVar35._0_4_ = DAT_1038a08c;
      auVar35._8_8_ = 0;
      auVar35 = divps(auVar34,auVar35);
      DAT_1039d9e0 = CONCAT44(((float)local_160._4_4_ - fStack_114) - fVar24 * auVar35._4_4_,
                              ((float)local_160._0_4_ - local_118) - fVar24 * auVar35._0_4_);
      DAT_1038a08c = fVar24;
    }
    if ((*(char *)(local_124 + 0xd4) != '\0') || (cVar8 = FUN_1010b10c(2), cVar8 != '\0')) {
      FUN_10114115(7);
    }
    if (((*(char *)(local_124 + 0xd4) == '\x01') && (cVar8 = FUN_1010b10c(0), cVar8 != '\0')) ||
       (cVar8 = FUN_1010b10c(2), cVar8 != '\0')) {
      if (DAT_1039d9f8 == '\0') {
        DAT_1039d9f8 = '\x01';
        DAT_1039d9e8 = local_160;
        DAT_1039d9f0._4_4_ = DAT_1039d9e0._4_4_;
        DAT_1039d9f0._0_4_ = (float)DAT_1039d9e0;
      }
      else {
        DAT_1039d9e0 = CONCAT44(DAT_1039d9f0._4_4_ +
                                ((float)local_160._4_4_ - (float)((ulonglong)DAT_1039d9e8 >> 0x20)),
                                (float)DAT_1039d9f0 + ((float)local_160._0_4_ - (float)DAT_1039d9e8)
                               );
      }
    }
    else {
      DAT_1039d9f8 = '\0';
    }
  }
  iVar17 = DAT_1039d934;
  local_a4 = DAT_1039d938;
  local_17c = (float)FUN_100fcb39();
  local_184 = (int *)FUN_100fcb39();
  if (0 < iVar17) {
    fVar24 = (float)(iVar17 * 0x30);
    fVar28 = 0.0;
    local_160._0_4_ = local_a4 * 0x30;
    local_6c = fVar24;
    do {
      if (local_a4 < 1) {
        fVar23 = (float)((int)fVar28 + 0x18);
      }
      else {
        uVar16 = (uint)fVar28 / 0x18;
        local_110._0_16_ = ZEXT416((uint)(float)(int)fVar28);
        local_d8 = (float)((int)fVar28 + 0x18);
        fVar23 = local_d8;
        if ((int)fVar24 < (int)local_d8) {
          fVar23 = fVar24;
        }
        local_90 = (int *)(float)(int)fVar23;
        fStack_8c = 0.0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_18 = 0xffffffff;
        iVar17 = 0;
        local_a0 = fVar28;
        do {
          fVar24 = (float)DAT_1039d9e0 + local_118;
          fVar28 = (float)((ulonglong)DAT_1039d9e0 >> 0x20) + fStack_114;
          local_178 = CONCAT44((float)iVar17 * DAT_1038a08c + fVar28,
                               (float)local_110._0_4_ * DAT_1038a08c + fVar24);
          iVar17 = iVar17 + 0x18;
          iVar19 = iVar17;
          if ((int)local_160._0_4_ < iVar17) {
            iVar19 = local_160._0_4_;
          }
          local_140 = CONCAT44((float)iVar19 * DAT_1038a08c + fVar28,
                               (float)local_90 * DAT_1038a08c + fVar24);
          FUN_10111ef5();
          piVar10 = (int *)local_17c;
          if ((uVar16 & 1) == 0) {
            piVar10 = local_184;
          }
          FUN_1018b85a(&local_178,&local_140,piVar10,0,0);
          uVar16 = uVar16 + 1;
          fVar23 = local_d8;
          fVar28 = local_a0;
          fVar24 = local_6c;
        } while (iVar17 < (int)local_160._0_4_);
      }
      fVar28 = (float)((int)fVar28 + 0x18);
    } while ((int)fVar23 < (int)fVar24);
  }
  if (DAT_1039d914 != 0) {
    local_110._0_4_ = 0;
    if (DAT_1039d918 != 0) {
      LOCK();
      *(int *)(DAT_1039d918 + 4) = *(int *)(DAT_1039d918 + 4) + 1;
      UNLOCK();
      local_110._0_4_ = DAT_1039d918;
    }
    local_178 = CONCAT44(local_110._0_4_,DAT_1039d914);
    local_18 = 1;
    fVar24 = (float)DAT_1039d9e0 + local_118;
    fVar28 = (float)((ulonglong)DAT_1039d9e0 >> 0x20) + fStack_114;
    local_140 = CONCAT44(DAT_1038a08c * 0.0 + fVar28,DAT_1038a08c * 0.0 + fVar24);
    auVar29._0_8_ = *(ulonglong *)(DAT_1039d914 + 0x10) & 0xffffffff;
    auVar29._8_4_ = (int)(*(ulonglong *)(DAT_1039d914 + 0x10) >> 0x20);
    auVar29._12_4_ = 0;
    local_120 = CONCAT44(DAT_1038a08c *
                         (float)(SUB168(auVar29 | _DAT_1028f6c0,8) - DAT_1028f6c0._8_8_) + fVar28,
                         DAT_1038a08c *
                         (float)(SUB168(auVar29 | _DAT_1028f6c0,0) - (double)DAT_1028f6c0) + fVar24)
    ;
    local_160._0_4_ = DAT_1039d914;
    FUN_10111ef5();
    local_f8 = DAT_102b70a0;
    local_b4 = 0;
    uStack_30 = *(undefined4 *)(local_160._0_4_ + 8);
    uStack_2c = *(undefined4 *)(local_160._0_4_ + 0xc);
    local_38 = 0;
    auVar5._4_4_ = uStack_30;
    auVar5._0_4_ = uStack_34;
    auVar5._8_4_ = 0;
    FUN_1018d090(auVar5 << 0x20,uStack_2c,&local_140,&local_120,&local_b4,&local_f8,0xffffffff);
    local_18 = 0xffffffff;
    uVar13 = local_110._0_4_;
    if ((int *)local_110._0_4_ != (int *)0x0) {
      LOCK();
      piVar10 = (int *)(local_110._0_4_ + 4);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (*(code *)**(undefined4 **)local_110._0_4_)();
        LOCK();
        piVar10 = (int *)(uVar13 + 8);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*(int *)uVar13 + 4))();
        }
      }
    }
  }
  local_184 = (int *)DAT_1039d920;
  local_a0 = (float)local_d0._4_4_;
  fStack_9c = (float)local_d0._4_4_;
  fStack_98 = (float)local_d0._4_4_;
  fStack_94 = (float)local_d0._4_4_;
  local_110._4_4_ = fStack_ec;
  local_110._0_4_ = fStack_ec;
  local_110._8_4_ = fStack_ec;
  local_110._12_4_ = fStack_ec;
  puVar9 = DAT_1039d91c;
  if (DAT_1039d91c != DAT_1039d920) {
    do {
      iVar14 = DAT_1039d908;
      local_160._0_4_ = puVar9;
      iVar17 = *(int *)(puVar9 + 1);
      local_90 = (int *)0x0;
      iVar19 = *(int *)(DAT_1039d908 + 4 + iVar17 * 8);
      if (iVar19 != 0) {
        LOCK();
        piVar10 = (int *)(iVar19 + 4);
        *piVar10 = *piVar10 + 1;
        UNLOCK();
        local_90 = *(int **)(iVar14 + 4 + iVar17 * 8);
      }
      local_17c = *(float *)(iVar14 + iVar17 * 8);
      local_178 = CONCAT44(local_90,local_17c);
      local_18 = 2;
      if (local_17c != 0.0) {
        fVar24 = (float)*puVar9;
        fVar23 = (float)((ulonglong)*puVar9 >> 0x20);
        fVar28 = (float)DAT_1039d9e0 + local_118;
        fVar32 = (float)((ulonglong)DAT_1039d9e0 >> 0x20) + fStack_114;
        fVar33 = fVar24 * DAT_1038a08c + fVar28;
        fVar40 = fVar23 * DAT_1038a08c + fVar32;
        local_140 = CONCAT44(fVar40,fVar33);
        fVar25 = ((float)*(undefined8 *)((int)puVar9 + 0x14) + fVar24) * DAT_1038a08c + fVar28;
        fVar27 = ((float)((ulonglong)*(undefined8 *)((int)puVar9 + 0x14) >> 0x20) + fVar23) *
                 DAT_1038a08c + fVar32;
        local_120 = CONCAT44(fVar27,fVar25);
        if (fVar33 < local_f0) {
LAB_1016cc59:
          if (((fVar25 < local_f0) ||
              ((((fVar27 < (float)local_110._0_4_ || ((float)local_d0._0_4_ <= fVar25)) ||
                (local_a0 <= fVar27)) &&
               (((fVar32 = fVar32 + (fVar23 + 0.0) * DAT_1038a08c, fVar32 < (float)local_110._0_4_
                 || ((float)local_d0._0_4_ <= fVar25)) || (local_a0 <= fVar32)))))) &&
             ((((fVar28 = (fVar24 + 0.0) * DAT_1038a08c + fVar28, fVar28 < local_f0 ||
                (fVar27 < (float)local_110._0_4_)) || ((float)local_d0._0_4_ <= fVar28)) ||
              (local_a0 <= fVar27)))) goto code_r0x1016cdc9;
        }
        else {
          iVar17 = -(uint)(fVar33 < (float)local_d0._0_4_);
          iVar19 = -(uint)(fVar40 < (float)local_d0._4_4_);
          auVar37._4_4_ = iVar19;
          auVar37._0_4_ = iVar17;
          auVar37._8_4_ = iVar19;
          auVar37._12_4_ = iVar19;
          auVar36._8_8_ = auVar37._8_8_;
          auVar36._4_4_ = iVar17;
          auVar36._0_4_ = iVar17;
          uVar13 = movmskpd(iVar14,auVar36);
          if ((byte)((float)local_110._0_4_ <= fVar40 & (byte)uVar13 & (byte)uVar13 >> 1) == 0)
          goto LAB_1016cc59;
        }
        FUN_10111ef5();
        uVar2 = *(ulonglong *)(local_160._0_4_ + 0xc);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar2;
        auVar26._0_4_ = (float)*(undefined8 *)(local_160._0_4_ + 0x14) + (float)uVar2;
        auVar26._4_4_ =
             (float)((ulonglong)*(undefined8 *)(local_160._0_4_ + 0x14) >> 0x20) +
             (float)(uVar2 >> 0x20);
        auVar26._8_8_ = 0;
        auVar30._0_8_ = *(ulonglong *)((int)local_17c + 0x10) & 0xffffffff;
        auVar30._8_4_ = (int)(*(ulonglong *)((int)local_17c + 0x10) >> 0x20);
        auVar30._12_4_ = 0;
        auVar31._0_4_ = (float)(SUB168(auVar30 | _DAT_1028f6c0,0) - (double)DAT_1028f6c0);
        auVar31._4_4_ = (float)(SUB168(auVar30 | _DAT_1028f6c0,8) - DAT_1028f6c0._8_8_);
        auVar31._8_8_ = 0;
        auVar35 = divps(auVar26,auVar31);
        local_f8 = auVar35._0_8_;
        auVar35 = divps(auVar20,auVar31);
        local_b4 = auVar35._0_8_;
        uStack_40 = *(undefined4 *)((int)local_17c + 8);
        uStack_3c = *(undefined4 *)((int)local_17c + 0xc);
        local_48 = 0;
        auVar6._4_4_ = uStack_40;
        auVar6._0_4_ = uStack_44;
        auVar6._8_4_ = uStack_3c;
        auVar6._12_4_ = 0;
        FUN_1018d090(auVar6 << 0x20,&local_140,&local_120,&local_b4,&local_f8,0xffffffff);
      }
code_r0x1016cdc9:
      piVar10 = local_90;
      local_18 = 0xffffffff;
      if (local_90 != (int *)0x0) {
        LOCK();
        piVar1 = local_90 + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_90)();
          LOCK();
          piVar1 = piVar10 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*piVar10 + 4))();
          }
        }
      }
      puVar9 = (undefined8 *)(local_160._0_4_ + 0x1c);
    } while ((int *)puVar9 != local_184);
  }
  local_184 = DAT_1039d92c;
  if (DAT_1039d928 != DAT_1039d92c) {
    fVar24 = 0.0;
    piVar10 = DAT_1039d928;
    do {
      fVar28 = (float)(int)((*(ulonglong *)(piVar10 + 2) & 0xffffffff) * (ulonglong)_DAT_102bb420);
      fVar23 = (float)(int)((int)(*(ulonglong *)(piVar10 + 2) >> 0x20) * _DAT_102bb420);
      fVar33 = local_118 + (float)DAT_1039d9e0;
      fVar32 = (float)((ulonglong)DAT_1039d9e0 >> 0x20);
      fVar40 = fStack_114 + fVar32;
      fVar25 = DAT_1038a08c * fVar28;
      fVar27 = DAT_1038a08c * fVar23;
      fVar28 = (fVar28 + _DAT_102bb430) * DAT_1038a08c;
      fVar23 = (fVar23 + _UNK_102bb434) * DAT_1038a08c;
      fVar41 = fVar25 + fVar33;
      fVar42 = fVar27 + fVar40;
      local_178 = CONCAT44(fVar42,fVar41);
      fVar33 = fVar33 + fVar28;
      fVar40 = fVar40 + fVar23;
      local_140 = CONCAT44(fVar40,fVar33);
      local_160._0_4_ = fVar24;
      local_17c = DAT_10389fc4;
      if ((fVar24 == DAT_10389fc4) && ((DAT_1039d9d4 & 2) != 0)) {
        DAT_1039d9e0 = CONCAT44(fVar32 + (((float)(local_74 >> 0x20) + fStack_114) *
                                          DAT_102b89c0._4_4_ -
                                         (fVar42 + fVar40) * DAT_102b89c0._4_4_),
                                (float)DAT_1039d9e0 +
                                (((float)local_74 + local_118) * (float)DAT_102b89c0 -
                                (fVar41 + fVar33) * (float)DAT_102b89c0));
        DAT_1039d9d4 = DAT_1039d9d4 & 0xfffffffd;
      }
      local_90 = piVar10;
      if (fVar41 < local_f0) {
LAB_1016cf1c:
        if (local_f0 <= fVar33) {
          iVar17 = -(uint)(fVar33 < (float)local_d0._0_4_);
          iVar19 = -(uint)(fVar40 < (float)local_d0._4_4_);
          auVar39._4_4_ = iVar19;
          auVar39._0_4_ = iVar17;
          auVar39._8_4_ = iVar19;
          auVar39._12_4_ = iVar19;
          auVar38._8_8_ = auVar39._8_8_;
          auVar38._4_4_ = iVar17;
          auVar38._0_4_ = iVar17;
          uVar13 = movmskpd(fVar24,auVar38);
          if ((byte)((float)local_110._0_4_ <= fVar40 & (byte)uVar13 & (byte)uVar13 >> 1) != 0)
          goto code_r0x1016cfd6;
        }
        fVar24 = local_118 + (float)DAT_1039d9e0;
        fVar32 = fStack_114 + (float)((ulonglong)DAT_1039d9e0 >> 0x20);
        fVar28 = fVar28 + fVar24;
        if ((((local_f0 <= fVar28) && (fVar27 = fVar27 + fVar32, (float)local_110._0_4_ <= fVar27))
            && ((fVar28 < (float)local_d0._0_4_ && (fVar27 < local_a0)))) ||
           ((((fVar25 = fVar25 + fVar24, local_f0 <= fVar25 &&
              (fVar23 = fVar23 + fVar32, (float)local_110._0_4_ <= fVar23)) &&
             (fVar25 < (float)local_d0._0_4_)) && (fVar23 < local_a0)))) goto code_r0x1016cfd6;
      }
      else {
        auVar4._4_4_ = -(uint)(fVar41 < (float)local_d0._0_4_);
        auVar4._0_4_ = -(uint)(fVar41 < (float)local_d0._0_4_);
        auVar4._8_4_ = -(uint)(fVar42 < (float)local_d0._4_4_);
        auVar4._12_4_ = -(uint)(fVar42 < (float)local_d0._4_4_);
        uVar13 = movmskpd(fVar24,auVar4);
        bVar12 = (byte)uVar13 >> 1;
        fVar24 = (float)CONCAT31((int3)((uint)uVar13 >> 8),bVar12);
        if (((float)local_110._0_4_ <= fVar42 & (byte)uVar13 & bVar12) == 0) goto LAB_1016cf1c;
code_r0x1016cfd6:
        local_18 = 0xffffffff;
        FUN_10111ef5();
        local_120 = DAT_102b70a0;
        local_f8 = 0;
        FUN_1016a67c(&local_b4);
        local_18 = 3;
        uStack_50 = *(undefined4 *)((int)local_b4 + 8);
        uStack_4c = *(undefined4 *)((int)local_b4 + 0xc);
        local_58 = 0;
        auVar7._4_4_ = uStack_50;
        auVar7._0_4_ = uStack_54;
        auVar7._8_4_ = uStack_4c;
        auVar7._12_4_ = 0;
        FUN_1018d090(auVar7 << 0x20,&local_178,&local_140,&local_f8,&local_120,0xffffffff);
        local_18 = 0xffffffff;
        piVar10 = local_b4._4_4_;
        if (local_b4._4_4_ != (int *)0x0) {
          LOCK();
          piVar1 = local_b4._4_4_ + 1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_b4._4_4_)();
            LOCK();
            piVar1 = piVar10 + 2;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*piVar10 + 4))();
            }
          }
        }
        if ((float)local_160._0_4_ == local_17c) {
          FUN_10111ef5();
          local_17c = DAT_1038a08c * DAT_102b8cb0;
          FUN_100fcb39();
          FUN_1018b762();
        }
      }
      piVar10 = local_90 + 0xe;
      fVar24 = (float)(local_160._0_4_ + 1);
    } while (piVar10 != local_184);
  }
  if (*(char *)(local_124 + 0xd4) == '\0') {
    local_18 = 0xffffffff;
    cVar8 = FUN_1010b10c(2);
    if (DAT_1039d934 < 1 || cVar8 != '\0') goto LAB_1016d586;
    bVar15 = false;
    local_184 = (int *)0x0;
    iVar17 = DAT_1039d938;
    iVar19 = DAT_1039d934;
    do {
      if (0 < iVar17) {
        local_90 = (int *)(float)((int)local_184 * 0x30);
        fStack_8c = 0.0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_17c = (float)local_90 + DAT_102b71d0;
        iVar14 = 0;
        do {
          local_160._0_4_ = iVar14;
          fVar27 = (float)(iVar14 * 0x30);
          fVar25 = (float)DAT_1039d9e0 + local_118;
          fVar28 = (float)((ulonglong)DAT_1039d9e0 >> 0x20) + fStack_114;
          fVar23 = fVar28 + DAT_1038a08c * fVar27;
          fVar24 = DAT_1038a08c * (float)local_90 + fVar25;
          fVar28 = DAT_1038a08c * (fVar27 + DAT_102b71d0) + fVar28;
          fVar25 = fVar25 + local_17c * DAT_1038a08c;
          local_120 = CONCAT44(fVar23,fVar24);
          local_f8 = CONCAT44(fVar28,fVar25);
          bVar12 = local_17d;
          if ((((local_f0 <= fVar24) && ((float)local_110._0_4_ <= fVar23)) &&
              ((fVar24 < (float)local_d0._0_4_ && (fVar23 < local_a0)))) ||
             ((local_f0 <= fVar25 &&
              (((((float)local_110._0_4_ <= fVar28 && (fVar25 < (float)local_d0._0_4_)) &&
                (fVar28 < local_a0)) ||
               ((((float)local_110._0_4_ <= fVar23 && (fVar25 < (float)local_d0._0_4_)) &&
                (fVar23 < local_a0)))))))) {
joined_r0x1016d2ea:
            if (bVar12 != 0) {
              local_18 = 0xffffffff;
              cVar8 = FUN_10102f3a(&local_120,&local_f8,1);
              if (cVar8 != '\0') {
                cVar8 = FUN_1010377a();
                if (cVar8 != '\0') {
                  DAT_1038a090 = local_184;
                  DAT_1038a094 = local_160._0_4_;
                }
                cVar8 = FUN_1010b10c(0);
                if (cVar8 == '\0') {
                  if (DAT_1038a094 == local_160._0_4_ && DAT_1038a090 == local_184) {
                    iVar17 = FUN_1010330d();
                    local_d2 = in_FPUControlWord | 0xc00;
                    local_80 = (ulonglong)ROUND(*(float *)(iVar17 + 0x58) * DAT_102b8f30);
                    FUN_100bee20(&local_178);
                    iVar19 = (local_178._4_4_ - _DAT_1039da04) -
                             (uint)((undefined8 *)local_178 < _DAT_1039da00);
                    lVar3 = (local_80 & 0xffffffff) * 1000000;
                    iVar14 = local_80._4_4_ * 1000000 + (int)((ulonglong)lVar3 >> 0x20);
                    uVar16 = (uint)((int)(undefined8 *)local_178 - _DAT_1039da00 < (uint)lVar3);
                    iVar17 = iVar19 - iVar14;
                    if ((SBORROW4(iVar19,iVar14) != SBORROW4(iVar17,uVar16)) ==
                        (int)(iVar17 - uVar16) < 0) {
                      if (DAT_1039d928 != DAT_1039d92c) {
                        fVar24 = 0.0;
                        piVar10 = DAT_1039d928;
                        do {
                          if (((int *)piVar10[2] == local_184) && (piVar10[3] == local_160._0_4_)) {
                            DAT_1039d9d4 = DAT_1039d9d4 | 1;
                            DAT_10389fc4 = fVar24;
                            DAT_1039d9d0 = piVar10;
                            break;
                          }
                          fVar24 = (float)((int)fVar24 + 1);
                          piVar10 = piVar10 + 0xe;
                        } while (piVar10 != DAT_1039d92c);
                      }
                      FUN_100bee20(&local_178);
                      _DAT_1039da04 = local_178._4_4_;
                      _DAT_1039da00 = (uint)(undefined8 *)local_178;
                    }
                    else {
                      FUN_1017ccfe();
                      _DAT_1039da04 = 0;
                      _DAT_1039da00 = 0;
                    }
                  }
                  DAT_1038a090 = (int *)0xffffffff;
                  DAT_1038a094 = -1;
code_r0x1016d495:
                  local_18 = 0xffffffff;
                  uVar13 = 0x1a;
                  local_d8 = DAT_102b71d8;
                }
                else {
                  uVar13 = 0x1b;
                  local_d8 = DAT_102b71d4;
                  if (DAT_1038a094 != local_160._0_4_ || DAT_1038a090 != local_184)
                  goto code_r0x1016d495;
                }
                local_140 = 0;
                fStack_134 = 0.0;
                uStack_138 = 0;
                puVar11 = (ulonglong *)FUN_100fcbfd(uVar13);
                fStack_134 = local_d8 * *(float *)((int)puVar11 + 0xc);
                uStack_138 = (undefined4)puVar11[1];
                local_140 = *puVar11;
                FUN_10111ef5();
                uVar13 = FUN_100fcba2(&local_140);
                FUN_1018b85a(&local_120,&local_f8,uVar13,0,0);
                FUN_1017cdad(local_160._0_4_);
                local_18 = 4;
                FUN_10103022();
                local_18 = 0xffffffff;
                FUN_10001fee();
                bVar15 = true;
              }
            }
          }
          else if ((local_f0 <= fVar24) && ((float)local_110._0_4_ <= fVar28)) {
            iVar17 = -(uint)(fVar24 < (float)local_d0._0_4_);
            iVar19 = -(uint)(fVar28 < (float)local_d0._4_4_);
            auVar22._4_4_ = iVar19;
            auVar22._0_4_ = iVar17;
            auVar22._8_4_ = iVar19;
            auVar22._12_4_ = iVar19;
            auVar21._8_8_ = auVar22._8_8_;
            auVar21._4_4_ = iVar17;
            auVar21._0_4_ = iVar17;
            uVar16 = movmskpd(iVar14 * 0x30,auVar21);
            if ((uVar16 & 1) != 0) {
              bVar12 = (byte)uVar16 >> 1 & local_17d;
              goto joined_r0x1016d2ea;
            }
          }
          iVar14 = local_160._0_4_ + 1;
          iVar17 = DAT_1039d938;
          iVar19 = DAT_1039d934;
        } while (iVar14 < DAT_1039d938);
      }
      local_184 = (int *)((int)local_184 + 1);
    } while ((int)local_184 < iVar19);
    if (!bVar15) goto LAB_1016d586;
  }
  else {
LAB_1016d586:
    DAT_1038a090 = (int *)0xffffffff;
    DAT_1038a094 = -1;
  }
  local_18 = 0xffffffff;
  FUN_10111ef5();
  uVar13 = FUN_100fcbfd(5);
  FUN_100fcba2(uVar13);
  local_118 = (float)DAT_1039d9e0 + local_118;
  fStack_114 = (float)((ulonglong)DAT_1039d9e0 >> 0x20) + fStack_114;
  local_178 = CONCAT44(DAT_1038a08c * (float)(int)(DAT_1039d938 * _DAT_102bb420) + fStack_114,
                       DAT_1038a08c * (float)(int)(DAT_1039d934 * _DAT_102bb420) + local_118);
  local_140 = CONCAT44(DAT_1038a08c * 0.0 + fStack_114,DAT_1038a08c * 0.0 + local_118);
  FUN_1018b762();
  FUN_10111ef5();
  FUN_10188384();
LAB_1016d867:
  FUN_100e4430();
  ExceptionList = local_20;
  return;
}

