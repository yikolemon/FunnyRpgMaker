/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c1fae */

void FUN_1400c1fae(float *param_1,uint param_2)

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
  
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  if (((param_2 & 0x700000) != 0) && ((param_2 & 0x1800000) != 0)) goto LAB_1400c23ef;
  cVar9 = FUN_140094826("context",0);
  lVar8 = DAT_140f2a910;
  if (cVar9 == '\0') goto LAB_1400c23ef;
  FUN_14008f7a2(0x10000,1);
  uVar10 = *(uint *)(lVar8 + 0x27dc);
  if ((param_2 & 0x700000) == 0) {
    cVar9 = FUN_1400af951(&DAT_140ecd4d2,uVar10 >> 0x14 & 1);
    uVar5 = (uVar10 & 0xff8fffff) + 0x100000;
    if (cVar9 == '\0') {
      uVar5 = uVar10;
    }
    cVar9 = FUN_1400af951(&DAT_140ecca65,uVar5 >> 0x15 & 1);
    uVar6 = uVar10 & 0xff8fffff | 0x200000;
    if (cVar9 == '\0') {
      uVar6 = uVar5;
    }
    cVar9 = FUN_1400af951(&DAT_140ec2cb6,uVar6 >> 0x16 & 1);
    uVar10 = uVar6 & 0xff8fffff | 0x400000;
    if (cVar9 == '\0') {
      uVar10 = uVar6;
    }
    if ((param_2 & 0x1800000) == 0) {
      FUN_1400b0bd1();
      goto LAB_1400c20e2;
    }
  }
  else if ((param_2 & 0x1800000) == 0) {
LAB_1400c20e2:
    cVar9 = FUN_1400af951("0..255",uVar10 >> 0x17 & 1);
    uVar5 = (uVar10 & 0xfe7fffff) + 0x800000;
    if (cVar9 == '\0') {
      uVar5 = uVar10;
    }
    cVar9 = FUN_1400af951("0.00..1.00",uVar5 >> 0x18 & 1);
    uVar10 = uVar10 & 0xfe7fffff | 0x1000000;
    if (cVar9 == '\0') {
      uVar10 = uVar5;
    }
  }
  FUN_1400b0bd1();
  local_e8[0] = (ulonglong)DAT_1401c86a4;
  cVar9 = FUN_1400ad187("Copy as..");
  if (cVar9 != '\0') {
    FUN_140093f4a(&DAT_140ec27a5,0);
  }
  cVar9 = FUN_140094826(&DAT_140ec27a5,0);
  if (cVar9 != '\0') {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar7 = DAT_1401c86c8;
    if (fVar1 <= DAT_1401c86c8) {
      fVar7 = fVar1;
    }
    fVar16 = DAT_1401c86c8;
    if (fVar2 <= DAT_1401c86c8) {
      fVar16 = fVar2;
    }
    fVar3 = param_1[2];
    fVar17 = DAT_1401c86c8;
    if (fVar3 <= DAT_1401c86c8) {
      fVar17 = fVar3;
    }
    if ((param_2 & 2) == 0) {
      fVar4 = param_1[3];
      fVar15 = DAT_1401c86c8;
      if (fVar4 <= DAT_1401c86c8) {
        fVar15 = fVar4;
      }
      iVar14 = (int)(float)(-(uint)(fVar4 < 0.0) & (uint)DAT_1401c86a0 |
                           ~-(uint)(fVar4 < 0.0) & (uint)(fVar15 * DAT_1401c8658 + DAT_1401c86a0));
      local_f8 = (double)fVar4;
    }
    else {
      iVar14 = 0xff;
      local_f8 = DAT_1401ced60;
    }
    iVar11 = (int)(float)(-(uint)(fVar1 < 0.0) & (uint)DAT_1401c86a0 |
                         ~-(uint)(fVar1 < 0.0) & (uint)(fVar7 * DAT_1401c8658 + DAT_1401c86a0));
    iVar12 = (int)(float)(-(uint)(fVar2 < 0.0) & (uint)DAT_1401c86a0 |
                         ~-(uint)(fVar2 < 0.0) & (uint)(fVar16 * DAT_1401c8658 + DAT_1401c86a0));
    iVar13 = (int)(float)(-(uint)(fVar3 < 0.0) & (uint)DAT_1401c86a0 |
                         ~-(uint)(fVar3 < 0.0) & (uint)(fVar17 * DAT_1401c8658 + DAT_1401c86a0));
    local_100 = (double)fVar3;
    local_108 = (double)fVar2;
    FUN_140077d91(local_e8,0x40,"(%.3ff, %.3ff, %.3ff, %.3ff)",(double)fVar1);
    local_f0 = 0;
    cVar9 = FUN_1400b2126(local_e8,0,0);
    if (cVar9 != '\0') {
      FUN_1400811e6(local_e8);
    }
    local_f8 = (double)CONCAT44(local_f8._4_4_,iVar14);
    local_100 = (double)CONCAT44(local_100._4_4_,iVar13);
    local_108 = (double)CONCAT44(local_108._4_4_,iVar12);
    FUN_140077d91(local_e8,0x40,"(%d,%d,%d,%d)",iVar11);
    local_f0 = 0;
    cVar9 = FUN_1400b2126(local_e8,0,0);
    if (cVar9 != '\0') {
      FUN_1400811e6(local_e8);
    }
    local_100 = (double)CONCAT44(local_100._4_4_,iVar13);
    local_108 = (double)CONCAT44(local_108._4_4_,iVar12);
    FUN_140077d91(local_e8,0x40,&DAT_140ecc944,iVar11);
    local_f0 = 0;
    cVar9 = FUN_1400b2126(local_e8,0,0);
    if (cVar9 != '\0') {
      FUN_1400811e6(local_e8);
    }
    if ((param_2 & 2) == 0) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,iVar14);
      local_100 = (double)CONCAT44(local_100._4_4_,iVar13);
      local_108 = (double)CONCAT44(local_108._4_4_,iVar12);
      FUN_140077d91(local_e8,0x40,"#%02X%02X%02X%02X",iVar11);
      local_f0 = 0;
      cVar9 = FUN_1400b2126(local_e8,0,0);
      if (cVar9 != '\0') {
        FUN_1400811e6(local_e8);
      }
    }
    FUN_1400946ab();
  }
  *(uint *)(lVar8 + 0x27dc) = uVar10;
  FUN_14008f860();
  FUN_1400946ab();
LAB_1400c23ef:
  if (DAT_140f17b40 != (local_a0 ^ (ulonglong)auStack_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_a0 ^ (ulonglong)auStack_128);
  }
  return;
}

