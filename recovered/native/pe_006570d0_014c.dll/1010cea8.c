/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010cea8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __fastcall FUN_1010cea8(float *param_1,int param_2,float *param_3,uint param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  float *pfVar6;
  char cVar7;
  float10 fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float *local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float *local_70;
  float local_6c;
  float *local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  float *local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  float local_1c;
  float local_18;
  uint local_14;
  undefined1 auVar18 [16];
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_88;
  fVar23 = (*(float *)(param_2 + 0x98) + *(float *)(param_2 + 0xa0)) - *(float *)(param_2 + 0xec);
  fVar24 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x80);
  if ((param_4 & 1) == 0) {
    fVar15 = *(float *)(param_2 + 0x58);
  }
  else {
    fVar15 = *param_3 + fVar24 + fVar23;
  }
  uVar16 = (ulonglong)(uint)fVar15;
  fVar13 = (*(float *)(param_2 + 0x9c) + *(float *)(param_2 + 0xa4)) - *(float *)(param_2 + 0xf0);
  fVar20 = *(float *)(param_2 + 0x84) + *(float *)(param_2 + 0x84);
  if ((param_4 & 2) == 0) {
    fVar25 = *(float *)(param_2 + 0x5c);
  }
  else {
    fVar25 = param_3[1] + fVar20 + fVar13;
  }
  uVar9 = *(uint *)(param_2 + 0xc);
  local_70 = param_1;
  if ((uVar9 & 0x5000000) == 0x1000000) {
    if ((uVar9 >> 0x19 & 1) != 0) {
      auVar14._4_4_ = (float)DAT_102b8950._4_4_;
      auVar14._0_4_ = (float)(undefined4)DAT_102b8950;
      auVar14._8_4_ = _UNK_102b8958;
      auVar14._12_4_ = _UNK_102b895c;
      fVar23 = 0.0;
LAB_1010d086:
      auVar17._8_4_ = (int)(uVar16 >> 0x20);
      auVar17._0_8_ = uVar16;
      auVar17._12_4_ = fVar23;
      auVar22._8_8_ = auVar17._8_8_;
      auVar22._0_4_ = (undefined4)uVar16;
      auVar22._4_4_ = fVar25;
      auVar14 = minps(auVar22,auVar14);
      *(longlong *)param_1 = auVar14._0_8_;
      goto LAB_1010d21a;
    }
    fStack_38 = 0.0;
    uStack_34 = 0;
    uStack_30 = 0;
    fStack_58 = 0.0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_4c = DAT_102b8cb0;
    if ((*(uint *)(param_2 + 0x14) & 4) != 0) {
      local_4c = *(float **)(DAT_1039d74c + 0xce8);
    }
    local_2c._4_4_ = DAT_102b8950._4_4_;
    local_2c._0_4_ = (undefined4)DAT_102b8950;
    local_2c._8_4_ = _UNK_102b8958;
    local_2c._12_4_ = _UNK_102b895c;
    local_68 = DAT_102b8cb0;
    local_80 = fVar24;
    local_7c = fVar23;
    local_78 = fVar20;
    local_74 = fVar13;
    local_5c = fVar15;
    local_3c = fVar25;
    if ((*(uint *)(param_2 + 0x14) & 8) != 0) {
LAB_1010d07c:
      local_68 = *(float **)(iVar2 + 0xcec);
    }
  }
  else {
    fStack_58 = 0.0;
    uStack_54 = 0;
    uStack_50 = 0;
    fStack_38 = 0.0;
    uStack_34 = 0;
    uStack_30 = 0;
    if (*(char *)(param_2 + 0xf8) == '\0') {
      local_80 = fVar24;
      local_7c = fVar23;
      local_78 = fVar20;
      local_74 = fVar13;
      local_5c = fVar15;
      local_3c = fVar25;
      iVar3 = FUN_1010ad36();
      uVar16 = CONCAT44(fStack_58,local_5c);
      fVar24 = (float)*(undefined8 *)(iVar2 + 0xde0);
      fVar23 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0xde0) >> 0x20);
      auVar14._0_4_ = (float)*(undefined8 *)(iVar3 + 0x28) - (fVar24 + fVar24);
      auVar14._4_4_ = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x28) >> 0x20) - (fVar23 + fVar23);
      auVar14._8_8_ = 0;
    }
    else {
      auVar14._4_4_ = (float)DAT_102b8950._4_4_;
      auVar14._0_4_ = (float)(undefined4)DAT_102b8950;
      auVar14._8_4_ = _UNK_102b8958;
      auVar14._12_4_ = _UNK_102b895c;
      uVar16 = (ulonglong)(uint)fVar15;
      local_80 = fVar24;
      local_7c = fVar23;
      local_78 = fVar20;
      local_74 = fVar13;
      local_5c = fVar15;
      local_3c = fVar25;
    }
    iVar3 = *(int *)(param_2 + 0x4c);
    if ((-1 < iVar3) && (iVar3 < *(int *)(iVar2 + 0xc9c))) {
      fVar24 = (float)*(undefined8 *)(iVar2 + 0xde0);
      fVar23 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0xde0) >> 0x20);
      uVar1 = *(undefined8 *)(*(int *)(iVar2 + 0xca4) + 0x18 + iVar3 * 0x28);
      auVar14._0_4_ = (float)uVar1 - (fVar24 + fVar24);
      auVar14._4_4_ = (float)((ulonglong)uVar1 >> 0x20) - (fVar23 + fVar23);
      auVar14._8_8_ = 0;
    }
    fVar25 = local_3c;
    fVar23 = fStack_38;
    if ((uVar9 >> 0x19 & 1) != 0) goto LAB_1010d086;
    local_2c = auVar14;
    if ((uVar9 & 0x40) == 0) {
      local_4c = *(float **)(iVar2 + 0xce8);
      goto LAB_1010d07c;
    }
    local_4c = DAT_102b8cb0;
    local_68 = DAT_102b8cb0;
  }
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  iVar3 = FUN_10126468();
  local_6c = *(float *)(iVar3 + 0x90) + *(float *)(iVar3 + 0x94);
  local_84 = *(float *)(iVar2 + 0xcdc) + DAT_102b8a50;
  local_88 = (float *)0x0;
  fVar8 = (float10)FUN_100fdbca();
  local_60 = (float)fVar8;
  local_84 = local_6c + local_60;
  local_88 = local_68;
  fVar8 = (float10)FUN_100fdbca();
  local_64 = (float)fVar8;
  auVar19._4_4_ = fStack_58;
  auVar19._0_4_ = local_5c;
  auVar19._8_4_ = fStack_58;
  auVar19._12_4_ = fStack_38;
  auVar18._8_8_ = auVar19._8_8_;
  auVar18._4_4_ = local_3c;
  auVar18._0_4_ = local_5c;
  auVar21._4_4_ = local_64;
  auVar21._0_4_ = local_4c;
  auVar21._8_4_ = uStack_48;
  auVar21._12_4_ = 0;
  auVar22 = minps(auVar21,local_2c);
  auVar14 = minps(local_2c,auVar18);
  uVar9 = -(uint)(local_5c < auVar22._0_4_);
  uVar10 = -(uint)(local_3c < auVar22._4_4_);
  uVar11 = -(uint)(fStack_58 < auVar22._8_4_);
  uVar12 = -(uint)(fStack_38 < auVar22._12_4_);
  local_5c = (float)(~uVar9 & auVar14._0_4_ | (uint)auVar22._0_4_ & uVar9);
  fStack_58 = (float)(~uVar10 & auVar14._4_4_ | (uint)auVar22._4_4_ & uVar10);
  uStack_54 = ~uVar11 & auVar14._8_4_ | (uint)auVar22._8_4_ & uVar11;
  uStack_50 = ~uVar12 & auVar14._12_4_ | (uint)auVar22._12_4_ & uVar12;
  *local_70 = local_5c;
  local_70[1] = fStack_58;
  local_88 = local_70;
  FUN_1010d23f();
  pfVar4 = (float *)(param_2 + 0x68);
  if ((param_4 & 1) != 0) {
    pfVar4 = param_3;
  }
  pfVar6 = (float *)(param_2 + 0x6c);
  if ((param_4 & 2) != 0) {
    pfVar6 = param_3 + 1;
  }
  uVar9 = *(uint *)(param_2 + 0xc);
  cVar7 = '\x01';
  if (local_7c + local_80 + *pfVar4 <= local_1c || (uVar9 & 0x808) != 0x800) {
    cVar7 = (char)((uVar9 & 0xffff) >> 0xf);
  }
  bVar5 = 1;
  if (local_74 + local_78 + *pfVar6 <= local_18 || (uVar9 & 8) != 0) {
    bVar5 = (byte)(uVar9 >> 0xe) & 1;
  }
  if (cVar7 != '\0') {
    local_70[1] = fStack_58 + *(float *)(iVar2 + 0xd44);
  }
  param_1 = local_70;
  if (bVar5 != 0) {
    *local_70 = local_5c + *(float *)(iVar2 + 0xd44);
  }
LAB_1010d21a:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

