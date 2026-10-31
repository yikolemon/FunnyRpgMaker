/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009bbef */

void FUN_14009bbef(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  int *local_d8;
  undefined8 *local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a0;
  
  lVar13 = DAT_140f2a910;
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  local_f8 = *(longlong *)(DAT_140f2a910 + 0x1608);
  fVar18 = (float)*param_3;
  fVar19 = (float)((ulonglong)*param_3 >> 0x20);
  uVar1 = param_3[1];
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(ulonglong *)(param_2 + 4);
  uVar5 = *(undefined8 *)(local_f8 + 800);
  local_f0 = param_1;
  uVar10 = FUN_14007a557(5,DAT_140210024 *
                           *(float *)(&DAT_140211690 +
                                     (ulonglong)(((uint)param_2[1] >> 0xc & 1) == 0) * 4));
  local_120 = (ulonglong)local_120._4_4_ << 0x20;
  local_128 = 0;
  local_e8 = param_3 + 1;
  FUN_1400de294(uVar5,param_3,param_3 + 1,uVar10);
  fVar8 = DAT_1402113b0;
  iVar4 = *(int *)(lVar13 + 0x15a8);
  if ((longlong)iVar4 != 0) {
    auVar21._0_4_ = (float)uVar1 - fVar18;
    auVar21._4_4_ = (float)((ulonglong)uVar1 >> 0x20) - fVar19;
    auVar21._8_8_ = 0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    auVar22 = divps(auVar21,auVar22);
    fVar20 = auVar22._0_4_;
    fVar23 = auVar22._4_4_;
    fVar18 = fVar18 - (float)uVar2 * fVar20;
    fVar19 = fVar19 - (float)((ulonglong)uVar2 >> 0x20) * fVar23;
    lVar6 = *(longlong *)(lVar13 + 0x15b0);
    lVar12 = 0;
    local_e0 = lVar13;
    local_d8 = param_2;
    local_d0 = param_3;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar12);
      if (((*(char *)(lVar7 + 0x10a) == '\x01') && ((*(byte *)(lVar7 + 0x17) & 1) == 0)) &&
         (*(int **)(lVar7 + 0x48) == param_2)) {
        fVar14 = (float)*(undefined8 *)(lVar7 + 0x60);
        fVar15 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x60) >> 0x20);
        fVar17 = *(float *)(lVar7 + 0x70) + fVar14;
        local_b8 = (float)(int)(fVar14 * fVar20 + fVar18);
        fStack_b4 = (float)(int)(fVar15 * fVar23 + fVar19);
        fStack_b0 = (float)(int)(((float)*(undefined8 *)(lVar7 + 0x68) + fVar14) * fVar20 + fVar18);
        fStack_ac = (float)(int)(((float)((ulonglong)*(undefined8 *)(lVar7 + 0x68) >> 0x20) + fVar15
                                 ) * fVar23 + fVar19);
        fVar16 = ((fVar15 + *(float *)(lVar7 + 0xa0)) - fVar15) * fVar8 + fVar15;
        local_c8 = (float)(int)(fVar14 * fVar20 + fVar18);
        fStack_c4 = (float)(int)(fVar15 * fVar23 + fVar19);
        fStack_c0 = (float)(int)(fVar17 * fVar20 + fVar18);
        fStack_bc = (float)(int)(fVar16 * fVar23 + fVar19);
        FUN_14008db02(&local_b8,param_3,fVar16,fVar17);
        FUN_14008db02(&local_c8,param_3);
        lVar13 = local_f8;
        uVar1 = *(undefined8 *)(local_f8 + 800);
        uVar10 = FUN_14007a557(2);
        local_120 = local_120 & 0xffffffff00000000;
        local_128 = 0;
        FUN_1400de294(uVar1,&local_b8,&fStack_b0,uVar10);
        uVar1 = *(undefined8 *)(lVar13 + 800);
        uVar10 = FUN_14007a557();
        local_120 = local_120 & 0xffffffff00000000;
        local_128 = 0;
        FUN_1400de294(uVar1,&local_c8,&fStack_c0,uVar10);
        uVar1 = *(undefined8 *)(lVar13 + 800);
        uVar10 = FUN_14007a557();
        local_118 = local_118 & 0xffffffff00000000;
        local_128 = 0;
        local_120 = CONCAT44(local_120._4_4_,0x3f800000);
        FUN_1400de17e(uVar1,&local_b8,&fStack_b0,uVar10);
        uVar1 = *(undefined8 *)(lVar13 + 800);
        uVar3 = *(ulonglong *)(lVar7 + 8);
        uVar11 = FUN_14007b050(uVar3,0);
        local_128 = FUN_14007a557(0);
        lVar13 = local_e0;
        local_110 = 0;
        local_108 = 0;
        local_120 = uVar3;
        local_118 = uVar11;
        FUN_1400df1a0(uVar1,*(undefined8 *)(local_e0 + 0x1310),*(undefined4 *)(local_e0 + 0x1320),
                      &local_c8);
        param_2 = local_d8;
        param_3 = local_d0;
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar4 * 8 != lVar12);
  }
  uVar10 = FUN_14007a557(5);
  puVar9 = local_e8;
  local_118 = local_118 & 0xffffffff00000000;
  local_128 = 0;
  local_120._0_4_ = 0x3f800000;
  FUN_1400de17e(local_f0,param_3,local_e8,uVar10);
  if (*param_2 == *(int *)(lVar13 + 0x2b3c)) {
    local_118 = local_118 & 0xffffffff00000000;
    local_128 = 0;
    local_120._0_4_ = 0x3f800000;
    FUN_1400de17e(*(undefined8 *)(local_f8 + 800),param_3,puVar9,0xff00ffff);
  }
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_148);
}

