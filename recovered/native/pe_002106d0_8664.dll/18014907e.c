/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014907e */

void FUN_18014907e(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  ulonglong local_e8 [9];
  ulonglong local_a0;
  
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_128;
  if (((param_2 & 0x700000) != 0) && ((param_2 & 0x1800000) != 0)) goto LAB_1801494bf;
  cVar9 = FUN_18011b56a("context",0);
  lVar8 = DAT_180419160;
  if (cVar9 == '\0') goto LAB_1801494bf;
  FUN_18011648a(0x10000,1);
  uVar10 = *(uint *)(lVar8 + 0x27dc);
  if ((param_2 & 0x700000) == 0) {
    cVar9 = FUN_180136a21(&DAT_18036cdfa,uVar10 >> 0x14 & 1);
    uVar5 = (uVar10 & 0xff8fffff) + 0x100000;
    if (cVar9 == '\0') {
      uVar5 = uVar10;
    }
    cVar9 = FUN_180136a21(&DAT_18036c137,uVar5 >> 0x15 & 1);
    uVar6 = uVar10 & 0xff8fffff | 0x200000;
    if (cVar9 == '\0') {
      uVar6 = uVar5;
    }
    cVar9 = FUN_180136a21(&DAT_180360b23,uVar6 >> 0x16 & 1);
    uVar10 = uVar6 & 0xff8fffff | 0x400000;
    if (cVar9 == '\0') {
      uVar10 = uVar6;
    }
    if ((param_2 & 0x1800000) == 0) {
      FUN_180137ca1();
      goto LAB_1801491b2;
    }
  }
  else if ((param_2 & 0x1800000) == 0) {
LAB_1801491b2:
    cVar9 = FUN_180136a21("0..255",uVar10 >> 0x17 & 1);
    uVar5 = (uVar10 & 0xfe7fffff) + 0x800000;
    if (cVar9 == '\0') {
      uVar5 = uVar10;
    }
    cVar9 = FUN_180136a21("0.00..1.00",uVar5 >> 0x18 & 1);
    uVar10 = uVar10 & 0xfe7fffff | 0x1000000;
    if (cVar9 == '\0') {
      uVar10 = uVar5;
    }
  }
  FUN_180137ca1();
  local_e8[0] = (ulonglong)DAT_1802bb8e0;
  cVar9 = FUN_180134257("Copy as..");
  if (cVar9 != '\0') {
    FUN_18011ac8e(&DAT_1803605a3,0);
  }
  cVar9 = FUN_18011b56a(&DAT_1803605a3,0);
  if (cVar9 != '\0') {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar7 = DAT_1802ac570;
    if (fVar1 <= DAT_1802ac570) {
      fVar7 = fVar1;
    }
    fVar16 = DAT_1802ac570;
    if (fVar2 <= DAT_1802ac570) {
      fVar16 = fVar2;
    }
    fVar3 = param_1[2];
    fVar17 = DAT_1802ac570;
    if (fVar3 <= DAT_1802ac570) {
      fVar17 = fVar3;
    }
    if ((param_2 & 2) == 0) {
      fVar4 = param_1[3];
      fVar15 = DAT_1802ac570;
      if (fVar4 <= DAT_1802ac570) {
        fVar15 = fVar4;
      }
      iVar14 = (int)(float)(-(uint)(fVar4 < 0.0) & (uint)DAT_1802dbb2c |
                           ~-(uint)(fVar4 < 0.0) & (uint)(fVar15 * DAT_1802dc270 + DAT_1802dbb2c));
      local_f8 = (double)fVar4;
    }
    else {
      iVar14 = 0xff;
      local_f8 = DAT_1802ac578;
    }
    iVar11 = (int)(float)(-(uint)(fVar1 < 0.0) & (uint)DAT_1802dbb2c |
                         ~-(uint)(fVar1 < 0.0) & (uint)(fVar7 * DAT_1802dc270 + DAT_1802dbb2c));
    iVar12 = (int)(float)(-(uint)(fVar2 < 0.0) & (uint)DAT_1802dbb2c |
                         ~-(uint)(fVar2 < 0.0) & (uint)(fVar16 * DAT_1802dc270 + DAT_1802dbb2c));
    iVar13 = (int)(float)(-(uint)(fVar3 < 0.0) & (uint)DAT_1802dbb2c |
                         ~-(uint)(fVar3 < 0.0) & (uint)(fVar17 * DAT_1802dc270 + DAT_1802dbb2c));
    local_100 = (double)fVar3;
    local_108 = (double)fVar2;
    FUN_1800fead5(local_e8,0x40,"(%.3ff, %.3ff, %.3ff, %.3ff)",(double)fVar1);
    local_f0 = 0;
    cVar9 = FUN_1801391f6(local_e8,0,0);
    if (cVar9 != '\0') {
      FUN_180107ece(local_e8);
    }
    local_f8 = (double)CONCAT44(local_f8._4_4_,iVar14);
    local_100 = (double)CONCAT44(local_100._4_4_,iVar13);
    local_108 = (double)CONCAT44(local_108._4_4_,iVar12);
    FUN_1800fead5(local_e8,0x40,"(%d,%d,%d,%d)",iVar11);
    local_f0 = 0;
    cVar9 = FUN_1801391f6(local_e8,0,0);
    if (cVar9 != '\0') {
      FUN_180107ece(local_e8);
    }
    local_100 = (double)CONCAT44(local_100._4_4_,iVar13);
    local_108 = (double)CONCAT44(local_108._4_4_,iVar12);
    FUN_1800fead5(local_e8,0x40,&DAT_18036c016,iVar11);
    local_f0 = 0;
    cVar9 = FUN_1801391f6(local_e8,0,0);
    if (cVar9 != '\0') {
      FUN_180107ece(local_e8);
    }
    if ((param_2 & 2) == 0) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,iVar14);
      local_100 = (double)CONCAT44(local_100._4_4_,iVar13);
      local_108 = (double)CONCAT44(local_108._4_4_,iVar12);
      FUN_1800fead5(local_e8,0x40,"#%02X%02X%02X%02X",iVar11);
      local_f0 = 0;
      cVar9 = FUN_1801391f6(local_e8,0,0);
      if (cVar9 != '\0') {
        FUN_180107ece(local_e8);
      }
    }
    FUN_18011b3ef();
  }
  *(uint *)(lVar8 + 0x27dc) = uVar10;
  FUN_180116548();
  FUN_18011b3ef();
LAB_1801494bf:
  if (DAT_180402640 != (local_a0 ^ (ulonglong)auStack_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_a0 ^ (ulonglong)auStack_128);
  }
  return;
}

