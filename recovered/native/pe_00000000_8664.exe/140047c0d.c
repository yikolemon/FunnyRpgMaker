/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140047c0d */

void FUN_140047c0d(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  ulonglong local_80;
  
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  puVar4 = DAT_140f2a240;
  if (DAT_140f2a258 < 0x10) {
    puVar4 = &DAT_140f2a240;
  }
  puVar6 = (undefined8 *)&DAT_140ed8623;
  if (DAT_140f2a250 != 0) {
    puVar6 = puVar4;
  }
  FUN_14008a381(&local_90);
  fVar11 = (float)local_90;
  lVar5 = FUN_14007a54a();
  local_a8 = fVar11 - (*(float *)(lVar5 + 0x4c) + *(float *)(lVar5 + 0x4c));
  FUN_14007b686(&local_88,puVar6,0,0);
  lVar5 = FUN_14007a54a();
  uVar1 = *(undefined8 *)(lVar5 + 0x4c);
  FUN_14009316a(&local_90);
  fVar12 = (float)local_90;
  uVar2 = (ulonglong)local_90 >> 0x20;
  FUN_14008a381(&local_98);
  fVar11 = local_98;
  fVar9 = (float)FUN_14007620f(DAT_1401c86d8);
  fVar10 = fStack_84;
  lVar5 = FUN_14007a54a();
  fVar10 = *(float *)(lVar5 + 0x50) + *(float *)(lVar5 + 0x50) + fVar10;
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  local_90 = CONCAT44(fVar9,fVar11);
  cVar3 = FUN_1400ad187(&DAT_140ec2028,&local_90);
  if (cVar3 != '\0') {
    FUN_140045c95(1);
  }
  FUN_140089fde(&local_90);
  FUN_140089ff3(&local_98);
  lVar5 = DAT_140f2a3c0;
  *(undefined8 *)(DAT_140f2a3c0 + 0x14) = local_90;
  *(ulonglong *)(lVar5 + 0x1c) = CONCAT44(fStack_94,local_98);
  puVar4 = *(undefined8 **)(lVar5 + 0x28);
  puVar8 = *(undefined8 **)(lVar5 + 0x30);
  if (puVar4 != puVar8) {
    puVar7 = &DAT_140f2a240;
    if ((undefined8 **)puVar4 != &DAT_140f2a240) {
      puVar8 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_14001617e(&DAT_140f2a240,puVar4,*puVar8);
      puVar7 = *(undefined8 **)(DAT_140f2a3c0 + 0x28);
      puVar8 = *(undefined8 **)(DAT_140f2a3c0 + 0x30);
      lVar5 = DAT_140f2a3c0;
    }
    if (puVar7 != puVar8) {
      do {
        FUN_14000109c(puVar7);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar8);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar5 + 0x28);
    }
    FUN_14003aa9f();
  }
  FUN_140092bab(0,DAT_1401c86a4);
  lVar5 = FUN_14007a54a();
  FUN_14008a008(&local_98);
  fVar11 = (local_98 - local_88) * (float)DAT_1401c8640 - (float)*(undefined8 *)(lVar5 + 0x4c);
  fVar10 = (fStack_94 - fStack_84) * DAT_1401c8640._4_4_ -
           (float)((ulonglong)*(undefined8 *)(lVar5 + 0x4c) >> 0x20);
  local_90 = CONCAT44((float)(-(uint)(0.0 < fVar10) & (uint)fVar10) +
                      (float)((ulonglong)uVar1 >> 0x20) * 0.0 + (float)uVar2,
                      (float)(-(uint)(0.0 < fVar11) & (uint)fVar11) +
                      (float)uVar1 * DAT_1401c86c8 + fVar12);
  FUN_1400931e2();
  fVar11 = (float)FUN_14009319a();
  FUN_14008a381(&local_90);
  fVar11 = fVar11 + (float)local_90;
  lVar5 = FUN_14007a54a();
  FUN_14008f9f7(fVar11 - *(float *)(lVar5 + 0x4c));
  FUN_1400abfca(puVar6,0);
  FUN_14008fabc();
  if (DAT_140f17b40 != (local_80 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_80 ^ (ulonglong)auStack_c8);
  }
  return;
}

