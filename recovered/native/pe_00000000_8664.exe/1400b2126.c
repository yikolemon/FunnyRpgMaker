/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2126 */

ulonglong FUN_1400b2126(undefined8 param_1,byte param_2,uint param_3,float *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  byte bVar10;
  uint uVar11;
  undefined7 uVar13;
  undefined8 *puVar12;
  undefined8 uVar14;
  ulonglong uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_138 [32];
  uint *local_118;
  longlong local_110;
  undefined8 *local_108;
  uint local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  byte *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  char local_bf;
  byte local_be;
  byte local_bd;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  uint local_90;
  uint uStack_8c;
  byte local_81;
  ulonglong local_80;
  
  lVar4 = DAT_140f2a910;
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_138;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  local_81 = param_2;
  if (*(char *)(lVar2 + 0x10e) != '\0') {
LAB_1400b2190:
    param_4 = (float *)0x0;
    goto LAB_1400b2193;
  }
  local_100 = FUN_140080066(lVar2,param_1,0);
  uVar8 = FUN_14007b050(param_1,0);
  local_118 = (uint *)CONCAT44(local_118._4_4_,0xbf800000);
  FUN_14007b686(&local_90,param_1,uVar8,0);
  fVar23 = (float)*(undefined8 *)param_4;
  fVar20 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  uVar17 = -(uint)(fVar23 != 0.0);
  uVar18 = -(uint)(fVar20 != 0.0);
  local_98 = CONCAT44(~uVar18 & uStack_8c,~uVar17 & local_90) |
             CONCAT44((uint)fVar20 & uVar18,(uint)fVar23 & uVar17);
  local_e0 = *(undefined8 *)(lVar2 + 0x158);
  fVar23 = (float)((ulonglong)local_e0 >> 0x20) + *(float *)(lVar2 + 400);
  _local_a0 = CONCAT44(fVar23,(float)local_e0);
  FUN_14008a82c();
  pfVar9 = (float *)(lVar2 + 0x2a8);
  if ((param_3 & 2) == 0) {
    pfVar9 = &local_a0;
  }
  fVar20 = *pfVar9;
  if (((param_3 >> 0x18 & 1) == 0) && ((*param_4 != 0.0 || (NAN(*param_4))))) {
    fVar19 = (float)local_98;
  }
  else {
    pfVar9 = (float *)(lVar2 + 0x2b0);
    if ((param_3 & 2) == 0) {
      pfVar9 = (float *)(lVar2 + 0x2a0);
    }
    fVar19 = (float)FUN_14007b71f(local_90,*pfVar9 - fVar20);
    local_98 = CONCAT44(local_98._4_4_,fVar19);
  }
  local_b8 = CONCAT44(fVar23,fVar20);
  uStack_b0 = CONCAT44(local_98._4_4_ + fVar23,fVar19 + fVar20);
  if ((param_3 >> 0x1a & 1) == 0) {
    fVar21 = 0.0;
    if ((param_3 & 2) == 0) {
      fVar21 = *(float *)(lVar4 + 0xe04);
    }
    fVar22 = (float)(int)(DAT_1401c8640._4_4_ * *(float *)(lVar4 + 0xe08));
    local_b8 = CONCAT44(fVar23 - fVar22,fVar20 - (float)(int)((float)DAT_1401c8640 * fVar21));
    uStack_b0 = CONCAT44(local_98._4_4_ + fVar23 + (*(float *)(lVar4 + 0xe08) - fVar22),
                         fVar19 + fVar20 + (fVar21 - (float)(int)((float)DAT_1401c8640 * fVar21)));
  }
  uVar17 = param_3 & 8;
  if ((param_3 & 2) == 0) {
    uVar14 = 0;
    cVar5 = FUN_14008a9ce(&local_b8,local_100,0,uVar17 * 8);
  }
  else {
    uVar7 = *(undefined4 *)(lVar2 + 0x2b8);
    uVar1 = *(undefined4 *)(lVar2 + 0x2c0);
    *(undefined4 *)(lVar2 + 0x2b8) = *(undefined4 *)(lVar2 + 0x2a8);
    *(undefined4 *)(lVar2 + 0x2c0) = *(undefined4 *)(lVar2 + 0x2b0);
    uVar14 = 0;
    cVar5 = FUN_14008a9ce(&local_b8,local_100,0,uVar17 * 8);
    *(undefined4 *)(lVar2 + 0x2b8) = uVar7;
    *(undefined4 *)(lVar2 + 0x2c0) = uVar1;
  }
  bVar16 = (*(byte *)(lVar4 + 0x1fe6) & 0x40) == 0;
  local_f0 = (byte *)(lVar4 + 0x1fe4);
  uVar15 = CONCAT71((int7)((ulonglong)uVar14 >> 8),bVar16);
  uVar13 = (undefined7)((ulonglong)local_f0 >> 8);
  local_f4 = (undefined4)CONCAT71(uVar13,1);
  if (cVar5 == '\0') {
    if ((((bVar16) || (*(char *)(lVar4 + 0x25e0) != '\x01')) ||
        (*(float *)(lVar4 + 0x25f0) <= local_b8._4_4_)) ||
       ((uStack_b0._4_4_ < *(float *)(lVar4 + 0x25e8) ||
         uStack_b0._4_4_ == *(float *)(lVar4 + 0x25e8) ||
        (*(float *)(lVar4 + 0x25ec) <= (float)local_b8)))) goto LAB_1400b2190;
    uVar15 = 0;
    local_f4 = 0;
    param_4 = (float *)0x0;
    if ((float)uStack_b0 < *(float *)(lVar4 + 0x25e4) ||
        (float)uStack_b0 == *(float *)(lVar4 + 0x25e4)) goto LAB_1400b2193;
  }
  cVar5 = (char)((*(uint *)(lVar4 + 0x1fa0) & 0x40) >> 6);
  local_fc = (uint)uVar15;
  local_e8 = uVar8;
  if (cVar5 == '\0' && uVar17 != 0) {
    FUN_14008f898(CONCAT71(uVar13,1));
    uVar15 = (ulonglong)local_fc;
  }
  cVar6 = (char)uVar15;
  if ((param_3 & 2) != 0) {
    if (*(longlong *)(lVar4 + 0x24f8) == 0) {
      if (*(longlong *)(lVar2 + 0x208) != 0) {
        FUN_14011666f();
        goto LAB_1400b24f3;
      }
    }
    else {
      FUN_140112c39();
LAB_1400b24f3:
      cVar6 = (char)local_fc;
    }
    *(byte *)(lVar4 + 0x1fe9) = *(byte *)(lVar4 + 0x1fe9) | 2;
    uVar7 = *(undefined4 *)(lVar2 + 700);
    uVar1 = *(undefined4 *)(lVar2 + 0x2c0);
    uVar3 = *(undefined4 *)(lVar2 + 0x2c4);
    *(undefined4 *)(lVar4 + 0x201c) = *(undefined4 *)(lVar2 + 0x2b8);
    *(undefined4 *)(lVar4 + 0x2020) = uVar7;
    *(undefined4 *)(lVar4 + 0x2024) = uVar1;
    *(undefined4 *)(lVar4 + 0x2028) = uVar3;
  }
  uVar18 = local_100;
  uVar11 = param_3 >> 0x10 & 0x80;
  local_bc = uVar11 + 0x120;
  if ((param_3 & 4) == 0) {
    local_bc = uVar11;
  }
  local_bc = local_bc + (param_3 >> 0x12 & 0x10 | param_3 >> 7 & 0x100000 | param_3 >> 3 & 0x20000);
  if (((param_3 & 0x10) != 0) || ((local_f0[1] & 0x40) != 0)) {
    local_bc = local_bc | 0x1000;
  }
  if (cVar6 == '\0') {
    param_4 = (float *)(ulonglong)local_100;
    FUN_1400af0f8(param_4,&local_81,&local_bc);
    local_118 = (uint *)CONCAT44(local_118._4_4_,local_bc);
    local_bf = FUN_1400ac79b(&local_b8,uVar18,&local_bd,&local_be);
    uVar8 = FUN_1400af201(param_4,&local_81,&local_bf);
    local_f8 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    bVar16 = true;
    if (local_bf == '\0') goto LAB_1400b2662;
LAB_1400b2687:
    if (((*(char *)(lVar4 + 0x21f5) == '\0') && (*(longlong *)(lVar4 + 0x2200) == lVar2)) &&
       (*(int *)(lVar4 + 0x220c) == *(int *)(lVar2 + 0x1b0))) {
      fStack_d0 = (float)*(undefined8 *)(lVar2 + 0x168);
      fStack_cc = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x168) >> 0x20);
      local_d8 = (float)local_b8 - fStack_d0;
      fStack_d4 = local_b8._4_4_ - fStack_cc;
      fStack_d0 = (float)uStack_b0 - fStack_d0;
      fStack_cc = uStack_b0._4_4_ - fStack_cc;
      FUN_1400952ab(local_100,*(int *)(lVar4 + 0x220c),*(undefined4 *)(lVar4 + 0x1f9c));
      if (*(char *)(lVar4 + 0x7e) == '\x01') {
        *(undefined1 *)(lVar4 + 0x21f4) = 0;
      }
    }
    if (bVar16) {
      FUN_1400807a3(local_100);
      param_4 = (float *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    }
    else {
LAB_1400b26fa:
      param_4 = (float *)0x0;
    }
  }
  else {
    local_118 = (uint *)CONCAT44(local_118._4_4_,local_bc);
    puVar12 = &local_b8;
    cVar6 = FUN_1400ac79b(puVar12,local_100,&local_bd,&local_be);
    if ((param_3 & 0x40) != 0) {
      uVar18 = *(uint *)(lVar4 + 0x23cc);
      puVar12 = (undefined8 *)(ulonglong)uVar18;
      if ((((uVar18 != 0) && (uVar18 == local_100)) &&
          (puVar12 = (undefined8 *)(ulonglong)*(uint *)(lVar4 + 0x1f9c),
          *(uint *)(lVar4 + 0x23d0) == *(uint *)(lVar4 + 0x1f9c))) &&
         ((*(byte *)(lVar4 + 0x23d5) & 0x10) == 0)) {
        local_81 = 1;
        bVar16 = true;
        local_f8 = 0;
        goto LAB_1400b2687;
      }
    }
    local_f8 = (undefined4)CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
    bVar16 = true;
    if (cVar6 != '\0') goto LAB_1400b2687;
LAB_1400b2662:
    local_f8 = 0;
    if ((param_3 >> 0x19 & 1) == 0) goto LAB_1400b26fa;
    bVar16 = false;
    param_4 = (float *)0x0;
    if (local_bd != 0) goto LAB_1400b2687;
  }
  if (local_81 != param_2) {
    *(byte *)(lVar4 + 0x1fe8) = *(byte *)(lVar4 + 0x1fe8) | 8;
  }
  cVar6 = (char)local_f4;
  if (cVar6 != '\0') {
    local_bd = (byte)((param_3 & 0x20) >> 5) | local_bd;
    if (((local_81 | local_bd) & 1) != 0) {
      bVar10 = 0x19;
      if (local_bd != 0) {
        bVar10 = local_be | 0x1a;
      }
      uVar7 = FUN_14007a557(bVar10);
      local_118 = (uint *)((ulonglong)local_118 & 0xffffffff00000000);
      FUN_14007ba95(local_b8,uStack_b0,uVar7,0);
    }
    if (*(uint *)(lVar4 + 0x21f8) == local_100) {
      FUN_14007bdca(&local_b8,local_100,(uint)(byte)((byte)local_fc ^ 1) * 4 + 10);
    }
  }
  if ((param_3 & 2) != 0) {
    if (*(longlong *)(lVar4 + 0x24f8) == 0) {
      if (*(longlong *)(lVar2 + 0x208) != 0) {
        FUN_1401166ca();
      }
    }
    else {
      FUN_140112c92();
    }
  }
  if (cVar6 != '\0') {
    fVar23 = fVar23 + local_98._4_4_;
    local_d8 = (float)FUN_14004863e((float)local_e0 + (float)local_98);
    local_108 = &local_b8;
    local_118 = &local_90;
    local_110 = lVar4 + 0xea0;
    fStack_d4 = fVar23;
    FUN_14007b731(&local_a0,&local_d8,param_1,local_e8);
  }
  if ((((char)local_f8 != '\0') && ((param_3 & 1) == 0)) &&
     (((*(uint *)(lVar2 + 0x14) & 0x4000000) != 0 && ((*local_f0 & 0x10) != 0)))) {
    FUN_14009454e();
  }
  if (cVar5 == '\0' && uVar17 != 0) {
    FUN_14008f98e();
  }
LAB_1400b2193:
  if (DAT_140f17b40 != (local_80 ^ (ulonglong)auStack_138)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_80 ^ (ulonglong)auStack_138);
  }
  return (ulonglong)param_4 & 0xffffffff;
}

