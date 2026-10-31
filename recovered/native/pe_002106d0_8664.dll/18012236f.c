/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012236f */

/* WARNING: Removing unreachable block (ram,0x000180122450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012236f(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  ulonglong local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8 [17];
  
  lVar18 = DAT_180419160;
  local_c8[3] = DAT_180402640 ^ (ulonglong)auStack_1a8;
  bVar15 = *(byte *)(DAT_180419160 + 0x84);
  local_c8[0] = FUN_180103228(*(undefined8 *)(param_1 + 0x48));
  lVar19 = 1;
  local_150 = param_1;
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_3 + 0x48) && (bVar15 & 1) == 0) {
    local_c8[1] = FUN_180103228();
    lVar19 = 2;
  }
  uVar7 = DAT_1802dc418;
  uVar8 = DAT_1802dc414;
  uVar9 = DAT_1802ac570;
  uVar6 = DAT_1802bb8d8;
  if ((bVar15 & 1) != 0) {
    uVar7 = DAT_1802dbb30;
    uVar8 = DAT_1802de900;
    uVar9 = DAT_1802de904;
    uVar6 = DAT_1802dc418;
  }
  uVar6 = FUN_18010129b(0x2a,uVar6);
  local_10c = FUN_18010129b(0x2a,uVar8);
  local_110 = FUN_18010129b(0x2a,uVar9);
  uVar7 = FUN_18010129b(0x3c,uVar7);
  if (*(longlong *)(param_3 + 0x4c8) == 0) {
    bVar15 = true;
  }
  else {
    bVar15 = 0 < *(int *)(*(longlong *)(param_3 + 0x4c8) + 0x30);
  }
  local_118 = lVar18;
  local_140 = lVar19;
  local_128 = param_2;
  local_120 = param_4;
  if (*(char *)(param_4 + 0xd8) != '\x01') goto LAB_180122989;
  fVar23 = *(float *)(param_4 + 0x4c);
  local_d8 = *(undefined8 *)(param_4 + 0x48);
  uStack_d0 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_4 + 0x50) >> 0x20) + fVar23,
                       (float)*(undefined8 *)(param_4 + 0x50) + *(float *)(param_4 + 0x48));
  if ((*(int *)(param_4 + 0xe8) == -1 & bVar15) == 1) {
    fVar21 = (float)FUN_18011a456();
    local_d8 = CONCAT44(fVar23 + fVar21,(float)local_d8);
LAB_180122540:
    if (*(char *)(param_4 + 0xd9) == '\x01') goto LAB_18012254d;
  }
  else {
    if (*(int *)(param_4 + 0xe8) == -1) goto LAB_180122540;
LAB_18012254d:
    lVar11 = local_140;
    lVar19 = local_150;
    local_148 = CONCAT71(local_148._1_7_,bVar15);
    lVar17 = 0;
    local_138 = param_3;
    do {
      uVar13 = local_c8[lVar17];
      local_e8 = *(undefined8 *)(lVar19 + 0x60);
      uStack_e0 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar19 + 0x68) >> 0x20) +
                           *(float *)(lVar19 + 100),
                           (float)*(undefined8 *)(lVar19 + 0x68) + *(float *)(lVar19 + 0x60));
      local_180 = FUN_18019c9e3(&local_d8,&local_e8,*(undefined4 *)(lVar18 + 0xed4));
      local_188 = CONCAT44(local_188._4_4_,*(undefined4 *)(lVar19 + 0x98));
      FUN_180192d20(uVar13,&local_d8,&uStack_d0,uVar6);
      lVar17 = lVar17 + 1;
    } while (lVar11 != lVar17);
    bVar15 = *(byte *)(local_120 + 0xd8) & (byte)local_148;
    param_3 = local_138;
    param_2 = local_128;
    param_4 = local_120;
  }
  if (((bVar15 == 0) || (*(int *)(param_4 + 0xe8) != -1)) || (*(char *)(param_4 + 0xd9) != '\x01'))
  goto LAB_180122989;
  local_188 = 0;
  FUN_180131a0e(param_4,0,&local_d8,0);
  lVar19 = local_150;
  fVar23 = (float)local_d8;
  fVar21 = local_d8._4_4_;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x40) == 0)) {
    if ((*(byte *)(local_150 + 0x16) & 0x80) == 0) {
      fVar22 = *(float *)(lVar18 + 0xe0c);
      goto LAB_1801226a7;
    }
  }
  else if ((*(byte *)(param_2 + 0x11) & 0x30) == 0) {
    fVar23 = (float)local_d8 +
             *(float *)(*(longlong *)(param_2 + 0x40) + 0x54) + *(float *)(lVar18 + 0xe0c);
  }
  else {
    fVar22 = *(float *)(lVar18 + 0xe0c);
LAB_1801226a7:
    FUN_1801556c0(&local_e8);
    fVar23 = fVar23 + fVar22 + (float)local_e8;
  }
  lVar17 = local_140;
  uVar6 = DAT_1802ac570;
  lVar11 = *(longlong *)(param_3 + 0x4c8);
  uVar20 = 1;
  if ((lVar11 == 0) || (lVar16 = *(longlong *)(lVar11 + 0x40), lVar16 == 0)) {
    lVar16 = 0;
    local_130 = 0;
  }
  else {
    uVar20 = *(uint *)(lVar16 + 8);
    local_130 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    param_4 = local_120;
    param_2 = local_128;
    if ((int)uVar20 < 1) goto LAB_180122989;
  }
  local_100 = (ulonglong)uVar20;
  uVar13 = 0;
  local_138 = param_3;
  local_108 = lVar16;
  do {
    lVar11 = param_3;
    if ((((char)local_130 == '\0') ||
        (lVar11 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 8 + uVar13 * 0x38), lVar11 != 0)) &&
       (local_148 = uVar13, cVar5 = FUN_180131fe0(lVar11,lVar19), uVar13 = local_148, cVar5 != '\0')
       ) {
      FUN_1801556c0(&local_f0,lVar11);
      fVar2 = local_f0;
      local_e8 = CONCAT44(fVar21,fVar23);
      uStack_e0 = CONCAT44(fVar21 + fStack_ec,fVar23 + local_f0);
      fVar22 = *(float *)(lVar18 + 0xe0c);
      uVar8 = FUN_180101385(*(undefined4 *)(lVar11 + 0x498),uVar6);
      uVar9 = FUN_180101385(*(undefined4 *)(lVar11 + 0x4a4),uVar6);
      uVar10 = FUN_180101385(*(undefined4 *)(lVar11 + 0x4b8),uVar6);
      FUN_1801013be(0,uVar8);
      FUN_1801013be(0x3a,uVar10);
      lVar18 = 0;
      do {
        uVar20 = *(uint *)(lVar11 + 0x14);
        if ((float)local_e8 < (float)local_d8) {
LAB_18012284f:
          uVar13 = local_c8[lVar18];
          FUN_18018f5a4(uVar13,&local_d8,&uStack_d0,0);
        }
        else {
          if (local_e8._4_4_ < local_d8._4_4_) goto LAB_18012284f;
          if ((float)uStack_d0 < (float)uStack_e0) goto LAB_18012284f;
          if (uStack_d0._4_4_ < uStack_e0._4_4_) goto LAB_18012284f;
          uVar13 = local_c8[lVar18];
        }
        uVar20 = uVar20 >> 0x12 & 1;
        FUN_180154daa(uVar13,&local_e8,uVar20,uVar9);
        local_188 = *(undefined8 *)(lVar11 + 8);
        local_168 = 0;
        uStack_160 = 0;
        local_178 = 0;
        local_180 = 0;
        local_170 = 0;
        FUN_1801551e2(uVar13,&local_e8,uVar20);
        if ((float)local_e8 < (float)local_d8) {
LAB_180122912:
          FUN_18018f750(uVar13);
        }
        else {
          if (local_e8._4_4_ < local_d8._4_4_) goto LAB_180122912;
          if ((float)uStack_d0 < (float)uStack_e0) goto LAB_180122912;
          if (uStack_d0._4_4_ < uStack_e0._4_4_) goto LAB_180122912;
        }
        lVar18 = lVar18 + 1;
      } while (lVar17 != lVar18);
      fVar23 = fVar23 + fVar2 + fVar22;
      FUN_180101625(2);
      uVar13 = local_148;
      lVar16 = local_108;
      lVar18 = local_118;
      lVar19 = local_150;
      param_3 = local_138;
    }
    uVar13 = uVar13 + 1;
    param_4 = local_120;
    param_2 = local_128;
  } while (uVar13 != local_100);
LAB_180122989:
  uVar6 = FUN_180102463(DAT_1802dbb3c);
  fVar3 = _UNK_1802de91c;
  fVar2 = _UNK_1802de918;
  fVar22 = _UNK_1802de914;
  fVar21 = _DAT_1802de910;
  fVar23 = DAT_1802dbb2c;
  lVar19 = param_4 + 0xf0;
  uVar13 = 0xffffffffffffffff;
  local_150 = lVar19;
  while (uVar13 != 4) {
    uVar14 = uVar13 + 1;
    lVar11 = uVar14 * 0x10;
    pfVar1 = (float *)(lVar19 + 8 + lVar11);
    if ((*(float *)(lVar19 + lVar11) < *pfVar1 || *(float *)(lVar19 + lVar11) == *pfVar1) &&
       (fVar25 = *(float *)(lVar19 + 4 + lVar11), pfVar1 = (float *)(lVar19 + 0xc + lVar11),
       fVar25 < *pfVar1 || fVar25 == *pfVar1)) {
      puVar12 = (undefined8 *)(lVar11 + lVar19);
      local_d8 = *puVar12;
      uStack_d0 = puVar12[1];
      local_e8._0_4_ = (float)*puVar12;
      local_e8._4_4_ = (float)((ulonglong)*puVar12 >> 0x20);
      uStack_e0._0_4_ = (float)puVar12[1];
      uStack_e0._4_4_ = (float)((ulonglong)puVar12[1] >> 0x20);
      local_e8 = CONCAT44(local_e8._4_4_ + fVar22,(float)local_e8 + fVar21);
      uStack_e0 = CONCAT44(uStack_e0._4_4_ + fVar3,(float)uStack_e0 + fVar2);
      if ((*(uint *)(param_4 + 0xe8) != (uint)uVar13) ||
         (uVar8 = local_110, *(char *)(param_4 + 0xdb) == '\0')) {
        uVar8 = local_10c;
      }
      lVar11 = 0;
      local_148 = uVar14;
      do {
        fVar25 = (float)local_e8;
        fVar24 = (local_e8._4_4_ + uStack_e0._4_4_) * fVar23;
        fVar4 = (float)uStack_e0;
        uVar14 = local_c8[lVar11];
        local_180 = 0;
        local_188._0_4_ = uVar6;
        FUN_180192d20(uVar14,&local_d8,&uStack_d0,uVar8);
        local_178 = 0;
        local_188 = CONCAT44(local_188._4_4_,uVar6);
        local_180 = 0x3f800000;
        FUN_180192c0a(uVar14,&local_e8,&uStack_e0,uVar7);
        if (uVar13 < 2) {
          fVar25 = (fVar25 + fVar4) * fVar23;
          local_f8 = (float)(int)((int)fVar25 - (uint)(fVar25 < 0.0 && (float)(int)fVar25 != fVar25)
                                 );
          fStack_ec = uStack_e0._4_4_;
          local_f4 = local_e8._4_4_;
          local_188 = CONCAT44(local_188._4_4_,0x3f800000);
          local_f0 = local_f8;
          FUN_180192790(uVar14,&local_f8,&local_f0,uVar7);
        }
        if (((uint)uVar13 & 0xfffffffe) == 2) {
          local_f4 = (float)(int)((int)fVar24 - (uint)((float)(int)fVar24 != fVar24 && fVar24 < 0.0)
                                 );
          local_f0 = (float)uStack_e0;
          local_f8 = (float)local_e8;
          local_188 = CONCAT44(local_188._4_4_,0x3f800000);
          fStack_ec = local_f4;
          FUN_180192790(uVar14,&local_f8,&local_f0,uVar7);
        }
        lVar11 = lVar11 + 1;
        lVar19 = local_150;
        uVar14 = local_148;
        lVar18 = local_118;
        param_4 = local_120;
        param_2 = local_128;
      } while (local_140 != lVar11);
    }
    if (((param_2 != 0) && ((*(byte *)(param_2 + 0x10) & 0x10) != 0)) ||
       (uVar13 = uVar14, *(char *)(lVar18 + 0x80) == '\x01')) break;
  }
  if (DAT_180402640 == (local_c8[3] ^ (ulonglong)auStack_1a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_c8[3] ^ (ulonglong)auStack_1a8);
}

