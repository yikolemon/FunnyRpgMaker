/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c2545 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400c2545(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b2;
  char local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  lVar2 = DAT_140f2a910;
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) != '\0') {
    uVar5 = 0;
    goto LAB_1400c2b00;
  }
  iVar4 = FUN_140080066(lVar1,param_1,0);
  fVar12 = (float)FUN_14009376e();
  local_b0 = *(undefined8 *)(lVar1 + 0x158);
  fVar14 = (float)*param_4;
  fVar15 = (float)((ulonglong)*param_4 >> 0x20);
  uVar10 = -(uint)(fVar14 == 0.0);
  uVar11 = -(uint)(fVar15 == 0.0);
  fVar16 = (float)(~uVar11 & (uint)fVar15 | (uint)fVar12 & uVar11);
  fVar14 = (float)*(undefined8 *)(lVar1 + 0x158) +
           (float)(~uVar10 & (uint)fVar14 | (uint)fVar12 & uVar10);
  fVar15 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20) + fVar16;
  uStack_a8 = CONCAT44(fVar15,fVar14);
  uVar5 = 0;
  if (fVar12 <= fVar16) {
    uVar5 = *(undefined4 *)(lVar2 + 0xdf8);
  }
  local_c8 = CONCAT44(fVar15 - (float)((ulonglong)local_b0 >> 0x20),fVar14 - (float)local_b0);
  FUN_14008a82c(&local_c8,uVar5);
  uVar5 = 0;
  cVar3 = FUN_14008a9ce(&local_b0,iVar4,0,0);
  if (cVar3 == '\0') goto LAB_1400c2b00;
  local_128 = local_128 & 0xffffffff00000000;
  uVar5 = FUN_1400ac79b(&local_b0,iVar4,&local_b1,&local_b2);
  uVar10 = param_3 & 0xffff9fff;
  if ((param_3 & 0x1002) == 0) {
    uVar10 = param_3;
  }
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_100 = param_2;
  if ((uVar10 >> 0x1c & 1) != 0) {
    local_120 = &uStack_c0;
    local_128 = (longlong)&local_c8 + 4;
    local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    uVar13 = local_c8._4_4_;
    FUN_140078844(local_128,uVar13,(undefined4)uStack_c0,&local_c8);
  }
  local_d8 = local_c8;
  local_d0 = (undefined4)uStack_c0;
  local_cc = 0x3f800000;
  fVar14 = (float)FUN_14004863e();
  fVar14 = fVar14 / _DAT_140211e44;
  uVar13 = FUN_14004863e();
  local_e8 = local_b0;
  uStack_e0 = uStack_a8;
  fVar12 = 0.0;
  if ((uVar10 >> 10 & 1) == 0) {
    local_e8._0_4_ = (float)local_b0;
    local_e8._4_4_ = (float)((ulonglong)local_b0 >> 0x20);
    uStack_e0._0_4_ = (float)uStack_a8;
    uStack_e0._4_4_ = (float)((ulonglong)uStack_a8 >> 0x20);
    local_e8 = CONCAT44(local_e8._4_4_ + _UNK_140211e54,(float)local_e8 + _DAT_140211e50);
    uStack_e0 = CONCAT44(uStack_e0._4_4_ + _UNK_140211e5c,(float)uStack_e0 + _UNK_140211e58);
    fVar12 = DAT_140211e60;
  }
  if (((uVar10 >> 0xe & 1) == 0) || (DAT_1401c86c8 <= uStack_c0._4_4_)) {
    puVar7 = &local_d8;
    if ((uVar10 >> 0xc & 1) == 0) {
      puVar7 = &local_c8;
    }
    local_f8 = *puVar7;
    uStack_f0 = puVar7[1];
    if (((uVar10 >> 0xd & 1) != 0) ||
       (uStack_f0._4_4_ = (float)((ulonglong)uStack_f0 >> 0x20), DAT_1401c86c8 <= uStack_f0._4_4_))
    {
      uVar9 = *(undefined8 *)(lVar1 + 800);
      uVar6 = FUN_14007a5c6(&local_f8);
      puVar7 = &uStack_e0;
      local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffff00000000);
      goto LAB_1400c297f;
    }
    uVar6 = FUN_14007a5c6(&local_f8);
    local_120 = (undefined8 *)CONCAT44(fVar12,fVar12);
    local_128 = CONCAT44(local_128._4_4_,fVar14);
    local_110 = 0;
    local_118 = uVar13;
    FUN_1400e7fca(*(undefined8 *)(lVar1 + 800),local_e8,uStack_e0,uVar6);
  }
  else {
    fVar15 = ((float)local_e8 + (float)uStack_e0) * DAT_1401c86a0 + DAT_1401c86a0;
    if ((uVar10 >> 0xd & 1) == 0) {
      uVar6 = FUN_14007a5c6(&local_c8);
      local_120 = (undefined8 *)CONCAT44(fVar12,fVar12 - fVar14);
      local_128 = CONCAT44(local_128._4_4_,fVar14);
      local_110 = 0xa0;
      local_118 = uVar13;
      FUN_1400e7fca(*(undefined8 *)(lVar1 + 800),(float)local_e8 + fVar14,uStack_e0,uVar6);
    }
    else {
      uVar9 = *(undefined8 *)(lVar1 + 800);
      uVar6 = FUN_14007a5c6(&local_c8);
      local_f8 = CONCAT44(local_e8._4_4_,fVar14 + (float)local_e8);
      local_128 = CONCAT44(local_128._4_4_,uVar13);
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,0xa0);
      FUN_1400de294(uVar9,&local_f8,&uStack_e0,uVar6);
    }
    uVar9 = *(undefined8 *)(lVar1 + 800);
    uVar6 = FUN_14007a5c6(&local_d8);
    puVar7 = &local_f8;
    local_f8 = CONCAT44(uStack_e0._4_4_,(float)(int)fVar15);
    local_120 = (undefined8 *)CONCAT44(local_120._4_4_,0x50);
