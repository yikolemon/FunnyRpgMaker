/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c4c0d */

void FUN_1400c4c0d(ulonglong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  double local_e8;
  int local_e0;
  int local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  lVar4 = DAT_140f2a910;
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  cVar5 = FUN_140093be7(2,0);
  if (cVar5 != '\0') {
    if (param_1 != 0) {
      uVar6 = FUN_14007b050(param_1,0);
      if (param_1 < uVar6) {
        FUN_1400abb60(param_1,uVar6,0);
        FUN_1400b0bd1();
      }
    }
    fVar14 = DAT_1401c86c8;
    fVar2 = DAT_1401c86a0;
    fVar1 = *(float *)(lVar4 + 0xdf8);
    local_88 = *(float *)(lVar4 + 0x1320) * DAT_1402113b0 + fVar1 + fVar1;
    local_8c = DAT_1401c86c8;
    if ((param_3 & 2) == 0) {
      local_8c = param_2[3];
    }
    fVar1 = param_2[2];
    uVar3 = *(undefined8 *)param_2;
    iVar9 = 0xff;
    if ((param_3 & 2) == 0) {
      fVar12 = param_2[3];
      fVar11 = DAT_1401c86c8;
      if (fVar12 <= DAT_1401c86c8) {
        fVar11 = fVar12;
      }
      iVar9 = (int)(float)(-(uint)(fVar12 < 0.0) & (uint)DAT_1401c86a0 |
                          ~-(uint)(fVar12 < 0.0) & (uint)(fVar11 * DAT_1401c8658 + DAT_1401c86a0));
    }
    local_98 = uVar3;
    local_90 = fVar1;
    local_84 = local_88;
    FUN_1400c2545("##preview",&local_98,param_3 & 0x18007002 | 0x40,&local_88);
    FUN_140092bab();
    if ((param_3 & 0x18000000) == 0x10000000) {
      if ((param_3 & 2) == 0) {
        local_e8 = (double)param_2[3];
        fVar1 = param_2[2];
        fVar2 = param_2[1];
        fVar14 = *param_2;
        pcVar7 = "H: %.3f, S: %.3f, V: %.3f, A: %.3f";
      }
      else {
        fVar1 = param_2[2];
        fVar2 = param_2[1];
        fVar14 = *param_2;
        pcVar7 = "H: %.3f, S: %.3f, V: %.3f";
      }
      FUN_1400abfd5(pcVar7,(double)fVar14,(double)fVar2,(double)fVar1);
    }
    else {
      fVar11 = (float)uVar3;
      fVar15 = (float)((ulonglong)uVar3 >> 0x20);
      fVar12 = fVar14;
      if (fVar11 <= fVar14) {
        fVar12 = fVar11;
      }
      fVar13 = fVar14;
      if (fVar15 <= fVar14) {
        fVar13 = fVar15;
      }
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      iVar8 = (int)(float)(-(uint)(fVar11 < 0.0) & (uint)fVar2 |
                          ~-(uint)(fVar11 < 0.0) & (uint)(fVar12 * DAT_1401c8658 + fVar2));
      iVar10 = (int)(float)(-(uint)(fVar15 < 0.0) & (uint)fVar2 |
                           ~-(uint)(fVar15 < 0.0) & (uint)(fVar13 * DAT_1401c8658 + fVar2));
      local_d8 = (int)(float)(-(uint)(fVar1 < 0.0) & (uint)fVar2 |
                             ~-(uint)(fVar1 < 0.0) & (uint)(fVar14 * DAT_1401c8658 + fVar2));
      if ((param_3 & 2) == 0) {
        local_a8 = (double)param_2[3];
        local_b0 = (double)param_2[2];
        local_b8 = (double)param_2[1];
        fVar1 = *param_2;
        local_c8 = (double)CONCAT44(local_c8._4_4_,iVar9);
        local_d0 = (double)CONCAT44(local_d0._4_4_,local_d8);
        pcVar7 = "#%02X%02X%02X%02X\nR:%d, G:%d, B:%d, A:%d\n(%.3f, %.3f, %.3f, %.3f)";
        local_e0 = iVar8;
        local_d8 = iVar10;
        iVar8 = iVar9;
      }
      else {
        fVar1 = param_2[2];
        local_c8 = (double)param_2[1];
        local_d0 = (double)*param_2;
        pcVar7 = "#%02X%02X%02X\nR: %d, G: %d, B: %d\n(%.3f, %.3f, %.3f)";
        local_e0 = iVar10;
      }
      local_c0 = (double)fVar1;
      local_e8 = (double)CONCAT44(local_e8._4_4_,iVar8);
      FUN_1400abfd5(pcVar7);
    }
    thunk_FUN_140088c18();
  }
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_108);
}

