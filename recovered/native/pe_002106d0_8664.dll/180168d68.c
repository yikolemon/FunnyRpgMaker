/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180168d68 */

void FUN_180168d68(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  short sVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined4 local_b0;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  longlong local_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  lVar8 = DAT_180419160;
  local_70 = DAT_180402640 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(int *)(param_1 + 0x74) != -1) {
    FUN_18016a84c();
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  if (*(char *)(lVar8 + 0x2a40) == '\x01') {
    FUN_180101ebe(0,&DAT_180360448,0);
  }
  fVar1 = *(float *)(param_1 + 0x80);
  *(float *)(lVar5 + 0x15c) = fVar1;
  if ((longlong)*(short *)(param_1 + 0x78) == 0) {
    lVar13 = param_1 + 0x1a8;
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x1c8) + (longlong)*(short *)(param_1 + 0x78) * 0x18 + -0x18;
  }
  iVar15 = *(int *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x7c);
  iVar14 = (int)*(short *)(param_1 + 0x22a);
  iVar10 = (int)*(short *)(param_1 + 0x228);
  if (((*(uint *)(param_1 + 0x94) & 1) != 0) &&
     (iVar15 == 0 || (*(uint *)(param_1 + 0x94) >> 0x10 & 1) != 0)) {
    *(float *)(lVar13 + 8) = (fVar1 - fVar2) + *(float *)(lVar13 + 8);
  }
  iVar15 = iVar15 + 1;
  if ((*(float *)(param_1 + 0x124) <= fVar1) && (fVar2 <= *(float *)(param_1 + 300))) {
    if ((*(short *)(param_1 + 0x20a) != -1) &&
       (((fVar22 = *(float *)(lVar8 + 0x11c), fVar2 <= fVar22 && (fVar22 < fVar1)) &&
        (*(int *)(lVar13 + 0x14) < 0)))) {
      *(undefined4 *)(lVar13 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    }
    iVar11 = *(int *)(param_1 + 0x9c);
    local_9c = iVar10;
    if ((iVar11 == 0x1000000) && (iVar11 = 0, (*(byte *)(param_1 + 4) & 0x40) != 0)) {
      iVar11 = FUN_18010129b((*(uint *)(param_1 + 0x98) & 1) + 0x33,DAT_1802ac570);
    }
    iVar10 = *(int *)(param_1 + 0xa0);
    if (iVar10 == 0x1000000) {
      iVar10 = 0;
    }
    local_a0 = 0;
    if ((0 < *(int *)(param_1 + 0x70)) && (local_a0 = 0, (*(byte *)(param_1 + 4) & 0x80) != 0)) {
      local_a0 = *(int *)(param_1 + 0xa4 + (ulonglong)((*(byte *)(param_1 + 0x96) & 1) == 0) * 4);
    }
    sVar4 = *(short *)(param_1 + 0x230);
    local_94 = iVar15;
    local_90 = lVar13;
    if ((-1 < sVar4 || iVar15 == iVar14) || (local_a0 != 0 || (iVar10 != 0 || iVar11 != 0))) {
      if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
        lVar8 = *(longlong *)(lVar5 + 800);
        uVar23 = *(undefined8 *)(param_1 + 0x148);
        *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(param_1 + 0x140);
        *(undefined8 *)(lVar8 + 0x68) = uVar23;
      }
      FUN_180195542(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar5 + 800),0);
    }
    if (iVar10 != 0 || iVar11 != 0) {
      uVar17 = -(uint)(*(float *)(param_1 + 0x130) <= *(float *)(param_1 + 0x110));
      uVar18 = -(uint)(*(float *)(param_1 + 0x134) <= fVar2);
      uVar19 = -(uint)(*(float *)(param_1 + 0x118) < *(float *)(param_1 + 0x138));
      uVar20 = -(uint)(fVar1 < *(float *)(param_1 + 0x13c));
      local_88._4_4_ = ~uVar18 & (uint)*(float *)(param_1 + 0x134) | (uint)fVar2 & uVar18;
      fStack_7c = (float)(~uVar20 & (uint)*(float *)(param_1 + 0x13c) | (uint)fVar1 & uVar20);
      local_88._0_4_ =
           ~uVar17 & (uint)*(float *)(param_1 + 0x130) | (uint)*(float *)(param_1 + 0x110) & uVar17;
      fStack_80 = (float)(~uVar19 & (uint)*(float *)(param_1 + 0x138) |
                         (uint)*(float *)(param_1 + 0x118) & uVar19);
      if ((iVar11 != 0) && ((float)local_88._4_4_ < fStack_7c)) {
        local_b0 = 0;
        local_b8 = 0;
        FUN_180192d20(*(undefined8 *)(lVar5 + 800),local_88,local_88 + 8,iVar11);
      }
      if ((iVar10 != 0) && ((float)local_88._4_4_ < fStack_7c)) {
        local_b0 = 0;
        local_b8 = 0;
        FUN_180192d20(*(undefined8 *)(lVar5 + 800),local_88,local_88 + 8,iVar10);
      }
    }
    local_98 = iVar14;
    if ((-1 < sVar4) && (-1 < (longlong)*(short *)(param_1 + 0x230))) {
      puVar12 = *(undefined4 **)(param_1 + 0x38);
      puVar16 = puVar12 + (longlong)*(short *)(param_1 + 0x230) * 2;
      do {
        sVar4 = *(short *)(puVar12 + 1);
        lVar8 = *(longlong *)(param_1 + 0x18);
        FUN_18016a505();
        uVar17 = -(uint)(*(float *)(param_1 + 0x130) <= (float)local_88._0_4_);
        uVar18 = -(uint)(*(float *)(param_1 + 0x134) <= (float)local_88._4_4_);
        uVar19 = -(uint)(fStack_80 < *(float *)(param_1 + 0x138));
        uVar20 = -(uint)(fStack_7c < *(float *)(param_1 + 0x13c));
        auVar24._0_4_ = ~uVar17 & (uint)*(float *)(param_1 + 0x130);
        auVar24._4_4_ = ~uVar18 & (uint)*(float *)(param_1 + 0x134);
        auVar24._8_4_ = ~uVar19 & (uint)*(float *)(param_1 + 0x138);
        auVar24._12_4_ = ~uVar20 & (uint)*(float *)(param_1 + 0x13c);
        auVar6._4_4_ = local_88._4_4_ & uVar18;
        auVar6._0_4_ = local_88._0_4_ & uVar17;
        auVar6._8_4_ = (uint)fStack_80 & uVar19;
        auVar6._12_4_ = (uint)fStack_7c & uVar20;
        _local_88 = auVar24 | auVar6;
        uVar21 = FUN_180102463(local_88,*(undefined4 *)(lVar8 + 0x24 + (longlong)(int)sVar4 * 0x74))
        ;
        local_88._0_4_ = uVar21;
        uVar21 = FUN_1800eebe2();
        auVar6 = _local_88;
        fStack_80 = (float)uVar21;
        auVar24 = _local_88;
        local_88._4_4_ = auVar6._4_4_;
        bVar7 = (float)local_88._4_4_ < fStack_7c;
        _local_88 = auVar24;
        if (bVar7) {
          local_b0 = 0;
          local_b8 = 0;
          FUN_180192d20(*(undefined8 *)(lVar5 + 800),local_88,local_88 + 8,*puVar12);
        }
        puVar12 = puVar12 + 2;
      } while (puVar12 <= puVar16);
    }
    if (((local_a0 != 0) && (*(float *)(param_1 + 0x134) <= fVar2)) &&
       (fVar2 < *(float *)(param_1 + 0x13c))) {
      local_b8 = local_a0;
      local_b0 = 0x3f800000;
      FUN_1801928fe(*(undefined8 *)(lVar5 + 800),*(undefined4 *)(param_1 + 0xac),
                    *(undefined4 *)(param_1 + 0xb0),fVar2);
    }
    lVar13 = local_90;
    iVar15 = local_94;
    iVar14 = local_98;
    iVar10 = local_9c;
    if (((local_94 == local_98) && (*(float *)(param_1 + 0x134) <= fVar1)) &&
       (fVar1 < *(float *)(param_1 + 0x13c))) {
      local_b8 = *(int *)(param_1 + 0xa4);
      local_b0 = 0x3f800000;
      FUN_1801928fe(*(undefined8 *)(lVar5 + 800),*(undefined4 *)(param_1 + 0xac),
                    *(undefined4 *)(param_1 + 0xb0),fVar1);
    }
  }
  if (iVar15 == iVar10) {
    if (0 < *(int *)(param_1 + 0x6c)) {
      uVar3 = *(undefined1 *)(param_1 + 0x238);
      lVar8 = 0x6e;
      lVar9 = 0;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + lVar8) = uVar3;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x74;
      } while (lVar9 < *(int *)(param_1 + 0x6c));
    }
    uVar23 = FUN_180102463(*(float *)(param_1 + 0x80) + DAT_1802ac570,
                           *(undefined4 *)(param_1 + 0x124));
    *(float *)(lVar13 + 0xc) = (float)uVar23 - *(float *)(param_1 + 0xf4);
    if (iVar15 == iVar14) {
      *(undefined1 *)(param_1 + 0x245) = 1;
      uVar21 = FUN_1800eebe2(uVar23,*(undefined4 *)(param_1 + 300));
      *(undefined4 *)(param_1 + 0x154) = uVar21;
      *(undefined4 *)(param_1 + 0x134) = uVar21;
      fVar1 = *(float *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 300);
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 300);
      *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x236);
      fVar2 = *(float *)(param_1 + 0x7c);
      fVar22 = (fVar1 + *(float *)(param_1 + 0x114)) - *(float *)(param_1 + 0xf4);
      *(float *)(lVar5 + 0x15c) = fVar22;
      *(float *)(param_1 + 0x80) = fVar22;
      *(float *)(param_1 + 0x7c) = fVar22 - (fVar1 - fVar2);
      if (0 < *(int *)(param_1 + 0x6c)) {
        lVar8 = 100;
        lVar13 = 0;
        do {
          lVar9 = *(longlong *)(param_1 + 0x18);
          *(undefined2 *)(lVar9 + -4 + lVar8) = *(undefined2 *)(lVar9 + lVar8);
          *(undefined4 *)(lVar9 + -0x3c + lVar8) = *(undefined4 *)(param_1 + 0x154);
          lVar13 = lVar13 + 1;
          lVar8 = lVar8 + 0x74;
        } while (lVar13 < *(int *)(param_1 + 0x6c));
      }
      FUN_18016a90f(lVar5,*(longlong *)(param_1 + 0x18) + 0x24);
      FUN_180195542(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar5 + 800),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x60));
    }
  }
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  *(undefined1 *)(param_1 + 0x23a) = 0;
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_d8);
}

