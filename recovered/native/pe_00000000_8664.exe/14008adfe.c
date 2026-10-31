/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008adfe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14008adfe(float *param_1,longlong param_2,float *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  byte bVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  undefined1 auVar24 [16];
  
  lVar2 = DAT_140f2a910;
  local_e0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  fVar18 = (*(float *)(param_2 + 0xa8) + *(float *)(param_2 + 0xb0)) - *(float *)(param_2 + 0xfc);
  fVar19 = *(float *)(param_2 + 0x90) + *(float *)(param_2 + 0x90);
  if ((param_4 & 1) == 0) {
    fVar14 = *(float *)(param_2 + 0x68);
  }
  else {
    fVar14 = *param_3 + fVar19 + fVar18;
  }
  fVar16 = (*(float *)(param_2 + 0xac) + *(float *)(param_2 + 0xb4)) - *(float *)(param_2 + 0x100);
  fVar17 = *(float *)(param_2 + 0x94) + *(float *)(param_2 + 0x94);
  if ((param_4 & 2) == 0) {
    fVar20 = *(float *)(param_2 + 0x6c);
  }
  else {
    fVar20 = param_3[1] + fVar17 + fVar16;
  }
  uVar8 = *(uint *)(param_2 + 0x14);
  auVar21 = _DAT_140211280;
  if ((uVar8 & 0x5000000) == 0x1000000) {
    if ((uVar8 >> 0x19 & 1) != 0) {
LAB_14008afe1:
      auVar25._4_4_ = fVar20;
      auVar25._0_4_ = fVar14;
      auVar25._8_8_ = 0;
      auVar21 = minps(auVar25,auVar21);
      *(longlong *)param_1 = auVar21._0_8_;
      goto LAB_14008b120;
    }
    uVar8 = DAT_140211518;
    if ((*(uint *)(param_2 + 0x1c) & 4) != 0) {
      uVar8 = *(uint *)(DAT_140f2a910 + 0xdd0);
    }
    uVar22 = (ulonglong)uVar8;
    uVar9 = DAT_140211518;
    if ((*(uint *)(param_2 + 0x1c) & 8) != 0) {
LAB_14008afd6:
      uVar22 = (ulonglong)uVar8;
      uVar9 = *(uint *)(lVar2 + 0xdd4);
    }
  }
  else {
    if (*(char *)(param_2 + 0x108) == '\0') {
      lVar3 = FUN_140088c06();
      fVar10 = (float)*(undefined8 *)(lVar2 + 0xec8);
      fVar13 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0xec8) >> 0x20);
      auVar21._0_4_ = (float)*(undefined8 *)(lVar3 + 0x28) - (fVar10 + fVar10);
      auVar21._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x28) >> 0x20) - (fVar13 + fVar13);
      auVar21._8_8_ = 0;
    }
    iVar1 = *(int *)(param_2 + 0x5c);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0xd78))) {
      fVar10 = (float)*(undefined8 *)(lVar2 + 0xec8);
      fVar13 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0xec8) >> 0x20);
      uVar12 = *(undefined8 *)(*(longlong *)(lVar2 + 0xd80) + 0x18 + (longlong)iVar1 * 0x30);
      auVar21._0_4_ = (float)uVar12 - (fVar10 + fVar10);
      auVar21._4_4_ = (float)((ulonglong)uVar12 >> 0x20) - (fVar13 + fVar13);
      auVar21._8_8_ = 0;
    }
    if ((uVar8 >> 0x19 & 1) != 0) goto LAB_14008afe1;
    if ((uVar8 & 0x40) == 0) {
      uVar8 = *(uint *)(lVar2 + 0xdd0);
      goto LAB_14008afd6;
    }
    uVar22 = (ulonglong)DAT_140211518;
    uVar9 = DAT_140211518;
  }
  lVar3 = FUN_1400a52f1(param_2);
  fVar10 = *(float *)(lVar3 + 0xa0);
  fVar13 = *(float *)(lVar3 + 0xa4);
  fVar11 = (float)FUN_14007b71f(0,*(float *)(lVar2 + 0xdc4) + DAT_1401c86a4);
  uVar12 = FUN_14007b71f(uVar9,fVar10 + fVar13 + fVar11);
  auVar15._4_4_ = fVar20;
  auVar15._0_4_ = fVar14;
  auVar15._8_8_ = 0;
  auVar24._8_4_ = 0;
  auVar24._0_8_ = uVar22;
  auVar24._12_4_ = (int)((ulonglong)uVar12 >> 0x20);
  auVar23._8_8_ = auVar24._8_8_;
  auVar23._0_4_ = (undefined4)uVar22;
  auVar23._4_4_ = (int)uVar12;
  auVar25 = minps(auVar23,auVar21);
  auVar21 = minps(auVar21,auVar15);
  uVar8 = -(uint)(fVar14 < auVar25._0_4_);
  uVar9 = -(uint)(fVar20 < auVar25._4_4_);
  fVar14 = (float)(~uVar8 & auVar21._0_4_ | (uint)auVar25._0_4_ & uVar8);
  fVar20 = (float)(~uVar9 & auVar21._4_4_ | (uint)auVar25._4_4_ & uVar9);
  *param_1 = fVar14;
  param_1[1] = fVar20;
  FUN_14008b19e(&local_e8,param_2,param_1);
  pfVar4 = (float *)(param_2 + 0x78);
  if ((param_4 & 1) != 0) {
    pfVar4 = param_3;
  }
  pfVar6 = (float *)(param_2 + 0x7c);
  if ((param_4 & 2) != 0) {
    pfVar6 = param_3 + 1;
  }
  uVar8 = *(uint *)(param_2 + 0x14);
  bVar5 = 1;
  cVar7 = '\x01';
  if (fVar18 + fVar19 + *pfVar4 <= local_e8 || (uVar8 & 0x808) != 0x800) {
    cVar7 = (char)((uVar8 & 0xffff) >> 0xf);
  }
  if (fVar16 + fVar17 + *pfVar6 <= local_e4 || (uVar8 & 8) != 0) {
    bVar5 = (byte)(uVar8 >> 0xe) & 1;
  }
  if (cVar7 != '\0') {
    param_1[1] = fVar20 + *(float *)(lVar2 + 0xe2c);
  }
  if (bVar5 != 0) {
    *param_1 = fVar14 + *(float *)(lVar2 + 0xe2c);
  }
LAB_14008b120:
  if (DAT_140f17b40 != (local_e0 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_e0 ^ (ulonglong)auStack_108);
  }
  return param_1;
}

