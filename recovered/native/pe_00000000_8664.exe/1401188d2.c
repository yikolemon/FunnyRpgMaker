/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401188d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401188d2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_140f17b40 ^ (ulonglong)auStack_118;
  uVar12 = (undefined4)DAT_140e8e150;
  uVar13 = (undefined4)((ulonglong)DAT_140e8e150 >> 0x20);
  bVar5 = true;
  iVar6 = 0;
  bVar7 = false;
  uVar14 = 0;
  uVar16 = 0;
  uVar19 = 0;
  uVar21 = 0;
  auVar22 = _DAT_1402113e0;
  auVar11 = _DAT_1402113e0;
  uVar15 = uVar12;
  uVar17 = uVar13;
  local_f0 = param_2;
  do {
    FUN_14011876d(&local_e8,param_1,iVar6);
    dVar9 = local_e8;
    uVar23 = SUB84(local_e8,0);
    uVar24 = (undefined4)((ulonglong)local_e8 >> 0x20);
    if (0.0 <= local_e8) {
      uVar8 = FUN_14011852d(&local_e8);
      uVar18 = (undefined4)uVar8;
      uVar20 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (bVar7) {
        if ((bVar5) ||
           (cVar2 = FUN_140118614(CONCAT44(uVar21,uVar19),uVar8,CONCAT44(uVar16,uVar14)),
           cVar2 != '\0')) {
          bVar3 = FUN_140118614(CONCAT44(uVar21,uVar19),local_f0,uVar8);
          if (bVar3 == 0) {
            dVar9 = (double)CONCAT44(uVar17,uVar15);
          }
          auVar1._8_8_ = uStack_d8;
          auVar1._0_8_ = local_e0;
          uVar15 = uVar18;
          uVar17 = uVar20;
          if (bVar3 == 0) {
            uVar12 = uVar23;
            uVar13 = uVar24;
            uVar15 = uVar14;
            uVar17 = uVar16;
            uVar19 = uVar18;
            uVar21 = uVar20;
          }
          uVar4 = (uint)bVar3;
          auVar10._0_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar10._4_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar10._8_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar10._12_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar22 = auVar22 & auVar10 | ~auVar10 & auVar1;
          auVar11 = ~auVar10 & auVar11 | auVar1 & auVar10;
          bVar7 = true;
          bVar5 = false;
          uVar14 = uVar15;
          uVar16 = uVar17;
          uVar15 = SUB84(dVar9,0);
          uVar17 = (int)((ulonglong)dVar9 >> 0x20);
        }
        else {
          bVar7 = true;
          bVar5 = false;
        }
      }
      else {
        auVar22._8_8_ = uStack_d8;
        auVar22._0_8_ = local_e0;
        auVar11._8_8_ = uStack_d8;
        auVar11._0_8_ = local_e0;
        bVar7 = true;
        uVar12 = uVar23;
        uVar13 = uVar24;
        uVar14 = uVar18;
        uVar16 = uVar20;
        uVar19 = uVar18;
        uVar21 = uVar20;
        uVar15 = uVar23;
        uVar17 = uVar24;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xc);
  *param_3 = CONCAT44(uVar13,uVar12);
  *(undefined1 (*) [16])(param_3 + 1) = auVar22;
  param_3[3] = CONCAT44(uVar17,uVar15);
  *(undefined1 (*) [16])(param_3 + 4) = auVar11;
  if (DAT_140f17b40 != (local_d0 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_d0 ^ (ulonglong)auStack_118);
  }
  return;
}