LAB_1400c297f:
    local_128 = CONCAT44(local_128._4_4_,uVar13);
    FUN_1400de294(uVar9,&local_e8,puVar7,uVar6);
  }
  FUN_14007bdca(&local_b0,iVar4,0);
  if ((uVar10 >> 10 & 1) == 0) {
    if (*(float *)(lVar2 + 0xe00) <= 0.0) {
      uVar9 = *(undefined8 *)(lVar1 + 800);
      fVar12 = *(float *)(lVar2 + 0x12ec);
      uVar6 = FUN_14007a557(7,DAT_1401c86c8);
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,(float)(int)fVar12);
      local_128 = CONCAT44(local_128._4_4_,uVar13);
      local_118 = 0;
      FUN_1400de17e(uVar9,&local_b0,&uStack_a8,uVar6);
    }
    else {
      FUN_14007bc0f(local_b0,uStack_a8,uVar13);
    }
  }
  if (((uVar10 >> 9 & 1) == 0) && (*(int *)(lVar2 + 0x167c) == iVar4)) {
    cVar3 = FUN_140095b6d(0);
    if (cVar3 != '\0') {
      if ((uVar10 & 2) == 0) {
        pcVar8 = "_COL4F";
        uVar9 = 0x10;
      }
      else {
        pcVar8 = "_COL3F";
        uVar9 = 0xc;
      }
      FUN_140095e05(pcVar8,&local_c8,uVar9,2);
      local_f8 = 0;
      FUN_1400c2545(param_1,local_100,uVar10);
      FUN_140092bab();
      FUN_1400abb60("Color",0,0);
      FUN_140095dd0();
    }
  }
  if (((uVar10 & 0x40) == 0) && (local_b1 != '\0')) {
    cVar3 = FUN_1400808b4(0x1000);
    if (cVar3 != '\0') {
      FUN_1400c4c0d(param_1,local_100,uVar10 & 0x18007002);
    }
  }
LAB_1400c2b00:
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_148)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_148);
}

