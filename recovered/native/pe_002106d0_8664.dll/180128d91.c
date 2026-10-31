/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180128d91 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180128d91(void)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  longlong local_e8;
  ulonglong *local_e0;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c0;
  undefined8 uVar19;
  undefined8 uVar22;
  
  fVar11 = _UNK_1802dea0c;
  fVar10 = _UNK_1802dea08;
  fVar9 = _UNK_1802dea04;
  fVar8 = _DAT_1802dea00;
  uVar7 = DAT_1802dc268;
  uVar6 = DAT_1802ac570;
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(DAT_180419160 + 0x1608);
  if ((longlong)*(int *)(DAT_180419160 + 0xd78) == 0) {
    fVar25 = (float)*(undefined8 *)(lVar3 + 0x158) + _DAT_1802dea10;
    fVar26 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x158) >> 0x20) + _UNK_1802dea14;
    lVar14 = DAT_180419160;
    uVar19 = _DAT_1802de830;
    uVar22 = DAT_1802de500;
  }
  else {
    puVar15 = *(ulonglong **)(DAT_180419160 + 0xd80);
    local_e0 = puVar15 + (longlong)*(int *)(DAT_180419160 + 0xd78) * 6;
    auVar24._8_8_ = _UNK_1802de508;
    auVar24._0_8_ = DAT_1802de500;
    auVar21._8_8_ = _UNK_1802de838;
    auVar21._0_8_ = _DAT_1802de830;
    puVar13 = puVar15;
    do {
      uVar1 = *puVar13;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar1;
      auVar20._0_4_ = (float)puVar13[1] + (float)uVar1;
      auVar20._4_4_ = (float)(puVar13[1] >> 0x20) + (float)(uVar1 >> 0x20);
      auVar20._8_8_ = 0;
      auVar21 = maxps(auVar20,auVar21);
      uVar19 = auVar21._0_8_;
      auVar24 = minps(auVar23,auVar24);
      uVar22 = auVar24._0_8_;
      puVar13 = puVar13 + 6;
    } while (puVar13 != local_e0);
    fVar25 = _DAT_1802de9f0 * auVar24._0_4_ + (float)*(undefined8 *)(lVar3 + 0x158);
    fVar26 = _UNK_1802de9f4 * auVar24._4_4_ +
             (float)((ulonglong)*(undefined8 *)(lVar3 + 0x158) >> 0x20);
    local_e8 = DAT_180419160;
    puVar13 = puVar15;
    do {
      fVar17 = (float)*puVar15;
      fVar18 = (float)(*puVar15 >> 0x20);
      fStack_d0 = ((float)puVar15[1] + fVar17) * fVar10 + fVar25;
      fStack_cc = ((float)(puVar15[1] >> 0x20) + fVar18) * fVar11 + fVar26;
      local_d8 = CONCAT44(fVar18 * fVar9 + fVar26,fVar17 * fVar8 + fVar25);
      uVar4 = *(undefined8 *)(lVar3 + 800);
      uVar12 = 0xff00ffff;
      if (*(int *)(local_e8 + 0x2b38) !=
          (int)((ulonglong)((longlong)puVar13 - *(longlong *)(local_e8 + 0xd80)) >> 4) * -0x55555555
         ) {
        uVar12 = FUN_18010129b(5,uVar6);
      }
      local_f8 = 0;
      local_108 = 0x40800000;
      local_100 = 0x3f800000;
      FUN_180192c0a(uVar4,&local_d8,&fStack_d0,uVar12);
      uVar4 = *(undefined8 *)(lVar3 + 800);
      uVar12 = FUN_18010129b(5,uVar7);
      local_100 = 0;
      local_108 = 0x40800000;
      FUN_180192d20(uVar4,&local_d8,&fStack_d0,uVar12);
      puVar15 = puVar15 + 6;
      puVar13 = puVar13 + 6;
      lVar14 = local_e8;
    } while (puVar15 != local_e0);
  }
  fVar11 = _UNK_1802dea0c;
  fVar10 = _UNK_1802dea08;
  fVar9 = _UNK_1802dea04;
  fVar8 = _DAT_1802dea00;
  iVar2 = *(int *)(lVar14 + 0x2178);
  if ((longlong)iVar2 != 0) {
    lVar14 = *(longlong *)(lVar14 + 0x2180);
    lVar16 = 0;
    do {
      lVar5 = *(longlong *)(lVar14 + lVar16);
      fVar17 = (float)*(undefined8 *)(lVar5 + 8);
      fVar18 = (float)((ulonglong)*(undefined8 *)(lVar5 + 8) >> 0x20);
      fStack_d0 = ((float)*(undefined8 *)(lVar5 + 0x10) + fVar17) * fVar10 + fVar25;
      fStack_cc = ((float)((ulonglong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) + fVar18) * fVar11 +
                  fVar26;
      local_d8 = CONCAT44(fVar18 * fVar9 + fVar26,fVar17 * fVar8 + fVar25);
      FUN_180122cc0(*(undefined8 *)(lVar3 + 800),lVar5,&local_d8);
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar2 * 8 != lVar16);
  }
  local_d8 = CONCAT44(((float)((ulonglong)uVar19 >> 0x20) - (float)((ulonglong)uVar22 >> 0x20)) *
                      _UNK_1802dea24,((float)uVar19 - (float)uVar22) * _DAT_1802dea20);
  FUN_18013783d();
  if (DAT_180402640 != (local_c0 ^ (ulonglong)auStack_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_c0 ^ (ulonglong)auStack_128);
  }
  return;
}

