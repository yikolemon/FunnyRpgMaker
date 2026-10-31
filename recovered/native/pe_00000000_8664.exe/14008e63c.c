/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008e63c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008e63c(longlong param_1,float *param_2,undefined8 param_3,undefined1 *param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  float *local_100;
  float *local_f8;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  lVar4 = DAT_140f2a910;
  local_b0 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 0x20) == 0) {
    bVar7 = *(int *)(DAT_140f2a910 + 0xde0) != -1;
  }
  else {
    bVar7 = false;
  }
  uVar3 = *(uint *)(DAT_140f2a910 + 0x1fa0);
  *(uint *)(DAT_140f2a910 + 0x1fa0) = uVar3 | 4;
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  fVar11 = *(float *)(lVar4 + 0xdf4);
  fVar14 = *(float *)(lVar4 + 0x1320);
  local_b8 = 0;
  local_c0 = 0;
  fVar12 = fVar11;
  if (param_4 != (undefined1 *)0x0) {
    local_b8 = CONCAT44(param_2[1] + *(float *)(lVar4 + 0xdf8),(param_2[2] - fVar11) - fVar14);
    fVar12 = *(float *)(lVar4 + 0xe0c) + fVar14 + fVar11;
  }
  if (bVar7) {
    if (*(int *)(lVar4 + 0xde0) == 0) {
      local_c0 = CONCAT44(*(float *)(lVar4 + 0xdf8) +
                          (float)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                          fVar11 + (float)*(undefined8 *)param_2);
      fVar11 = fVar11 + *(float *)(lVar4 + 0xe0c) + fVar14;
    }
    else if (*(int *)(lVar4 + 0xde0) == 1) {
      local_c0 = CONCAT44(param_2[1] + *(float *)(lVar4 + 0xdf8),(param_2[2] - fVar12) - fVar14);
      fVar12 = fVar12 + *(float *)(lVar4 + 0xe0c) + fVar14;
    }
    uVar6 = FUN_140080066(param_1,"#COLLAPSE",0);
    cVar5 = FUN_1400ad866(uVar6,&local_c0,0);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x10d) = 1;
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    *(byte *)(lVar4 + 0x1fa2) = *(byte *)(lVar4 + 0x1fa2) | 2;
    uVar6 = FUN_140080066(param_1,"#CLOSE",0);
    cVar5 = FUN_1400ad5b7(uVar6,&local_b8);
    if (cVar5 != '\0') {
      *param_4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(uint *)(lVar4 + 0x1fa0) = uVar3;
  fVar14 = fVar14 * DAT_1401c86dc;
  fVar15 = 0.0;
  if ((uVar2 >> 0x12 & 1) != 0) {
    fVar15 = fVar14;
  }
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,0xbf800000);
  FUN_14007b686(&local_d8,param_3,0,1);
  fVar15 = fVar15 + local_d8;
  local_c8 = CONCAT44(fStack_d4 + 0.0,fVar15);
  if (*(float *)(lVar4 + 0xdf4) < fVar11) {
    fVar11 = fVar11 + *(float *)(lVar4 + 0xe0c);
  }
  if (*(float *)(lVar4 + 0xdf4) < fVar12) {
    fVar12 = fVar12 + *(float *)(lVar4 + 0xe0c);
  }
  fVar10 = *(float *)(lVar4 + 0xdd8);
  if ((0.0 < fVar10) && (fVar10 < DAT_1401c86c8)) {
    fVar10 = (float)((uint)(fVar10 + DAT_1402115a8) & _DAT_1401ced40);
    fVar13 = DAT_1401c86c8 - (fVar10 + fVar10);
    fVar10 = DAT_1401c86c8;
    if (fVar13 <= DAT_1401c86c8) {
      fVar10 = fVar13;
    }
    fVar8 = param_2[2];
    fVar1 = *param_2;
    uVar9 = FUN_14007b71f(fVar11,fVar12);
    fVar8 = (float)FUN_14004863e(uVar9,(((fVar8 - fVar1) - fVar11) - fVar12) - fVar15);
    fVar8 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar10) * fVar8;
    fVar11 = (float)FUN_14007b71f(fVar11,fVar8);
    fVar12 = (float)FUN_14007b71f(fVar12,fVar8);
  }
  fVar10 = param_2[3];
  fVar13 = param_2[1];
  fVar12 = param_2[2] - fVar12;
  fVar11 = fVar11 + *param_2;
  local_d8 = fVar11;
  fStack_d4 = fVar13;
  local_d0 = fVar12;
  local_cc = fVar10;
  uVar9 = FUN_14004863e(*(float *)(lVar4 + 0xe0c) + fVar12);
  local_e0 = (undefined4)uVar9;
  local_e8 = fVar11;
  local_e4 = fVar13;
  local_dc = fVar10;
  if ((uVar2 >> 0x12 & 1) != 0) {
    fVar15 = (float)FUN_140090d06(((fVar12 - fVar11) - fVar15) * *(float *)(lVar4 + 0xdd8) + fVar11
                                  + fVar15,fVar11,fVar12);
    fVar12 = DAT_1401c86a0;
    if (fVar11 < fVar15) {
      fVar11 = (fVar10 + fVar13) * DAT_1401c86a0;
      uVar6 = FUN_14007a557(0x3a,DAT_1401c86c8);
      FUN_1400e6eaa(*(undefined8 *)(param_1 + 800),CONCAT44(fVar11,fVar15),uVar6);
      local_e0 = FUN_14004863e(uVar9,fVar15 - (float)(int)(fVar14 * fVar12));
    }
  }
  local_f8 = &local_e8;
  local_108 = &local_c8;
  local_100 = (float *)(lVar4 + 0xdd8);
  FUN_14007b731(&local_d8,&local_d0,param_3,0);
  if (DAT_140f17b40 == (local_b0 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_b0 ^ (ulonglong)auStack_128);
}

