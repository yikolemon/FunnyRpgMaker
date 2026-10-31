/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023d32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140023d32(double param_1,double param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14012ea80 ^ (ulonglong)auStack_118;
  uVar10 = (undefined4)DAT_1400e72b0;
  uVar11 = (undefined4)((ulonglong)DAT_1400e72b0 >> 0x20);
  bVar2 = true;
  uVar4 = 0;
  bVar5 = false;
  uVar12 = 0;
  uVar14 = 0;
  uVar17 = 0;
  uVar19 = 0;
  auVar20 = _DAT_1400dca90;
  auVar9 = _DAT_1400dca90;
  uVar13 = uVar10;
  uVar15 = uVar11;
  local_f0 = param_2;
  do {
    FUN_140023bcd(&local_e8,param_1,uVar4);
    dVar7 = local_e8;
    uVar21 = SUB84(local_e8,0);
    uVar22 = (undefined4)((ulonglong)local_e8 >> 0x20);
    if (0.0 <= local_e8) {
      dVar6 = FUN_14002398d(&local_e8);
      uVar16 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
      if (bVar5) {
        if ((bVar2) ||
           (bVar2 = FUN_140023a74((double)CONCAT44(uVar19,uVar17),dVar6,
                                  (double)CONCAT44(uVar14,uVar12)), bVar2)) {
          bVar2 = FUN_140023a74((double)CONCAT44(uVar19,uVar17),local_f0,dVar6);
          if (!bVar2) {
            dVar7 = (double)CONCAT44(uVar15,uVar13);
          }
          auVar1._8_8_ = uStack_d8;
          auVar1._0_8_ = local_e0;
          uVar13 = uVar16;
          uVar15 = uVar18;
          if (!bVar2) {
            uVar10 = uVar21;
            uVar11 = uVar22;
            uVar13 = uVar12;
            uVar15 = uVar14;
            uVar17 = uVar16;
            uVar19 = uVar18;
          }
          uVar3 = (uint)bVar2;
          auVar8._0_4_ = (int)(uVar3 << 0x1f) >> 0x1f;
          auVar8._4_4_ = (int)(uVar3 << 0x1f) >> 0x1f;
          auVar8._8_4_ = (int)(uVar3 << 0x1f) >> 0x1f;
          auVar8._12_4_ = (int)(uVar3 << 0x1f) >> 0x1f;
          auVar20 = auVar20 & auVar8 | ~auVar8 & auVar1;
          auVar9 = ~auVar8 & auVar9 | auVar1 & auVar8;
          bVar5 = true;
          bVar2 = false;
          uVar12 = uVar13;
          uVar14 = uVar15;
          uVar13 = SUB84(dVar7,0);
          uVar15 = (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          bVar5 = true;
          bVar2 = false;
        }
      }
      else {
        auVar20._8_8_ = uStack_d8;
        auVar20._0_8_ = local_e0;
        auVar9._8_8_ = uStack_d8;
        auVar9._0_8_ = local_e0;
        bVar5 = true;
        uVar10 = uVar21;
        uVar11 = uVar22;
        uVar12 = uVar16;
        uVar14 = uVar18;
        uVar17 = uVar16;
        uVar19 = uVar18;
        uVar13 = uVar21;
        uVar15 = uVar22;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0xc);
  *param_3 = CONCAT44(uVar11,uVar10);
  *(undefined1 (*) [16])(param_3 + 1) = auVar20;
  param_3[3] = CONCAT44(uVar15,uVar13);
  *(undefined1 (*) [16])(param_3 + 4) = auVar9;
  if (DAT_14012ea80 != (local_d0 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_d0 ^ (ulonglong)auStack_118);
  }
  return;
}

